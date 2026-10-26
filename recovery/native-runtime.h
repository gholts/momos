// Native arithmetic support, adapted from DrWhax/unfairplay 6022acd8 (MIT).
#include <stdbool.h>
#include <stdint.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <setjmp.h>
#include <signal.h>

enum { RPageSize = 4096, RPageSlots = 65536 };
typedef struct { uint64_t address; uint8_t *bytes; } RPage;
typedef struct {
    uint64_t x[31], sp, pc;
    uint8_t vectors[32][16];
    bool n, z, c, v;
    RPage *pages;
    size_t pageCount;
    const volatile sig_atomic_t *cancelled;
    jmp_buf failure;
    char error[160];
} RState;

__attribute__((noreturn)) static void r_fail(RState *s, const char *message) {
    snprintf(s->error, sizeof(s->error), "%s at 0x%llx", message, (unsigned long long)s->pc);
    longjmp(s->failure, 1);
}
static void r_wipe(void *memory, size_t count) {
    volatile uint8_t *p = memory;
    while (count--) *p++ = 0;
}
static uint8_t *r_page(RState *s, uint64_t address, bool create) {
    if (s->cancelled && *s->cancelled) r_fail(s, "cancelled");
    uint64_t base = address & ~(uint64_t)(RPageSize - 1);
    uint64_t hash = (base >> 12) * UINT64_C(0x9e3779b97f4a7c15);
    size_t slot = (size_t)(hash ^ (hash >> 32)) & (RPageSlots - 1);
    for (unsigned probes = 0; probes < RPageSlots; ++probes, slot = (slot + 1) & (RPageSlots - 1)) {
        RPage *p = &s->pages[slot];
        if (p->bytes && p->address == base) return p->bytes;
        if (!p->bytes) {
            if (!create) r_fail(s, "unmapped recovery data");
            if (s->pageCount >= RPageSlots * 3 / 4) r_fail(s, "recovery memory limit exceeded");
            p->bytes = calloc(1, RPageSize);
            if (!p->bytes) r_fail(s, "cannot allocate recovery data");
            p->address = base; ++s->pageCount;
            return p->bytes;
        }
    }
    r_fail(s, "recovery page table full");
}
static void r_mapZero(RState *s, uint64_t address, uint64_t count) {
    if (count > UINT64_MAX - address) r_fail(s, "recovery mapping overflow");
    uint64_t end = address + count;
    for (uint64_t page = address & ~(uint64_t)(RPageSize - 1); page < end; page += RPageSize)
        (void)r_page(s, page, true);
}
static void r_read(RState *s, uint64_t address, void *buffer, size_t count) {
    if (count > UINT64_MAX - address) r_fail(s, "recovery read overflow");
    uint8_t *p = buffer;
    while (count) {
        size_t offset = (size_t)address & (RPageSize - 1);
        size_t n = count < RPageSize - offset ? count : RPageSize - offset;
        memcpy(p, r_page(s, address, false) + offset, n);
        address += n; p += n; count -= n;
    }
}
static void r_write(RState *s, uint64_t address, const void *buffer, size_t count) {
    if (count > UINT64_MAX - address) r_fail(s, "recovery write overflow");
    const uint8_t *p = buffer;
    while (count) {
        size_t offset = (size_t)address & (RPageSize - 1);
        size_t n = count < RPageSize - offset ? count : RPageSize - offset;
        memcpy(r_page(s, address, false) + offset, p, n);
        address += n; p += n; count -= n;
    }
}
static uint64_t r_load(RState *s, uint64_t address, int size) {
    uint8_t bytes[8]; uint64_t value = 0;
    if (size < 1 || size > 8) r_fail(s, "invalid recovery load width");
    r_read(s, address, bytes, (size_t)size);
    for (int i = 0; i < size; ++i) value |= (uint64_t)bytes[i] << (8 * i);
    return value;
}
static void r_storeValue(RState *s, uint64_t address, uint64_t value, int size) {
    uint8_t bytes[8];
    if (size < 1 || size > 8) r_fail(s, "invalid recovery store width");
    for (int i = 0; i < size; ++i) bytes[i] = (uint8_t)(value >> (8 * i));
    r_write(s, address, bytes, (size_t)size);
}
static void r_destroy(RState *s) {
    if (!s) return;
    if (s->pages) {
        for (size_t i = 0; i < RPageSlots; ++i) if (s->pages[i].bytes) {
            r_wipe(s->pages[i].bytes, RPageSize); free(s->pages[i].bytes);
        }
        free(s->pages);
    }
    r_wipe(s, sizeof(*s)); free(s);
}

static inline uint64_t bitMask(int bits, int width) {
    return bits >= width ? (width == 32 ? UINT32_MAX : UINT64_MAX) : (UINT64_C(1) << bits) - 1;
}
static inline uint64_t shiftLeft(uint64_t value, int amount, int width) {
    return width == 32 ? (uint32_t)((uint32_t)value << ((unsigned)amount & 31)) : value << ((unsigned)amount & 63);
}
static inline uint64_t shiftRight(uint64_t value, int amount, int width) {
    return width == 32 ? (uint32_t)value >> ((unsigned)amount & 31) : value >> ((unsigned)amount & 63);
}
static inline uint64_t shiftRightArithmetic(uint64_t value, int amount, int width) {
    return width == 32 ? (uint32_t)((int32_t)value >> ((unsigned)amount & 31)) : (uint64_t)((int64_t)value >> ((unsigned)amount & 63));
}
static inline uint64_t rotateRight(uint64_t value, int amount, int width) {
    amount &= width - 1;
    if (width == 32) value = (uint32_t)value;
    if (!amount) return value;
    uint64_t result = value >> amount | value << (width - amount);
    return width == 32 ? (uint32_t)result : result;
}
static inline uint64_t insertBits(uint64_t destination, uint64_t source, int lsb, int bits, int width) {
    uint64_t mask = bitMask(bits, width) << lsb;
    uint64_t result = (destination & ~mask) | ((source << lsb) & mask);
    return width == 32 ? (uint32_t)result : result;
}
static inline uint64_t extractPair(uint64_t high, uint64_t low, int amount, int width) {
    if (width == 32) return (uint32_t)((((uint64_t)(uint32_t)high << 32) | (uint32_t)low) >> amount);
    return amount ? (high << (64 - amount) | low >> amount) : low;
}
static inline uint64_t signExtend32(uint32_t value) { return (uint64_t)(int64_t)(int32_t)value; }
static inline uint64_t signExtendBits(uint64_t value, int bits, int width) {
    uint64_t mask = bitMask(bits, width); value &= mask;
    if (value & (UINT64_C(1) << (bits - 1))) value |= ~mask;
    return width == 32 ? (uint32_t)value : value;
}
static inline uint64_t addOffset(uint64_t value, int64_t offset) { return value + (uint64_t)offset; }
static inline uint64_t boolValue(bool value) { return value; }
static inline uint64_t selectValue(bool condition, uint64_t left, uint64_t right) { return condition ? left : right; }
static inline uint64_t reverseBytes32(uint64_t value) { return __builtin_bswap32((uint32_t)value); }
static inline uint64_t reverseBytes64(uint64_t value) { return __builtin_bswap64(value); }
static inline uint64_t countLeadingZeros(uint64_t value, int width) {
    if (width == 32) return (uint32_t)value ? __builtin_clz((uint32_t)value) : 32;
    return value ? __builtin_clzll(value) : 64;
}
static inline uint32_t rotateRight32(uint32_t value, uint32_t amount) {
    amount &= 31; return amount ? value >> amount | value << (32 - amount) : value;
}
static inline uint32_t mask32(uint32_t width) { return width >= 32 ? UINT32_MAX : (UINT32_C(1) << width) - 1; }
static inline uint64_t multiplyHigh64(uint64_t a, uint64_t b) { return (uint64_t)(((__uint128_t)a * b) >> 64); }
static inline uint32_t bits_ReverseBytes32(uint32_t value) { return __builtin_bswap32(value); }
static inline int bits_LeadingZeros32(uint32_t value) { return value ? __builtin_clz(value) : 32; }
static inline uint64_t unsignedDivide(uint64_t a, uint64_t b, int width) {
    if (width == 32) { a = (uint32_t)a; b = (uint32_t)b; }
    return b ? a / b : 0;
}
static inline void r_compare32(RState *s, uint32_t a, uint32_t b) {
    uint32_t result = a - b; s->n = result >> 31; s->z = result == 0; s->c = a >= b;
    s->v = ((a ^ b) & (a ^ result) & UINT32_C(0x80000000)) != 0;
}
static inline void r_compare64(RState *s, uint64_t a, uint64_t b) {
    uint64_t result = a - b; s->n = result >> 63; s->z = result == 0; s->c = a >= b;
    s->v = ((a ^ b) & (a ^ result) & UINT64_C(0x8000000000000000)) != 0;
}
static inline uint64_t r_subtractWithFlags(RState *s, uint64_t a, uint64_t b, int width) {
    if (width == 32) { r_compare32(s, (uint32_t)a, (uint32_t)b); return (uint32_t)((uint32_t)a - (uint32_t)b); }
    r_compare64(s, a, b); return a - b;
}
static inline uint64_t r_addWithCarry(RState *s, uint64_t a, uint64_t b, bool carry, int width) {
    if (width == 32) {
        uint64_t full = (uint64_t)(uint32_t)a + (uint32_t)b + carry;
        uint32_t result = (uint32_t)full; s->n = result >> 31; s->z = result == 0; s->c = (full >> 32) != 0;
        s->v = (~((uint32_t)a ^ (uint32_t)b) & ((uint32_t)a ^ result) & UINT32_C(0x80000000)) != 0;
        return result;
    }
    __uint128_t full = (__uint128_t)a + b + carry; uint64_t result = (uint64_t)full;
    s->n = result >> 63; s->z = result == 0; s->c = (full >> 64) != 0;
    s->v = (~(a ^ b) & (a ^ result) & UINT64_C(0x8000000000000000)) != 0;
    return result;
}
static inline void r_test32(RState *s, uint32_t value) { s->n = value >> 31; s->z = !value; s->c = s->v = false; }
static inline void r_test64(RState *s, uint64_t value) { s->n = value >> 63; s->z = !value; s->c = s->v = false; }
static inline void r_setNZCV(RState *s, int value) { s->n = value & 8; s->z = value & 4; s->c = value & 2; s->v = value & 1; }
static inline bool r_conditionIndex(RState *s, int value) {
    switch (value) {
        case 0: return s->z; case 1: return !s->z; case 2: return s->c; case 3: return !s->c;
        case 4: return s->n; case 5: return !s->n; case 6: return s->v; case 7: return !s->v;
        case 8: return s->c && !s->z; case 9: return !s->c || s->z;
        case 10: return s->n == s->v; case 11: return s->n != s->v;
        case 12: return !s->z && s->n == s->v; case 13: return s->z || s->n != s->v;
        default: r_fail(s, "invalid condition");
    }
}
static inline bool r_condition(RState *s, const char *name) {
    static const char *const names[] = {"eq","ne","hs","lo","mi","pl","vs","vc","hi","ls","ge","lt","gt","le"};
    for (int i = 0; i < 14; ++i) if (!strcmp(name, names[i])) return r_conditionIndex(s, i);
    r_fail(s, "invalid condition name");
}

static inline uint64_t r_lane(const uint8_t *bytes, int lane, int bits) {
    uint64_t value = 0; bytes += lane * bits / 8;
    for (int i = 0; i < bits / 8; ++i) value |= (uint64_t)bytes[i] << (i * 8);
    return value;
}
static inline void r_putLane(uint8_t *bytes, int lane, int bits, uint64_t value) {
    bytes += lane * bits / 8;
    for (int i = 0; i < bits / 8; ++i) bytes[i] = (uint8_t)(value >> (i * 8));
}
static inline uint64_t r_vectorLane(RState *s, int reg, int lane, int bits) { return r_lane(s->vectors[reg], lane, bits); }
static inline void r_setVectorLane(RState *s, int reg, int lane, int bits, uint64_t value) { r_putLane(s->vectors[reg], lane, bits, value); }
static inline void r_clearVector(RState *s, int reg) { memset(s->vectors[reg], 0, 16); }
static inline void r_loadVector(RState *s, int reg, uint64_t address, int size) {
    r_clearVector(s, reg); r_read(s, address, s->vectors[reg], (size_t)size);
}
static inline void r_storeVector(RState *s, int reg, uint64_t address, int size) { r_write(s, address, s->vectors[reg], (size_t)size); }
static inline void r_vectorDup(RState *s, int reg, int lanes, int bits, uint64_t value) {
    r_clearVector(s, reg); for (int i = 0; i < lanes; ++i) r_setVectorLane(s, reg, i, bits, value);
}
static inline void r_vectorBinary(RState *s, const char *op, int dst, int left, int right, int lanes, int bits) {
    uint8_t output[16] = {0};
    for (int i = 0; i < lanes; ++i) {
        uint64_t a = r_vectorLane(s, left, i, bits), b = r_vectorLane(s, right, i, bits), value;
        if (!strcmp(op,"add")) value = a + b;
        else if (!strcmp(op,"sub")) value = a - b;
        else if (!strcmp(op,"mul")) value = a * b;
        else if (!strcmp(op,"eor")) value = a ^ b;
        else r_fail(s,"invalid vector arithmetic");
        r_putLane(output, i, bits, value);
    }
    memcpy(s->vectors[dst], output, 16);
}
static inline void r_vectorMultiplyAccumulate(RState *s, int dst, int left, int right, int lanes, int bits, bool subtract) {
    uint8_t output[16]={0};
    for (int i = 0; i < lanes; ++i) {
        uint64_t a = r_vectorLane(s, dst, i, bits), product = r_vectorLane(s,left,i,bits) * r_vectorLane(s,right,i,bits);
        r_putLane(output,i,bits,subtract ? a-product : a+product);
    }
    memcpy(s->vectors[dst],output,16);
}
static inline void r_vectorUnsignedMultiplyLong(RState *s, int dst, int left, int right, int lanes, int bits, bool high) {
    uint8_t output[16]={0};int start=high ? lanes : 0;
    for(int i=0;i<lanes;++i) r_putLane(output,i,bits*2,r_vectorLane(s,left,start+i,bits)*r_vectorLane(s,right,start+i,bits));
    memcpy(s->vectors[dst],output,16);
}
static inline void r_vectorUnsignedShiftLong(RState *s, int dst, int src, int lanes, int bits, int amount, bool high) {
    uint8_t output[16]={0};int start=high ? lanes : 0;
    for(int i=0;i<lanes;++i) r_putLane(output,i,bits*2,amount>=64 ? 0 : r_vectorLane(s,src,start+i,bits)<<amount);
    memcpy(s->vectors[dst],output,16);
}
static inline void r_vectorShiftRightNarrow(RState *s, int dst, int src, int lanes, int bits, int amount) {
    uint8_t output[16]={0};
    for(int i=0;i<lanes;++i) r_putLane(output,i,bits,amount>=64 ? 0 : r_vectorLane(s,src,i,bits*2)>>amount);
    memcpy(s->vectors[dst],output,16);
}
static inline void r_vectorUnsignedShiftRight(RState *s, int dst, int src, int lanes, int bits, int amount) {
    uint8_t output[16]={0};
    for(int i=0;i<lanes;++i) r_putLane(output,i,bits,amount>=64 ? 0 : r_vectorLane(s,src,i,bits)>>amount);
    memcpy(s->vectors[dst],output,16);
}
static inline void r_vectorUnsignedShift(RState *s, int dst, int src, int shifts, int lanes, int bits) {
    uint8_t output[16]={0};
    for(int i=0;i<lanes;++i) {
        uint64_t value=r_vectorLane(s,src,i,bits);
        int64_t shift=(int8_t)r_vectorLane(s,shifts,i,bits);
        if(shift>=bits || shift<=-bits) value=0;
        else if(shift>=0) value<<=shift;
        else value>>=-shift;
        r_putLane(output,i,bits,value);
    }
    memcpy(s->vectors[dst],output,16);
}
static inline void r_vectorExtractNarrow(RState *s, int dst, int src, int lanes, int bits) {
    uint8_t output[16]={0};
    for(int i=0;i<lanes;++i) r_putLane(output,i,bits,r_vectorLane(s,src,i,bits*2));
    memcpy(s->vectors[dst],output,16);
}
static inline void r_vectorUnzipEven(RState *s, int dst, int left, int right, int lanes, int bits) {
    uint8_t output[16]={0};int half=lanes/2;
    for(int i=0;i<half;++i) {
        r_putLane(output,i,bits,r_vectorLane(s,left,i*2,bits));
        r_putLane(output,half+i,bits,r_vectorLane(s,right,i*2,bits));
    }
    memcpy(s->vectors[dst],output,16);
}
static inline void r_vectorEor3(RState *s,int dst,int a,int b,int c) {
    for(int i=0;i<16;++i) s->vectors[dst][i]=s->vectors[a][i]^s->vectors[b][i]^s->vectors[c][i];
}
static inline void r_vectorTable(RState *s,int dst,const int64_t *tables,int indexes,int count) {
    uint8_t output[16]={0};
    for(int i=0;i<16;++i) {
        unsigned index=s->vectors[indexes][i];
        if(index<(unsigned)count*16) output[i]=s->vectors[tables[index/16]][index%16];
    }
    memcpy(s->vectors[dst],output,16);
}
