// Fixed native recovery blocks; generated from the verified 26A428 path.
#include "native-runtime.h"
uint64_t r_bb_10060b1f0(RState *s) {
    uint64_t next = 0;
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0xa62))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0x75bb, 16, 16, 32)))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0xbab7))))));
    s->x[10] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[10])))), 0x8a44, 16, 16, 32)))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[19])))) + ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[20] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) & ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[9] = ((uint64_t)(((s->sp + shiftLeft(((uint64_t)(0x9)), 12, 64)))));
    __auto_type value7 = r_load(s, addOffset(s->x[9], 3459), 1);
    s->x[10] = ((uint64_t)(((uint32_t)(value7))));
    s->x[25] = ((uint64_t)(((s->sp + shiftLeft(((uint64_t)(0xa)), 12, 64)))));
    __auto_type value9 = r_load(s, addOffset(s->x[25], 4976), 4);
    s->x[9] = ((uint64_t)(((uint32_t)(value9))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0x7d40))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[20])))) + ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) * ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[19]))))))))));
    __auto_type value14 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[11] = ((uint64_t)(value14));
    __auto_type value15 = r_load(s, ((s->x[11] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[10]))))))), 3, 64))), 8);
    s->x[10] = ((uint64_t)(value15));
    s->x[17] = ((uint64_t)(((uint64_t)(0xb0db))));
    next = s->x[10];
    return next;
}

uint64_t r_bb_10060c230(RState *s) {
    uint64_t next = 0;
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0xb26b))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0x8ef4, 16, 16, 32)))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    __auto_type value3 = r_load(s, addOffset(s->sp, 29704), 8);
    s->x[19] = ((uint64_t)(value3));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0x6995))))));
    s->x[10] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[10])))), 0x710b, 16, 16, 32)))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) + ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    __auto_type value8 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[11] = ((uint64_t)(value8));
    __auto_type value9 = r_load(s, ((s->x[11] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[10]))))))), 3, 64))), 8);
    s->x[10] = ((uint64_t)(value9));
    s->x[17] = ((uint64_t)(((uint64_t)(0xcdf6))));
    next = s->x[10];
    return next;
}

uint64_t r_bb_10060c670(RState *s) {
    uint64_t next = 0;
    s->x[24] = ((uint64_t)(((uint64_t)(0x0))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0x5993))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0x373f))))));
    s->x[21] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) * ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    __auto_type value5 = r_load(s, addOffset(s->sp, 14156), 4);
    s->x[10] = ((uint64_t)(((uint32_t)(value5))));
    __auto_type value6 = r_load(s, s->x[8], 4);
    s->x[11] = ((uint64_t)(((uint32_t)(value6))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[11])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[10])))))));
    s->x[10] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "eq"))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0xffff91b8))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[21])))) + ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) * ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    __auto_type value13 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[11] = ((uint64_t)(value13));
    __auto_type value14 = r_load(s, ((s->x[11] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[10]))))))), 3, 64))), 8);
    s->x[10] = ((uint64_t)(value14));
    s->x[17] = ((uint64_t)(((uint64_t)(0x7c7e))));
    next = s->x[10];
    return next;
}

uint64_t r_bb_10060cf58(RState *s) {
    uint64_t next = 0;
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0x9d48))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0xeef, 16, 16, 32)))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0xa128))))));
    s->x[10] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[10])))), 0x8004, 16, 16, 32)))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) + ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) | ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0x3e70))))));
    s->x[10] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[10])))), 0x8ef4, 16, 16, 32)))));
    __auto_type value8 = r_load(s, addOffset(s->sp, 3296), 8);
    s->x[11] = ((uint64_t)(value8));
    __auto_type value9 = r_load(s, s->x[11], 4);
    s->x[11] = ((uint64_t)(((uint32_t)(value9))));
    __auto_type value10 = r_load(s, addOffset(s->sp, 3288), 8);
    s->x[12] = ((uint64_t)(value10));
    __auto_type value11 = r_load(s, s->x[12], 8);
    s->x[12] = ((uint64_t)(value11));
    s->x[13] = ((uint64_t)(((uint32_t)(((uint64_t)(0xe89b))))));
    s->x[13] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[13])))), 0x89f0, 16, 16, 32)))));
    s->x[19] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) + ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[19])))) ^ ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    s->x[10] = ((uint64_t)(((s->x[10] & s->x[11]))));
    s->x[10] = ((uint64_t)(((s->x[12] + s->x[10]))));
    __auto_type value18 = r_load(s, s->x[10], 8);
    s->x[10] = ((uint64_t)(value18));
    s->x[11] = ((uint64_t)(((s->x[10] & ((uint64_t)(0x7fffffffffffffff))))));
    s->x[12] = ((uint64_t)(((uint64_t)(0x1a3f))));
    s->x[12] = ((uint64_t)(insertBits(s->x[12], 0x2734, 16, 16, 64)));
    s->x[12] = ((uint64_t)(insertBits(s->x[12], 0xed9c, 32, 16, 64)));
    s->x[12] = ((uint64_t)(insertBits(s->x[12], 0x3559, 48, 16, 64)));
    s->x[10] = ((uint64_t)(((s->x[10] & s->x[12]))));
    s->x[12] = ((uint64_t)(((uint64_t)(0x68aa))));
    s->x[12] = ((uint64_t)(insertBits(s->x[12], 0x952b, 16, 16, 64)));
    s->x[12] = ((uint64_t)(insertBits(s->x[12], 0x8893, 32, 16, 64)));
    s->x[12] = ((uint64_t)(insertBits(s->x[12], 0xb550, 48, 16, 64)));
    s->x[12] = ((uint64_t)(((s->x[8] + s->x[12]))));
    s->x[10] = ((uint64_t)(((s->x[10] ^ s->x[12]))));
    s->x[20] = ((uint64_t)(((uint64_t)(0xf1aa))));
    s->x[20] = ((uint64_t)(insertBits(s->x[20], 0x9bd5, 16, 16, 64)));
    s->x[20] = ((uint64_t)(insertBits(s->x[20], 0x656b, 32, 16, 64)));
    s->x[20] = ((uint64_t)(insertBits(s->x[20], 0xaa9, 48, 16, 64)));
    s->x[11] = ((uint64_t)(((s->x[11] ^ s->x[20]))));
    s->x[11] = ((uint64_t)(((s->x[11] ^ s->x[10]))));
    s->x[10] = ((uint64_t)(((s->x[11] - s->x[10]))));
    r_storeValue(s, addOffset(s->sp, 17008), s->x[10], 8);
    s->x[10] = ((uint64_t)(((s->sp + shiftLeft(((uint64_t)(0x8)), 12, 64)))));
    __auto_type value40 = r_load(s, addOffset(s->x[10], 1088), 8);
    s->x[21] = ((uint64_t)(value40));
    s->x[10] = ((uint64_t)(((s->x[21] + ((uint64_t)(0x150))))));
    return 0x10060d000;
}

uint64_t r_bb_10060d000(RState *s) {
    uint64_t next = 0;
    r_storeValue(s, addOffset(s->sp, 12008), s->x[10], 8);
    __auto_type value1 = r_load(s, addOffset(s->x[21], 336), 8);
    s->x[10] = ((uint64_t)(value1));
    r_compare64(s, ((uint64_t)(s->x[10])), ((uint64_t)(((uint64_t)(0x0)))));
    s->x[11] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "ne"))))));
    s->x[12] = ((uint64_t)(((uint32_t)(shiftLeft(((uint64_t)(((uint32_t)(s->x[11])))), ((int64_t)(((uint64_t)(0x9)))), 32)))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) - ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    __auto_type value7 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[11] = ((uint64_t)(value7));
    __auto_type value8 = r_load(s, ((s->x[11] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[9]))))))), 3, 64))), 8);
    s->x[9] = ((uint64_t)(value8));
    s->x[17] = ((uint64_t)(((uint64_t)(0xcc10))));
    next = s->x[9];
    return next;
}

uint64_t r_bb_10060d28c(RState *s) {
    uint64_t next = 0;
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0x5d96))))));
    __auto_type value1 = r_load(s, addOffset(s->sp, 2816), 8);
    s->x[16] = ((uint64_t)(value1));
    r_storeValue(s, s->x[16], ((uint64_t)(((uint32_t)(s->x[8])))), 4);
    __auto_type value3 = r_load(s, addOffset(s->sp, 22136), 8);
    s->x[8] = ((uint64_t)(value3));
    s->x[17] = ((uint64_t)(((uint64_t)(0x83fa))));
    next = s->x[8];
    return next;
}

uint64_t r_bb_10060d368(RState *s) {
    uint64_t next = 0;
    __auto_type value0 = r_load(s, addOffset(s->sp, 6960), 8);
    s->x[8] = ((uint64_t)(value0));
    s->x[8] = ((uint64_t)(((s->x[8] - ((uint64_t)(0x10))))));
    r_storeValue(s, addOffset(s->sp, 6960), s->x[8], 8);
    __auto_type value3 = r_load(s, addOffset(s->sp, 32488), 8);
    s->x[9] = ((uint64_t)(value3));
    s->x[17] = ((uint64_t)(((uint64_t)(0x1549))));
    next = s->x[9];
    return next;
}

uint64_t r_bb_10060ede8(RState *s) {
    uint64_t next = 0;
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0x7d68))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0x710b, 16, 16, 32)))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) + ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    r_storeValue(s, addOffset(s->x[0], 44), ((uint64_t)(((uint32_t)(s->x[10])))), 4);
    __auto_type value4 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[10] = ((uint64_t)(value4));
    __auto_type value5 = r_load(s, ((s->x[10] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[8]))))))), 3, 64))), 8);
    s->x[8] = ((uint64_t)(value5));
    s->x[17] = ((uint64_t)(((uint64_t)(0x1df3))));
    next = s->x[8];
    return next;
}

uint64_t r_bb_10060f3c0(RState *s) {
    uint64_t next = 0;
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0xee7a))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0x82bf, 16, 16, 32)))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0xa14a))))));
    s->x[10] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[10])))), 0xc34, 16, 16, 32)))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[23])))) + ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[24] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) | ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    r_storeValue(s, addOffset(s->sp, 5564), ((uint64_t)(((uint32_t)(s->x[8])))), 4);
    __auto_type value7 = r_load(s, addOffset(s->sp, 27832), 8);
    s->x[8] = ((uint64_t)(value7));
    __auto_type value8 = r_load(s, s->x[8], 8);
    s->x[20] = ((uint64_t)(value8));
    __auto_type value9 = r_load(s, addOffset(s->sp, 3956), 4);
    s->x[25] = ((uint64_t)(((uint32_t)(value9))));
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0xaa44))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0x8ef4, 16, 16, 32)))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[23])))) ^ ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) ^ ((uint64_t)(((uint32_t)(s->x[24]))))))))));
    __auto_type value14 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[9] = ((uint64_t)(value14));
    __auto_type value15 = r_load(s, ((s->x[9] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[8]))))))), 3, 64))), 8);
    s->x[9] = ((uint64_t)(value15));
    return 0x10060f400;
}

uint64_t r_bb_10060f400(RState *s) {
    uint64_t next = 0;
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0x6976))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0x6976, 16, 16, 32)))));
    s->x[27] = ((uint64_t)(((uint32_t)(((uint64_t)(0x7bc4))))));
    s->x[27] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[27])))), 0xce75, 16, 16, 32)))));
    s->x[12] = ((uint64_t)(((s->sp + shiftLeft(((uint64_t)(0x7)), 12, 64)))));
    s->x[12] = ((uint64_t)(((s->x[12] + ((uint64_t)(0x3cc))))));
    s->x[17] = ((uint64_t)(((uint64_t)(0x5e04))));
    next = s->x[9];
    return next;
}

uint64_t r_bb_10060fd78(RState *s) {
    uint64_t next = 0;
    __auto_type value0 = r_load(s, addOffset(s->sp, 17688), 8);
    s->x[8] = ((uint64_t)(value0));
    s->x[17] = ((uint64_t)(((uint64_t)(0x1cf6))));
    next = s->x[8];
    return next;
}

uint64_t r_bb_10060fea8(RState *s) {
    uint64_t next = 0;
    s->x[17] = ((uint64_t)(((uint64_t)(0x3f94))));
    next = s->x[10];
    return next;
}

uint64_t r_bb_10061085c(RState *s) {
    uint64_t next = 0;
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0xdaae))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0x4081, 16, 16, 32)))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x255c))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0x378b, 16, 16, 32)))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0x4a))))));
    s->x[10] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[10])))), 0x88f4, 16, 16, 32)))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) + ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[24] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) | ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) - ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) - ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) | ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0xa174))))));
    s->x[10] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[10])))), 0x8ef4, 16, 16, 32)))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[24])))) ^ ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(shiftRight(((uint64_t)(((uint32_t)(s->x[9])))), ((int64_t)(((uint64_t)(((uint32_t)(s->x[10])))))), 32)))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) & ((uint64_t)(0x1))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(shiftLeft(((uint64_t)(((uint32_t)(s->x[10])))), ((int64_t)(((uint64_t)(0x1)))), 32)))));
    s->x[10] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[10])))), ((uint64_t)(((uint32_t)(s->x[9])))), 3, 1, 32)))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x1495))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0xce75, 16, 16, 32)))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    __auto_type value23 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[10] = ((uint64_t)(value23));
    __auto_type value24 = r_load(s, ((s->x[10] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[9]))))))), 3, 64))), 8);
    s->x[9] = ((uint64_t)(value24));
    s->x[17] = ((uint64_t)(((uint64_t)(0xf82e))));
    next = s->x[9];
    return next;
}

uint64_t r_bb_1006120fc(RState *s) {
    uint64_t next = 0;
    r_storeValue(s, addOffset(s->sp, 3520), s->x[24], 8);
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0xffffd5c8))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x3231))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[21])))) + ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) | ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    __auto_type value5 = r_load(s, addOffset(s->sp, 2472), 8);
    s->x[8] = ((uint64_t)(value5));
    __auto_type value6 = r_load(s, s->x[8], 4);
    s->x[8] = ((uint64_t)(((uint32_t)(value6))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0xd311))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0x5ff2, 16, 16, 32)))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    __auto_type value10 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[10] = ((uint64_t)(value10));
    __auto_type value11 = r_load(s, ((s->x[10] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[21]))))))), 3, 64))), 8);
    s->x[11] = ((uint64_t)(value11));
    s->x[16] = ((uint64_t)(((uint32_t)(((uint64_t)(0x64))))));
    s->x[20] = ((uint64_t)(((uint32_t)(((uint64_t)(0x5dc7))))));
    s->x[20] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[20])))), 0x304d, 16, 16, 32)))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0xffffffc1))))));
    s->x[2] = ((uint64_t)(((uint32_t)(((uint64_t)(0xffff95d1))))));
    s->x[1] = ((uint64_t)(((uint32_t)(((uint64_t)(0x6225))))));
    s->x[0] = ((uint64_t)(((uint32_t)(((uint64_t)(0x62ed))))));
    s->x[0] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[0])))), 0xbe20, 16, 16, 32)))));
    s->x[3] = ((uint64_t)(((uint32_t)(((uint64_t)(0xd215))))));
    s->x[3] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[3])))), 0x3c87, 16, 16, 32)))));
    s->x[4] = ((uint64_t)(((uint64_t)(0x100000000))));
    s->x[5] = ((uint64_t)(((uint64_t)(0xffffffffffff2dc4))));
    s->x[5] = ((uint64_t)(insertBits(s->x[5], 0xc378, 16, 16, 64)));
    s->x[6] = ((uint64_t)(((uint64_t)(0xffffffffffff6f58))));
    s->x[6] = ((uint64_t)(insertBits(s->x[6], 0x1bc1, 16, 16, 64)));
    s->x[6] = ((uint64_t)(insertBits(s->x[6], 0xfffe, 32, 16, 64)));
    s->x[19] = ((uint64_t)(((uint32_t)(((uint64_t)(0x2dec))))));
    s->x[19] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[19])))), 0xc378, 16, 16, 32)))));
    s->x[22] = ((uint64_t)(((uint32_t)(((uint64_t)(0x918a))))));
    s->x[22] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[22])))), 0xca7b, 16, 16, 32)))));
    s->x[23] = ((uint64_t)(((uint32_t)(((uint64_t)(0x767f))))));
    s->x[23] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[23])))), 0x3584, 16, 16, 32)))));
    s->x[24] = ((uint64_t)(((uint32_t)(((uint64_t)(0xc752))))));
    s->x[24] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[24])))), 0xee5b, 16, 16, 32)))));
    s->x[26] = ((uint64_t)(((uint32_t)(((uint64_t)(0xffdf))))));
    s->x[26] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[26])))), 0x11a3, 16, 16, 32)))));
    s->x[27] = ((uint64_t)(((uint32_t)(((uint64_t)(0x40d8))))));
    s->x[28] = ((uint64_t)(((uint32_t)(((uint64_t)(0x13))))));
    s->x[17] = ((uint64_t)(((uint64_t)(0xe3a9))));
    next = s->x[11];
    return next;
}

uint64_t r_bb_100612e24(RState *s) {
    uint64_t next = 0;
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0x1b86))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((uint64_t)(0xdcf0))))));
    s->x[13] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[13])))), 0x8ef3, 16, 16, 32)))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) + ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) + ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    __auto_type value5 = r_load(s, s->x[10], 4);
    s->x[13] = ((uint64_t)(((uint32_t)(value5))));
    s->x[14] = ((uint64_t)(((uint32_t)(((uint64_t)(0xbd2c))))));
    s->x[14] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[14])))), 0xe216, 16, 16, 32)))));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) + ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) + ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    r_test32(s, ((uint32_t)((((uint64_t)(((uint32_t)(s->x[14])))) & ((uint64_t)(((uint32_t)(s->x[13]))))))));
    s->x[13] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "eq"))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((uint64_t)(0xf2))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) * ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) ^ ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    __auto_type value15 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[13] = ((uint64_t)(value15));
    __auto_type value16 = r_load(s, ((s->x[13] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[12]))))))), 3, 64))), 8);
    s->x[12] = ((uint64_t)(value16));
    s->x[17] = ((uint64_t)(((uint64_t)(0x83ad))));
    next = s->x[12];
    return next;
}

uint64_t r_bb_100613b5c(RState *s) {
    uint64_t next = 0;
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0xb069))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0x710b, 16, 16, 32)))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) + ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[9] = ((uint64_t)(((s->sp + shiftLeft(((uint64_t)(0x8)), 12, 64)))));
    __auto_type value4 = r_load(s, addOffset(s->x[9], 5680), 8);
    s->x[14] = ((uint64_t)(value4));
    __auto_type value5 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[9] = ((uint64_t)(value5));
    __auto_type value6 = r_load(s, ((s->x[9] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[8]))))))), 3, 64))), 8);
    s->x[8] = ((uint64_t)(value6));
    s->x[17] = ((uint64_t)(((uint64_t)(0xee1c))));
    next = s->x[8];
    return next;
}

uint64_t r_bb_100614248(RState *s) {
    uint64_t next = 0;
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0xa2ba))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0xdef5, 16, 16, 32)))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0xa3eb))))));
    s->x[10] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[10])))), 0xaffe, 16, 16, 32)))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) + ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) & ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    __auto_type value6 = r_load(s, addOffset(s->x[2], 2832), 8);
    s->x[10] = ((uint64_t)(value6));
    __auto_type value7 = r_load(s, addOffset(s->x[10], 32), 4);
    s->x[8] = ((uint64_t)(((uint32_t)(value7))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0x204b))))));
    s->x[11] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[11])))), 0x1407, 16, 16, 32)))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) + ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) + ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((uint64_t)(0xfbf8))))));
    s->x[14] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[14])))), 0x7eda, 16, 16, 32)))));
    s->x[14] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) ^ ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((uint64_t)(0x941f))))));
    s->x[15] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[15])))), 0xa809, 16, 16, 32)))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[11])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[15])))))));
    s->x[16] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "lo"))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) + ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[8])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[15])))))));
    s->x[14] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "lo"))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[16])))) ^ ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[11])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[8])))))));
    s->x[8] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "ls"))))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[15])))))), ((uint32_t)(((uint64_t)(0x0)))));
    s->x[8] = ((uint64_t)(((uint32_t)(selectValue(r_condition(s, "ne"), ((uint64_t)(((uint32_t)(s->x[14])))), ((uint64_t)(((uint32_t)(s->x[8])))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0x26))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) * ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) ^ ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    __auto_type value30 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[11] = ((uint64_t)(value30));
    __auto_type value31 = r_load(s, ((s->x[11] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[8]))))))), 3, 64))), 8);
    s->x[11] = ((uint64_t)(value31));
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0x1))))));
    s->x[4] = ((uint64_t)(((uint32_t)(((uint64_t)(0x7bc5))))));
    s->x[4] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[4])))), 0xce75, 16, 16, 32)))));
    s->x[17] = ((uint64_t)(((uint64_t)(0xc826))));
    next = s->x[11];
    return next;
}

uint64_t r_bb_1006144c0(RState *s) {
    uint64_t next = 0;
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0x99f9))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0x8ef4, 16, 16, 32)))));
    s->x[9] = ((uint64_t)(((uint64_t)(0xb530))));
    s->x[9] = ((uint64_t)(insertBits(s->x[9], 0x1f4, 16, 16, 64)));
    s->x[9] = ((uint64_t)(insertBits(s->x[9], 0xa39f, 32, 16, 64)));
    s->x[9] = ((uint64_t)(insertBits(s->x[9], 0x353e, 48, 16, 64)));
    r_compare64(s, ((uint64_t)(s->x[19])), ((uint64_t)(s->x[9])));
    s->x[9] = ((uint64_t)(selectValue(r_condition(s, "hi"), s->x[19], s->x[9])));
    s->x[10] = ((uint64_t)(((uint64_t)(0xb523))));
    s->x[10] = ((uint64_t)(insertBits(s->x[10], 0x1f4, 16, 16, 64)));
    s->x[10] = ((uint64_t)(insertBits(s->x[10], 0xa39f, 32, 16, 64)));
    s->x[10] = ((uint64_t)(insertBits(s->x[10], 0x353e, 48, 16, 64)));
    s->x[11] = ((uint64_t)(((uint64_t)(0xd12e))));
    s->x[11] = ((uint64_t)(insertBits(s->x[11], 0x28f4, 16, 16, 64)));
    s->x[11] = ((uint64_t)(insertBits(s->x[11], 0x6b6c, 32, 16, 64)));
    s->x[11] = ((uint64_t)(insertBits(s->x[11], 0x74c2, 48, 16, 64)));
    s->x[9] = ((uint64_t)(((s->x[9] + s->x[10]))));
    s->x[10] = ((uint64_t)(((s->x[9] ^ s->x[11]))));
    s->x[11] = ((uint64_t)(((uint64_t)(0x4492))));
    s->x[11] = ((uint64_t)(insertBits(s->x[11], 0xd4e2, 16, 16, 64)));
    s->x[11] = ((uint64_t)(insertBits(s->x[11], 0xd3ad, 32, 16, 64)));
    s->x[11] = ((uint64_t)(insertBits(s->x[11], 0xe140, 48, 16, 64)));
    s->x[12] = ((uint64_t)(((uint64_t)(0x71ed))));
    s->x[12] = ((uint64_t)(insertBits(s->x[12], 0x3e25, 16, 16, 64)));
    s->x[12] = ((uint64_t)(insertBits(s->x[12], 0xbd1d, 32, 16, 64)));
    s->x[12] = ((uint64_t)(insertBits(s->x[12], 0xcb7f, 48, 16, 64)));
    s->x[12] = ((uint64_t)(((s->x[9] ^ s->x[12]))));
    s->x[13] = ((uint64_t)(((uint64_t)(0xe453))));
    s->x[13] = ((uint64_t)(insertBits(s->x[13], 0xc233, 16, 16, 64)));
    s->x[13] = ((uint64_t)(insertBits(s->x[13], 0x5dc, 32, 16, 64)));
    s->x[13] = ((uint64_t)(insertBits(s->x[13], 0x5efd, 48, 16, 64)));
    s->x[12] = ((uint64_t)(((s->x[12] + s->x[13]))));
    s->x[13] = ((uint64_t)(((uint64_t)(0x331e))));
    s->x[13] = ((uint64_t)(insertBits(s->x[13], 0xc89b, 16, 16, 64)));
    s->x[13] = ((uint64_t)(insertBits(s->x[13], 0x2cb8, 32, 16, 64)));
    s->x[13] = ((uint64_t)(insertBits(s->x[13], 0x2a9f, 48, 16, 64)));
    s->x[13] = ((uint64_t)(((s->x[9] ^ s->x[13]))));
    s->x[14] = ((uint64_t)(((uint64_t)(0xa6a2))));
    s->x[14] = ((uint64_t)(insertBits(s->x[14], 0x348d, 16, 16, 64)));
    s->x[14] = ((uint64_t)(insertBits(s->x[14], 0x9479, 32, 16, 64)));
    s->x[14] = ((uint64_t)(insertBits(s->x[14], 0xbf1d, 48, 16, 64)));
    s->x[15] = ((uint64_t)(((uint64_t)(0x5832))));
    s->x[15] = ((uint64_t)(insertBits(s->x[15], 0x4eaf, 16, 16, 64)));
    s->x[15] = ((uint64_t)(insertBits(s->x[15], 0xbdf7, 32, 16, 64)));
    s->x[15] = ((uint64_t)(insertBits(s->x[15], 0xff5f, 48, 16, 64)));
    s->x[24] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[25])))) + ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[8] = ((uint64_t)(((s->x[24] + s->x[15]))));
    s->x[8] = ((uint64_t)(((s->x[8] ^ s->x[9]))));
    s->x[10] = ((uint64_t)(((s->x[10] + s->x[11]))));
    s->x[9] = ((uint64_t)(((s->x[10] ^ s->x[9]))));
    s->x[10] = ((uint64_t)(((uint64_t)(0x6c23))));
    s->x[10] = ((uint64_t)(insertBits(s->x[10], 0x21b5, 16, 16, 64)));
    s->x[10] = ((uint64_t)(insertBits(s->x[10], 0x536, 32, 16, 64)));
    s->x[10] = ((uint64_t)(insertBits(s->x[10], 0x6add, 48, 16, 64)));
    s->x[11] = ((uint64_t)(((s->x[13] + s->x[14]))));
    s->x[11] = ((uint64_t)(((s->x[12] ^ s->x[11]))));
    s->x[9] = ((uint64_t)(((s->x[9] ^ s->x[11]))));
    s->x[8] = ((uint64_t)(((s->x[8] + s->x[10]))));
    s->x[8] = ((uint64_t)(((s->x[9] ^ s->x[8]))));
    s->x[8] = ((uint64_t)(((s->x[8] & ((uint64_t)(0xfffffffffffffffc))))));
    s->x[9] = ((uint64_t)(((uint64_t)(0xea55))));
    s->x[9] = ((uint64_t)(insertBits(s->x[9], 0xbd43, 16, 16, 64)));
    s->x[9] = ((uint64_t)(insertBits(s->x[9], 0xeaf1, 32, 16, 64)));
    s->x[9] = ((uint64_t)(insertBits(s->x[9], 0xf04c, 48, 16, 64)));
    s->x[9] = ((uint64_t)(((s->x[8] ^ s->x[9]))));
    s->x[10] = ((uint64_t)(((uint64_t)(0x5d70))));
    s->x[10] = ((uint64_t)(insertBits(s->x[10], 0x7e0e, 16, 16, 64)));
    s->x[10] = ((uint64_t)(insertBits(s->x[10], 0x2ba5, 32, 16, 64)));
    s->x[10] = ((uint64_t)(insertBits(s->x[10], 0xef24, 48, 16, 64)));
    s->x[9] = ((uint64_t)(((s->x[9] + s->x[10]))));
    s->x[10] = ((uint64_t)(((uint64_t)(0x9d4))));
    s->x[10] = ((uint64_t)(insertBits(s->x[10], 0x9bde, 16, 16, 64)));
    s->x[10] = ((uint64_t)(insertBits(s->x[10], 0x1f9e, 32, 16, 64)));
    s->x[10] = ((uint64_t)(insertBits(s->x[10], 0xb499, 48, 16, 64)));
    s->x[10] = ((uint64_t)(((s->x[8] ^ s->x[10]))));
    s->x[11] = ((uint64_t)(((uint64_t)(0xbeef))));
    s->x[11] = ((uint64_t)(insertBits(s->x[11], 0x5893, 16, 16, 64)));
    s->x[11] = ((uint64_t)(insertBits(s->x[11], 0xdeca, 32, 16, 64)));
    s->x[11] = ((uint64_t)(insertBits(s->x[11], 0xabf1, 48, 16, 64)));
    s->x[10] = ((uint64_t)(((s->x[10] + s->x[11]))));
    s->x[9] = ((uint64_t)(((s->x[9] ^ s->x[10]))));
    s->x[10] = ((uint64_t)(((uint64_t)(0x89c1))));
    s->x[10] = ((uint64_t)(insertBits(s->x[10], 0x2574, 16, 16, 64)));
    s->x[10] = ((uint64_t)(insertBits(s->x[10], 0xb251, 32, 16, 64)));
    s->x[10] = ((uint64_t)(insertBits(s->x[10], 0x2ea8, 48, 16, 64)));
    s->x[8] = ((uint64_t)(((s->x[8] ^ s->x[10]))));
    s->x[10] = ((uint64_t)(((uint64_t)(0x3efc))));
    s->x[10] = ((uint64_t)(insertBits(s->x[10], 0xe639, 16, 16, 64)));
    s->x[10] = ((uint64_t)(insertBits(s->x[10], 0x7305, 32, 16, 64)));
    s->x[10] = ((uint64_t)(insertBits(s->x[10], 0x31c0, 48, 16, 64)));
    s->x[8] = ((uint64_t)(((s->x[8] + s->x[10]))));
    s->x[8] = ((uint64_t)(((s->x[9] ^ s->x[8]))));
    s->x[9] = ((uint64_t)(((uint64_t)(0x229d))));
    s->x[9] = ((uint64_t)(insertBits(s->x[9], 0x3f5b, 16, 16, 64)));
    s->x[9] = ((uint64_t)(insertBits(s->x[9], 0x7995, 32, 16, 64)));
    s->x[9] = ((uint64_t)(insertBits(s->x[9], 0x8aea, 48, 16, 64)));
    s->x[8] = ((uint64_t)(((s->x[8] + s->x[9]))));
    s->x[9] = ((uint64_t)(((s->sp + shiftLeft(((uint64_t)(0x8)), 12, 64)))));
    r_storeValue(s, addOffset(s->x[9], 208), s->x[8], 8);
    s->x[20] = ((uint64_t)(((s->sp + shiftLeft(((uint64_t)(0x6)), 12, 64)))));
    s->x[20] = ((uint64_t)(((s->x[20] + ((uint64_t)(0xa0c))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0x12c3))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[25])))) ^ ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    __auto_type value103 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[9] = ((uint64_t)(value103));
    __auto_type value104 = r_load(s, ((s->x[9] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[8]))))))), 3, 64))), 8);
    s->x[9] = ((uint64_t)(value104));
    s->x[8] = ((uint64_t)(((uint64_t)(0xb524))));
    s->x[8] = ((uint64_t)(insertBits(s->x[8], 0x1f4, 16, 16, 64)));
    s->x[8] = ((uint64_t)(insertBits(s->x[8], 0xa39f, 32, 16, 64)));
    s->x[8] = ((uint64_t)(insertBits(s->x[8], 0x353e, 48, 16, 64)));
    s->x[17] = ((uint64_t)(((uint64_t)(0x750b))));
    next = s->x[9];
    return next;
}

uint64_t r_bb_100614e14(RState *s) {
    uint64_t next = 0;
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x4984))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0xf13a, 16, 16, 32)))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0x1693))))));
    s->x[10] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[10])))), 0x4318, 16, 16, 32)))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0x7f9d))))));
    s->x[11] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[11])))), 0x7fd1, 16, 16, 32)))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[19])))) + ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) & ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0x2045))))));
    s->x[11] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[11])))), 0x318a, 16, 16, 32)))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[8])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[11])))))));
    s->x[11] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "lt"))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[19])))) + ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0x1))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) & ~(((uint64_t)(((uint32_t)(s->x[11])))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0x6a9e))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) * ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0xfe98))))));
    s->x[12] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[12])))), 0x710b, 16, 16, 32)))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[19])))) + ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) ^ ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    __auto_type value23 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[12] = ((uint64_t)(value23));
    __auto_type value24 = r_load(s, ((s->x[12] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[11]))))))), 3, 64))), 8);
    s->x[11] = ((uint64_t)(value24));
    s->x[17] = ((uint64_t)(((uint64_t)(0x5dd4))));
    next = s->x[11];
    return next;
}

uint64_t r_bb_10061537c(RState *s) {
    uint64_t next = 0;
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0xe391))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0x4f8f, 16, 16, 32)))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0xaffb))))));
    s->x[10] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[10])))), 0xb06f, 16, 16, 32)))));
    s->x[11] = ((uint64_t)(((s->sp + shiftLeft(((uint64_t)(0x11)), 12, 64)))));
    s->x[11] = ((uint64_t)(((s->x[11] + ((uint64_t)(0x148))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0x3bda))))));
    s->x[12] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[12])))), 0x3699, 16, 16, 32)))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) | ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((uint64_t)(0xc425))))));
    s->x[13] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[13])))), 0xc966, 16, 16, 32)))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) | ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) - ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) + ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0x7c2c))))));
    s->x[12] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[12])))), 0x4c0b, 16, 16, 32)))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) ^ ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0xb333))))));
    s->x[12] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[12])))), 0x31b6, 16, 16, 32)))));
    s->x[13] = ((uint64_t)(((s->sp + shiftLeft(((uint64_t)(0x11)), 12, 64)))));
    r_storeValue(s, addOffset(s->x[13], 336), s->x[8], 8);
    s->x[8] = ((uint64_t)(((uint32_t)((((((uint64_t)(((uint32_t)(s->x[11])))) * ((uint64_t)(((uint32_t)(s->x[12]))))) + ((uint64_t)(((uint32_t)(s->x[20]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0x33d6))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) + ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    r_storeValue(s, addOffset(s->x[13], 328), ((uint64_t)(((uint32_t)(s->x[8])))), 4);
    __auto_type value25 = r_load(s, addOffset(s->sp, 3560), 8);
    s->x[8] = ((uint64_t)(value25));
    __auto_type value26 = r_load(s, s->x[8], 4);
    s->x[8] = ((uint64_t)(((uint32_t)(value26))));
    __auto_type value27 = r_load(s, addOffset(s->sp, 3552), 8);
    s->x[11] = ((uint64_t)(value27));
    __auto_type value28 = r_load(s, s->x[11], 4);
    s->x[11] = ((uint64_t)(((uint32_t)(value28))));
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0xa6))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) - ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) ^ ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0xd4cf))))));
    return 0x100615400;
}

uint64_t r_bb_100615400(RState *s) {
    uint64_t next = 0;
    s->x[11] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[11])))), 0xa5c, 16, 16, 32)))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) * ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    __auto_type value2 = r_load(s, addOffset(s->sp, 2832), 8);
    s->x[11] = ((uint64_t)(value2));
    s->x[11] = ((uint64_t)(((s->x[11] + ((uint64_t)(((uint8_t)(((uint64_t)(((uint32_t)(s->x[8]))))))))))));
    __auto_type value4 = r_load(s, s->x[11], 1);
    s->x[11] = ((uint64_t)(((uint32_t)(value4))));
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0x9a))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) ^ ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    __auto_type value7 = r_load(s, addOffset(s->sp, 2824), 8);
    s->x[12] = ((uint64_t)(value7));
    __auto_type value8 = r_load(s, ((s->x[12] + ((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[11])))))))))), 1);
    s->x[11] = ((uint64_t)(((uint32_t)(value8))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[20])))) + ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[22] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) & ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) ^ ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0xd079))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) + ((uint64_t)(((uint8_t)(((uint64_t)(((uint32_t)(s->x[8]))))))))))))));
    __auto_type value14 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[23] = ((uint64_t)(value14));
    __auto_type value15 = r_load(s, ((s->x[23] + shiftLeft(((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[8])))))))), 3, 64))), 8);
    s->x[8] = ((uint64_t)(value15));
    s->x[0] = ((uint64_t)(((s->sp + shiftLeft(((uint64_t)(0x11)), 12, 64)))));
    s->x[0] = ((uint64_t)(((s->x[0] + ((uint64_t)(0x148))))));
    s->x[17] = ((uint64_t)(((uint64_t)(0x3b19))));
    s->x[30] = 0x100615450;
    next = s->x[8];
    return next;
}

uint64_t r_bb_100615450(RState *s) {
    uint64_t next = 0;
    r_storeValue(s, s->x[21], ((uint64_t)(0)), 8);
    __auto_type value1 = r_load(s, ((s->x[23] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[20]))))))), 3, 64))), 8);
    s->x[8] = ((uint64_t)(value1));
    s->x[17] = ((uint64_t)(((uint64_t)(0xacd4))));
    next = s->x[8];
    return next;
}

uint64_t r_bb_1006181e4(RState *s) {
    uint64_t next = 0;
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0x6cee))))));
    s->x[10] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[10])))), 0x9efe, 16, 16, 32)))));
    s->x[13] = ((uint64_t)(((uint32_t)(((uint64_t)(0xf56b))))));
    s->x[13] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[13])))), 0xeff5, 16, 16, 32)))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) + ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) & ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((uint64_t)(0x6984))))));
    s->x[13] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[13])))), 0x710b, 16, 16, 32)))));
    r_storeValue(s, addOffset(s->x[14], 4868), ((uint64_t)(((uint32_t)(s->x[8])))), 4);
    s->x[14] = ((uint64_t)(((uint32_t)(((uint64_t)(0x47da))))));
    s->x[14] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[14])))), 0xf8fe, 16, 16, 32)))));
    s->x[14] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[19])))) ^ ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((uint64_t)(0xb826))))));
    s->x[15] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[15])))), 0x701, 16, 16, 32)))));
    s->x[14] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[14])))) + ((uint64_t)(((uint32_t)(s->x[15]))))))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((uint64_t)(0xf1da))))));
    s->x[15] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[15])))), 0x84a6, 16, 16, 32)))));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[19])))) ^ ((uint64_t)(((uint32_t)(s->x[15]))))))))));
    s->x[16] = ((uint64_t)(((uint32_t)(((uint64_t)(0xe26))))));
    s->x[16] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[16])))), 0x7b59, 16, 16, 32)))));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) + ((uint64_t)(((uint32_t)(s->x[16]))))))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[14])))) ^ ((uint64_t)(((uint32_t)(s->x[15]))))))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((uint64_t)(0xcdc5))))));
    s->x[15] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[15])))), 0xb22d, 16, 16, 32)))));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[19])))) ^ ((uint64_t)(((uint32_t)(s->x[15]))))))))));
    s->x[16] = ((uint64_t)(((uint32_t)(((uint64_t)(0x323b))))));
    s->x[16] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[16])))), 0x4dd2, 16, 16, 32)))));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) + ((uint64_t)(((uint32_t)(s->x[16]))))))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[14])))) ^ ((uint64_t)(((uint32_t)(s->x[15]))))))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((uint64_t)(0x7ad4))))));
    s->x[15] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[15])))), 0x760e, 16, 16, 32)))));
    s->x[16] = ((uint64_t)(((uint32_t)(((uint64_t)(0xfc76))))));
    s->x[16] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[16])))), 0x4483, 16, 16, 32)))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) + ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[16]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) + ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) + ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((uint64_t)(0x13c3))))));
    s->x[13] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[13])))), 0xd351, 16, 16, 32)))));
    s->x[14] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) + ((uint64_t)(((uint32_t)(s->x[15]))))))))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[14])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[13])))))));
    s->x[15] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "lo"))))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[12])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[13])))))));
    s->x[13] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "lo"))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) ^ ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[14])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[12])))))));
    s->x[12] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "lo"))))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[15])))))), ((uint32_t)(((uint64_t)(0x0)))));
    s->x[12] = ((uint64_t)(((uint32_t)(selectValue(r_condition(s, "ne"), ((uint64_t)(((uint32_t)(s->x[13])))), ((uint64_t)(((uint32_t)(s->x[12])))))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((uint64_t)(0x6d07))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) * ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    __auto_type value52 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[12] = ((uint64_t)(value52));
    __auto_type value53 = r_load(s, ((s->x[12] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[9]))))))), 3, 64))), 8);
    s->x[9] = ((uint64_t)(value53));
    s->x[21] = ((uint64_t)(((uint32_t)(((uint64_t)(0x98ef))))));
    s->x[21] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[21])))), 0x5d42, 16, 16, 32)))));
    s->x[17] = ((uint64_t)(((uint64_t)(0x7faf))));
    next = s->x[9];
    return next;
}

uint64_t r_bb_1006192a8(RState *s) {
    uint64_t next = 0;
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0x5be2))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[0])))) + ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) - ((uint64_t)(((uint32_t)(s->x[20]))))))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((uint64_t)(0x6253))))));
    s->x[14] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[14])))), 0x1526, 16, 16, 32)))));
    s->x[14] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[0])))) + ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[13])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[14])))))));
    s->x[15] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "eq"))))));
    __auto_type value8 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[13] = ((uint64_t)(value8));
    __auto_type value9 = r_load(s, ((s->x[13] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[0]))))))), 3, 64))), 8);
    s->x[13] = ((uint64_t)(value9));
    s->x[17] = ((uint64_t)(((uint64_t)(0x9c69))));
    next = s->x[13];
    return next;
}

uint64_t r_bb_10061afcc(RState *s) {
    uint64_t next = 0;
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0x5e32))))));
    s->x[21] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0xa9))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0x318a, 16, 16, 32)))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[22])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[8])))))));
    s->x[8] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "eq"))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0xec59))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) * ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    __auto_type value10 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[9] = ((uint64_t)(value10));
    __auto_type value11 = r_load(s, ((s->x[9] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[8]))))))), 3, 64))), 8);
    s->x[8] = ((uint64_t)(value11));
    s->x[17] = ((uint64_t)(((uint64_t)(0x156))));
    return 0x10061b000;
}

uint64_t r_bb_10061b000(RState *s) {
    uint64_t next = 0;
    next = s->x[8];
    return next;
}

uint64_t r_bb_10061d044(RState *s) {
    uint64_t next = 0;
    s->x[14] = ((uint64_t)(((uint32_t)(((uint64_t)(0x1429))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((uint64_t)(0x83bf))))));
    s->x[15] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[15])))), 0x8ef4, 16, 16, 32)))));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[15]))))))))));
    __auto_type value4 = r_load(s, s->x[13], 8);
    s->x[13] = ((uint64_t)(value4));
    __auto_type value5 = r_load(s, s->x[12], 8);
    s->x[12] = ((uint64_t)(value5));
    __auto_type value6 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[16] = ((uint64_t)(value6));
    __auto_type value7 = r_load(s, ((s->x[16] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[8]))))))), 3, 64))), 8);
    s->x[8] = ((uint64_t)(value7));
    s->x[17] = ((uint64_t)(((s->sp + shiftLeft(((uint64_t)(0x8)), 12, 64)))));
    r_storeValue(s, addOffset(s->x[17], 1592), s->x[8], 8);
    s->x[8] = ((uint64_t)(((s->sp + shiftLeft(((uint64_t)(0xa)), 12, 64)))));
    r_storeValue(s, addOffset(s->x[8], 4328), s->x[11], 8);
    r_storeValue(s, addOffset(s->x[8], 4336), s->x[10], 8);
    r_storeValue(s, addOffset(s->x[8], 4344), s->x[13], 8);
    r_storeValue(s, addOffset(s->x[8], 4352), s->x[12], 8);
    r_compare64(s, ((uint64_t)(s->x[11])), ((uint64_t)(((uint64_t)(0x0)))));
    if (r_condition(s, "ne"))
    {
        r_compare64(s, ((uint64_t)(s->x[10])), ((uint64_t)(((uint64_t)(0x0)))));
    }
    else
    {
        r_setNZCV(s, 0x4);
    }
    if (r_condition(s, "ne"))
    {
        r_compare64(s, ((uint64_t)(s->x[13])), ((uint64_t)(((uint64_t)(0x0)))));
    }
    else
    {
        r_setNZCV(s, 0x4);
    }
    if (r_condition(s, "ne"))
    {
        r_compare64(s, ((uint64_t)(s->x[12])), ((uint64_t)(((uint64_t)(0x0)))));
    }
    else
    {
        r_setNZCV(s, 0x4);
    }
    s->x[10] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "eq"))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0x7e8f))))));
    s->x[11] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[11])))), 0x710c, 16, 16, 32)))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) + ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) ^ ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) + ((uint64_t)(((uint32_t)(s->x[15]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) * ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    __auto_type value27 = r_load(s, ((s->x[16] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[9]))))))), 3, 64))), 8);
    s->x[9] = ((uint64_t)(value27));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0x5279))))));
    s->x[10] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[10])))), 0x2242, 16, 16, 32)))));
    s->x[4] = ((uint64_t)(((uint32_t)(((uint64_t)(0x201c))))));
    s->x[4] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[4])))), 0x318a, 16, 16, 32)))));
    s->x[17] = ((uint64_t)(((uint64_t)(0x3ee5))));
    next = s->x[9];
    return next;
}

uint64_t r_bb_10061d158(RState *s) {
    uint64_t next = 0;
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0x19c0))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0x8ef4, 16, 16, 32)))));
    __auto_type value2 = r_load(s, addOffset(s->sp, 3544), 4);
    s->x[14] = ((uint64_t)(((uint32_t)(value2))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[14])))) ^ ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0xffff8eba))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) + ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0xbea7))))));
    s->x[10] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[10])))), 0x710b, 16, 16, 32)))));
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0x616c))))));
    s->x[12] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[12])))), 0x7274, 16, 16, 32)))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[9])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[12])))))));
    s->x[12] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "lt"))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((uint64_t)(0xffff47ab))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) + ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) * ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[14])))) + ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) ^ ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    __auto_type value17 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[12] = ((uint64_t)(value17));
    __auto_type value18 = r_load(s, ((s->x[12] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[10]))))))), 3, 64))), 8);
    s->x[10] = ((uint64_t)(value18));
    s->x[17] = ((uint64_t)(((uint64_t)(0xbf38))));
    next = s->x[10];
    return next;
}

uint64_t r_bb_10061d314(RState *s) {
    uint64_t next = 0;
    s->x[20] = ((uint64_t)(s->x[0]));
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0xffff9398))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0xffffc3a1))))));
    s->x[24] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[21])))) + ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[24])))) + ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x4940))))));
    s->x[19] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) | ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    r_storeValue(s, addOffset(s->x[0], 280), ((uint64_t)(0)), 8);
    s->x[21] = ((uint64_t)(((uint32_t)(((uint64_t)(0x7bc5))))));
    s->x[21] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[21])))), 0xce75, 16, 16, 32)))));
    r_storeValue(s, addOffset(s->x[0], 288), ((uint64_t)(((uint32_t)(s->x[21])))), 4);
    r_storeValue(s, addOffset(s->x[0], 292), ((uint64_t)(((uint32_t)(s->x[21])))), 4);
    __auto_type value12 = r_load(s, addOffset(s->sp, 3560), 8);
    s->x[8] = ((uint64_t)(value12));
    __auto_type value13 = r_load(s, s->x[8], 4);
    s->x[8] = ((uint64_t)(((uint32_t)(value13))));
    __auto_type value14 = r_load(s, addOffset(s->sp, 3552), 8);
    s->x[9] = ((uint64_t)(value14));
    __auto_type value15 = r_load(s, s->x[9], 4);
    s->x[9] = ((uint64_t)(((uint32_t)(value15))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) - ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) ^ ((uint64_t)(((uint32_t)(s->x[22]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) * ((uint64_t)(((uint32_t)(s->x[23]))))))))));
    __auto_type value19 = r_load(s, addOffset(s->sp, 3536), 8);
    s->x[9] = ((uint64_t)(value19));
    s->x[9] = ((uint64_t)(((s->x[9] + ((uint64_t)(((uint8_t)(((uint64_t)(((uint32_t)(s->x[8]))))))))))));
    __auto_type value21 = r_load(s, s->x[9], 1);
    s->x[9] = ((uint64_t)(((uint32_t)(value21))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0xfa))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    __auto_type value24 = r_load(s, addOffset(s->sp, 3528), 8);
    s->x[10] = ((uint64_t)(value24));
    __auto_type value25 = r_load(s, ((s->x[10] + ((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[9])))))))))), 1);
    s->x[9] = ((uint64_t)(((uint32_t)(value25))));
    r_storeValue(s, addOffset(s->sp, 16880), ((uint64_t)(0)), 8);
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0xcf57))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) + ((uint64_t)(((uint8_t)(((uint64_t)(((uint32_t)(s->x[8]))))))))))))));
    __auto_type value30 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[22] = ((uint64_t)(value30));
    __auto_type value31 = r_load(s, ((s->x[22] + shiftLeft(((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[8])))))))), 3, 64))), 8);
    s->x[8] = ((uint64_t)(value31));
    s->x[0] = ((uint64_t)(((uint32_t)(((uint64_t)(0x14))))));
    s->x[17] = ((uint64_t)(((uint64_t)(0x79e9))));
    s->x[30] = 0x10061d3a0;
    next = s->x[8];
    return next;
}

uint64_t r_bb_10061d3a0(RState *s) {
    uint64_t next = 0;
    r_compare64(s, ((uint64_t)(s->x[0])), ((uint64_t)(((uint64_t)(0x0)))));
    s->x[8] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "ne"))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x69f3))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[19])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) * ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) ^ ((uint64_t)(((uint32_t)(s->x[24]))))))))));
    __auto_type value6 = r_load(s, ((s->x[22] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[8]))))))), 3, 64))), 8);
    s->x[8] = ((uint64_t)(value6));
    s->x[17] = ((uint64_t)(((uint64_t)(0x7b3d))));
    next = s->x[8];
    return next;
}

uint64_t r_bb_10061d960(RState *s) {
    uint64_t next = 0;
    s->x[10] = ((uint64_t)(((uint64_t)(0x0))));
    __auto_type value1 = r_load(s, addOffset(s->sp, 3296), 8);
    s->x[9] = ((uint64_t)(value1));
    __auto_type value2 = r_load(s, s->x[9], 4);
    s->x[9] = ((uint64_t)(((uint32_t)(value2))));
    __auto_type value3 = r_load(s, addOffset(s->sp, 3288), 8);
    s->x[12] = ((uint64_t)(value3));
    __auto_type value4 = r_load(s, s->x[12], 8);
    s->x[12] = ((uint64_t)(value4));
    s->x[13] = ((uint64_t)(((uint32_t)(((uint64_t)(0x3048))))));
    s->x[13] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[13])))), 0x6dc3, 16, 16, 32)))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) & ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    __auto_type value8 = r_load(s, ((s->x[12] + ((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[9])))))))))), 4);
    s->x[9] = ((uint64_t)(((uint32_t)(value8))));
    s->x[16] = ((uint64_t)(((uint32_t)(((uint64_t)(0x3049))))));
    s->x[16] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[16])))), 0x6dc3, 16, 16, 32)))));
    s->x[9] = ((uint64_t)(((s->x[9] ^ s->x[16]))));
    s->x[12] = ((uint64_t)(0x101084000));
    s->x[12] = ((uint64_t)(((s->x[12] + ((uint64_t)(0x6c0))))));
    __auto_type value14 = r_load(s, s->x[12], 8);
    s->x[12] = ((uint64_t)(value14));
    s->x[13] = ((uint64_t)(((uint64_t)(0x30ec))));
    s->x[13] = ((uint64_t)(insertBits(s->x[13], 0xa7a7, 16, 16, 64)));
    s->x[13] = ((uint64_t)(insertBits(s->x[13], 0xc012, 32, 16, 64)));
    s->x[13] = ((uint64_t)(insertBits(s->x[13], 0xfff0, 48, 16, 64)));
    s->x[12] = ((uint64_t)(((s->x[12] ^ s->x[13]))));
    s->x[13] = ((uint64_t)(((s->x[9] & s->x[12]))));
    s->x[14] = ((uint64_t)(0x101086000));
    __auto_type value22 = r_load(s, addOffset(s->x[14], 312), 8);
    s->x[14] = ((uint64_t)(value22));
    s->x[15] = ((uint64_t)(((uint64_t)(0x589f))));
    s->x[15] = ((uint64_t)(insertBits(s->x[15], 0x870a, 16, 16, 64)));
    s->x[15] = ((uint64_t)(insertBits(s->x[15], 0x5504, 32, 16, 64)));
    s->x[15] = ((uint64_t)(insertBits(s->x[15], 0x12af, 48, 16, 64)));
    s->x[14] = ((uint64_t)(((s->x[14] ^ s->x[15]))));
    s->x[13] = ((uint64_t)(((s->x[14] + s->x[13]))));
    __auto_type value29 = r_load(s, s->x[13], 4);
    s->x[13] = ((uint64_t)(((uint32_t)(value29))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[13] = ((uint64_t)(((s->x[9] & s->x[12]))));
    s->x[13] = ((uint64_t)(((s->x[14] + s->x[13]))));
    __auto_type value33 = r_load(s, s->x[13], 4);
    s->x[13] = ((uint64_t)(((uint32_t)(value33))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[13] = ((uint64_t)(((s->x[9] & s->x[12]))));
    s->x[13] = ((uint64_t)(((s->x[14] + s->x[13]))));
    __auto_type value37 = r_load(s, s->x[13], 4);
    s->x[13] = ((uint64_t)(((uint32_t)(value37))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[13] = ((uint64_t)(((s->x[9] & s->x[12]))));
    s->x[13] = ((uint64_t)(((s->x[14] + s->x[13]))));
    __auto_type value41 = r_load(s, s->x[13], 4);
    s->x[13] = ((uint64_t)(((uint32_t)(value41))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[13] = ((uint64_t)(((s->x[9] & s->x[12]))));
    s->x[13] = ((uint64_t)(((s->x[14] + s->x[13]))));
    __auto_type value45 = r_load(s, s->x[13], 4);
    s->x[13] = ((uint64_t)(((uint32_t)(value45))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[13] = ((uint64_t)(((s->x[9] & s->x[12]))));
    s->x[13] = ((uint64_t)(((s->x[14] + s->x[13]))));
    __auto_type value49 = r_load(s, s->x[13], 4);
    s->x[13] = ((uint64_t)(((uint32_t)(value49))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[13] = ((uint64_t)(((s->x[9] & s->x[12]))));
    s->x[13] = ((uint64_t)(((s->x[14] + s->x[13]))));
    __auto_type value53 = r_load(s, s->x[13], 4);
    s->x[13] = ((uint64_t)(((uint32_t)(value53))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[12] = ((uint64_t)(((s->x[9] & s->x[12]))));
    s->x[12] = ((uint64_t)(((s->x[14] + s->x[12]))));
    __auto_type value57 = r_load(s, s->x[12], 4);
    s->x[12] = ((uint64_t)(((uint32_t)(value57))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[3] = ((uint64_t)(((s->sp + shiftLeft(((uint64_t)(0xb)), 12, 64)))));
    s->x[3] = ((uint64_t)(((s->x[3] + ((uint64_t)(0x5e8))))));
    r_storeValue(s, addOffset(s->x[3], 32), ((uint64_t)(0)), 8);
    r_storeValue(s, ((addOffset(s->x[3], 32)) + 8), s->x[11], 8);
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) * ((uint64_t)(((uint32_t)(s->x[16]))))))))));
    r_vectorDup(s, 0, 2, 32, ((uint64_t)(((uint32_t)(s->x[15])))));
    s->x[9] = ((uint64_t)(0x100f49000));
    r_loadVector(s, 2, addOffset(s->x[9], 2496), 8);
    r_vectorBinary(s, "add", 1, 0, 2, 2, 32);
    r_vectorBinary(s, "eor", 3, 1, 0, 8, 8);
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x193))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0x100, 16, 16, 32)))));
    r_vectorDup(s, 1, 2, 32, ((uint64_t)(((uint32_t)(s->x[9])))));
    r_vectorBinary(s, "mul", 3, 3, 1, 2, 32);
    s->x[9] = ((uint64_t)(0x100f49000));
    r_loadVector(s, 4, addOffset(s->x[9], 2504), 8);
    r_vectorUnsignedMultiplyLong(s, 4, 3, 4, 2, 32, false);
    r_vectorShiftRightNarrow(s, 4, 4, 2, 32, 32);
    r_vectorBinary(s, "sub", 5, 3, 4, 2, 32);
    r_vectorDup(s, 6, 2, 32, (((uint64_t)(0x80)) << 24));
    __auto_type vectorValue78 = r_vectorLane(s, 6, 0, 64);
    r_clearVector(s, 6);
    r_setVectorLane(s, 6, 0, 64, (vectorValue78 ^ ((((uint64_t)(1)) << 63))));
    r_vectorUnsignedMultiplyLong(s, 5, 5, 6, 2, 32, false);
    r_vectorShiftRightNarrow(s, 5, 5, 2, 32, 32);
    r_vectorBinary(s, "add", 4, 5, 4, 2, 32);
    r_vectorUnsignedShiftRight(s, 4, 4, 2, 32, 2);
    r_vectorMultiplyAccumulate(s, 3, 4, 2, 2, 32, true);
    s->x[9] = ((uint64_t)(0x100f49000));
    r_loadVector(s, 2, addOffset(s->x[9], 2512), 8);
    r_vectorBinary(s, "add", 4, 0, 2, 2, 32);
    r_vectorBinary(s, "eor", 4, 4, 0, 8, 8);
    r_vectorBinary(s, "mul", 4, 4, 1, 2, 32);
    s->x[9] = ((uint64_t)(0x100f49000));
    r_loadVector(s, 5, addOffset(s->x[9], 2520), 8);
    r_vectorUnsignedMultiplyLong(s, 5, 4, 5, 2, 32, false);
    r_vectorShiftRightNarrow(s, 5, 5, 2, 32, 32);
    s->x[9] = ((uint64_t)(0x100f49000));
    r_loadVector(s, 6, addOffset(s->x[9], 2528), 8);
    r_vectorUnsignedShift(s, 5, 5, 6, 2, 32);
    r_vectorMultiplyAccumulate(s, 4, 5, 2, 2, 32, true);
    s->x[13] = ((uint64_t)(((uint32_t)(r_vectorLane(s, 3, 1, 32)))));
    s->x[11] = ((uint64_t)(((uint32_t)(r_vectorLane(s, 4, 1, 32)))));
    s->x[14] = ((uint64_t)(((uint32_t)(r_vectorLane(s, 3, 0, 32)))));
    s->x[12] = ((uint64_t)(((uint32_t)(r_vectorLane(s, 4, 0, 32)))));
    __auto_type value101 = r_load(s, addOffset(s->x[3], 39), 1);
    s->x[9] = ((uint64_t)(((uint32_t)(value101))));
    s->x[0] = ((uint64_t)(((s->x[14] & ((uint64_t)(0xff))))));
    s->x[1] = ((uint64_t)(((s->sp + shiftLeft(((uint64_t)(0xb)), 12, 64)))));
    s->x[1] = ((uint64_t)(((s->x[1] + ((uint64_t)(0x608))))));
    s->x[0] = ((uint64_t)(((s->x[1] | s->x[0]))));
    __auto_type value106 = r_load(s, s->x[0], 1);
    s->x[2] = ((uint64_t)(((uint32_t)(value106))));
    r_storeValue(s, s->x[0], ((uint64_t)(((uint32_t)(s->x[9])))), 1);
    r_storeValue(s, addOffset(s->x[3], 39), ((uint64_t)(((uint32_t)(s->x[2])))), 1);
    __auto_type value109 = r_load(s, addOffset(s->x[3], 38), 1);
    s->x[9] = ((uint64_t)(((uint32_t)(value109))));
    s->x[0] = ((uint64_t)(((s->x[13] & ((uint64_t)(0xff))))));
    s->x[0] = ((uint64_t)(((s->x[1] | s->x[0]))));
    __auto_type value112 = r_load(s, s->x[0], 1);
    s->x[2] = ((uint64_t)(((uint32_t)(value112))));
    r_storeValue(s, s->x[0], ((uint64_t)(((uint32_t)(s->x[9])))), 1);
    r_storeValue(s, addOffset(s->x[3], 38), ((uint64_t)(((uint32_t)(s->x[2])))), 1);
    __auto_type value115 = r_load(s, addOffset(s->x[3], 37), 1);
    s->x[9] = ((uint64_t)(((uint32_t)(value115))));
    s->x[0] = ((uint64_t)(((s->x[12] & ((uint64_t)(0xff))))));
    s->x[0] = ((uint64_t)(((s->x[1] | s->x[0]))));
    __auto_type value118 = r_load(s, s->x[0], 1);
    s->x[2] = ((uint64_t)(((uint32_t)(value118))));
    r_storeValue(s, s->x[0], ((uint64_t)(((uint32_t)(s->x[9])))), 1);
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x5f87))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) + ((uint64_t)(0x1))))))));
    memcpy(s->vectors[2], s->vectors[0], 16);
    r_setVectorLane(s, 2, 1, 32, ((uint64_t)(((uint32_t)(s->x[15])))));
    r_vectorBinary(s, "mul", 2, 2, 0, 2, 32);
    r_vectorBinary(s, "eor", 0, 2, 0, 8, 8);
    r_storeValue(s, addOffset(s->x[3], 37), ((uint64_t)(((uint32_t)(s->x[2])))), 1);
    __auto_type value128 = r_load(s, addOffset(s->x[3], 36), 1);
    s->x[15] = ((uint64_t)(((uint32_t)(value128))));
    __auto_type value129 = r_load(s, addOffset(s->x[3], 32), 1);
    s->x[0] = ((uint64_t)(((uint32_t)(value129))));
    r_storeValue(s, addOffset(s->x[3], 32), ((uint64_t)(((uint32_t)(s->x[15])))), 1);
    r_storeValue(s, addOffset(s->x[3], 36), ((uint64_t)(((uint32_t)(s->x[0])))), 1);
    __auto_type value132 = r_load(s, addOffset(s->x[3], 35), 1);
    s->x[15] = ((uint64_t)(((uint32_t)(value132))));
    s->x[0] = ((uint64_t)(((s->x[11] & ((uint64_t)(0xff))))));
    s->x[0] = ((uint64_t)(((s->x[1] | s->x[0]))));
    __auto_type value135 = r_load(s, s->x[0], 1);
    s->x[1] = ((uint64_t)(((uint32_t)(value135))));
    r_storeValue(s, s->x[0], ((uint64_t)(((uint32_t)(s->x[15])))), 1);
    r_storeValue(s, addOffset(s->x[3], 35), ((uint64_t)(((uint32_t)(s->x[1])))), 1);
    __auto_type value138 = r_load(s, addOffset(s->x[3], 32), 1);
    s->x[15] = ((uint64_t)(((uint32_t)(value138))));
    __auto_type value139 = r_load(s, addOffset(s->x[3], 33), 2);
    s->x[0] = ((uint64_t)(((uint32_t)(value139))));
    r_storeValue(s, addOffset(s->x[3], 34), ((uint64_t)(((uint32_t)(s->x[15])))), 1);
    r_storeValue(s, addOffset(s->x[3], 32), ((uint64_t)(((uint32_t)(s->x[0])))), 2);
    r_loadVector(s, 2, addOffset(s->x[3], 32), 8);
    __auto_type vectorValue143 = r_vectorLane(s, 0, 0, 64);
    r_clearVector(s, 3);
    r_setVectorLane(s, 3, 0, 64, vectorValue143);
    r_vectorMultiplyAccumulate(s, 3, 2, 1, 2, 32, false);
    r_storeVector(s, 3, addOffset(s->x[3], 32), 8);
    __auto_type value146 = r_load(s, addOffset(s->x[3], 40), 8);
    s->x[15] = ((uint64_t)(value146));
    s->x[16] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) * ((uint64_t)(((uint32_t)(s->x[16]))))))))));
    s->x[16] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[16])))) ^ ((uint64_t)(((uint32_t)(s->x[17]))))))))));
    r_vectorDup(s, 1, 4, 32, ((uint64_t)(((uint32_t)(s->x[16])))));
    s->x[17] = ((uint64_t)(0x100d25000));
    r_loadVector(s, 2, addOffset(s->x[17], 2144), 16);
    s->x[17] = ((uint64_t)(0x100d25000));
    r_loadVector(s, 3, addOffset(s->x[17], 2160), 16);
    s->x[17] = ((uint64_t)(0x100d25000));
    r_loadVector(s, 4, addOffset(s->x[17], 2176), 16);
    s->x[17] = ((uint64_t)(0x100d25000));
    r_loadVector(s, 5, addOffset(s->x[17], 2192), 16);
    s->x[17] = ((uint64_t)(0x100f49000));
    r_loadVector(s, 6, addOffset(s->x[17], 2400), 16);
    s->x[17] = ((uint64_t)(0x100f49000));
    r_loadVector(s, 7, addOffset(s->x[17], 2416), 16);
    s->x[17] = ((uint64_t)(0x100f49000));
    r_loadVector(s, 16, addOffset(s->x[17], 2432), 16);
    s->x[17] = ((uint64_t)(0x100f49000));
    r_loadVector(s, 17, addOffset(s->x[17], 2448), 16);
    s->x[17] = ((uint64_t)(0x100d25000));
    r_loadVector(s, 18, addOffset(s->x[17], 2208), 16);
    return 0x10061dc00;
}

uint64_t r_bb_10061dc00(RState *s) {
    uint64_t next = 0;
    r_vectorDup(s, 19, 16, 8, (((uint64_t)(0x93)) << 0));
    r_vectorDup(s, 20, 4, 32, (((uint64_t)(0x10)) << 0));
    s->x[17] = ((uint64_t)(((s->x[15] + s->x[10]))));
    r_loadVector(s, 21, s->x[17], 16);
    r_vectorTable(s, 22, (int64_t[]){21}, 6, 1);
    r_vectorTable(s, 23, (int64_t[]){21}, 7, 1);
    r_vectorTable(s, 24, (int64_t[]){21}, 16, 1);
    r_vectorTable(s, 21, (int64_t[]){21}, 17, 1);
    r_vectorBinary(s, "add", 25, 4, 1, 4, 32);
    r_vectorBinary(s, "add", 26, 5, 1, 4, 32);
    r_vectorBinary(s, "add", 27, 3, 1, 4, 32);
    r_vectorBinary(s, "add", 28, 2, 1, 4, 32);
    r_vectorBinary(s, "sub", 29, 4, 1, 4, 32);
    r_vectorBinary(s, "sub", 30, 5, 1, 4, 32);
    r_vectorBinary(s, "sub", 31, 3, 1, 4, 32);
    r_vectorBinary(s, "sub", 8, 2, 1, 4, 32);
    r_vectorBinary(s, "mul", 28, 28, 8, 4, 32);
    r_vectorBinary(s, "mul", 27, 27, 31, 4, 32);
    r_vectorBinary(s, "mul", 26, 26, 30, 4, 32);
    r_vectorBinary(s, "mul", 25, 25, 29, 4, 32);
    r_vectorEor3(s, 9, 21, 1, 25);
    r_vectorEor3(s, 8, 24, 1, 26);
    r_vectorEor3(s, 10, 23, 1, 27);
    r_vectorEor3(s, 11, 22, 1, 28);
    r_vectorTable(s, 21, (int64_t[]){8, 9, 10, 11}, 18, 4);
    r_vectorBinary(s, "mul", 21, 21, 19, 16, 8);
    r_storeVector(s, 21, s->x[17], 16);
    s->x[10] = ((uint64_t)(((s->x[10] + ((uint64_t)(0x10))))));
    r_vectorBinary(s, "add", 5, 5, 20, 4, 32);
    r_vectorBinary(s, "add", 4, 4, 20, 4, 32);
    r_vectorBinary(s, "add", 3, 3, 20, 4, 32);
    r_vectorBinary(s, "add", 2, 2, 20, 4, 32);
    r_compare64(s, ((uint64_t)(s->x[10])), ((uint64_t)(((uint64_t)(0x220)))));
    if (r_condition(s, "ne"))
    {
        next = 0x10061dc08;
    }
    else
    {
        next = 0x10061dc88;
    }
    return next;
}

uint64_t r_bb_10061dc08(RState *s) {
    uint64_t next = 0;
    s->x[17] = ((uint64_t)(((s->x[15] + s->x[10]))));
    r_loadVector(s, 21, s->x[17], 16);
    r_vectorTable(s, 22, (int64_t[]){21}, 6, 1);
    r_vectorTable(s, 23, (int64_t[]){21}, 7, 1);
    r_vectorTable(s, 24, (int64_t[]){21}, 16, 1);
    r_vectorTable(s, 21, (int64_t[]){21}, 17, 1);
    r_vectorBinary(s, "add", 25, 4, 1, 4, 32);
    r_vectorBinary(s, "add", 26, 5, 1, 4, 32);
    r_vectorBinary(s, "add", 27, 3, 1, 4, 32);
    r_vectorBinary(s, "add", 28, 2, 1, 4, 32);
    r_vectorBinary(s, "sub", 29, 4, 1, 4, 32);
    r_vectorBinary(s, "sub", 30, 5, 1, 4, 32);
    r_vectorBinary(s, "sub", 31, 3, 1, 4, 32);
    r_vectorBinary(s, "sub", 8, 2, 1, 4, 32);
    r_vectorBinary(s, "mul", 28, 28, 8, 4, 32);
    r_vectorBinary(s, "mul", 27, 27, 31, 4, 32);
    r_vectorBinary(s, "mul", 26, 26, 30, 4, 32);
    r_vectorBinary(s, "mul", 25, 25, 29, 4, 32);
    r_vectorEor3(s, 9, 21, 1, 25);
    r_vectorEor3(s, 8, 24, 1, 26);
    r_vectorEor3(s, 10, 23, 1, 27);
    r_vectorEor3(s, 11, 22, 1, 28);
    r_vectorTable(s, 21, (int64_t[]){8, 9, 10, 11}, 18, 4);
    r_vectorBinary(s, "mul", 21, 21, 19, 16, 8);
    r_storeVector(s, 21, s->x[17], 16);
    s->x[10] = ((uint64_t)(((s->x[10] + ((uint64_t)(0x10))))));
    r_vectorBinary(s, "add", 5, 5, 20, 4, 32);
    r_vectorBinary(s, "add", 4, 4, 20, 4, 32);
    r_vectorBinary(s, "add", 3, 3, 20, 4, 32);
    r_vectorBinary(s, "add", 2, 2, 20, 4, 32);
    r_compare64(s, ((uint64_t)(s->x[10])), ((uint64_t)(((uint64_t)(0x220)))));
    if (r_condition(s, "ne"))
    {
        next = 0x10061dc08;
    }
    else
    {
        next = 0x10061dc88;
    }
    return next;
}

uint64_t r_bb_10061dc88(RState *s) {
    uint64_t next = 0;
    s->x[10] = ((uint64_t)(((uint64_t)(0x0))));
    r_vectorDup(s, 1, 4, 32, ((uint64_t)(((uint32_t)(s->x[16])))));
    s->x[17] = ((uint64_t)(0x100f49000));
    r_loadVector(s, 2, addOffset(s->x[17], 2384), 16);
    s->x[17] = ((uint64_t)(((s->x[15] + ((uint64_t)(0x220))))));
    r_vectorDup(s, 3, 4, 16, (((uint64_t)(0x93)) << 0));
    r_vectorDup(s, 4, 4, 32, (((uint64_t)(0x4)) << 0));
    s->x[0] = ((uint64_t)(((s->x[17] + s->x[10]))));
    r_loadVector(s, 5, s->x[0], 4);
    r_vectorUnsignedShiftLong(s, 5, 5, 8, 8, 0, false);
    r_vectorUnsignedShiftLong(s, 5, 5, 4, 16, 0, false);
    r_vectorBinary(s, "add", 6, 2, 1, 4, 32);
    r_vectorBinary(s, "sub", 7, 2, 1, 4, 32);
    r_vectorBinary(s, "mul", 6, 6, 7, 4, 32);
    r_vectorEor3(s, 5, 5, 1, 6);
    r_vectorExtractNarrow(s, 5, 5, 4, 16);
    r_vectorBinary(s, "mul", 5, 5, 3, 4, 16);
    r_vectorUnzipEven(s, 5, 5, 0, 8, 8);
    r_storeVector(s, 5, s->x[0], 4);
    r_vectorBinary(s, "add", 2, 2, 4, 4, 32);
    s->x[10] = ((uint64_t)(((s->x[10] + ((uint64_t)(0x4))))));
    r_compare64(s, ((uint64_t)(s->x[10])), ((uint64_t)(((uint64_t)(0x8)))));
    if (r_condition(s, "ne"))
    {
        next = 0x10061dca4;
    }
    else
    {
        next = 0x10061dce4;
    }
    return next;
}

uint64_t r_bb_10061dca4(RState *s) {
    uint64_t next = 0;
    s->x[0] = ((uint64_t)(((s->x[17] + s->x[10]))));
    r_loadVector(s, 5, s->x[0], 4);
    r_vectorUnsignedShiftLong(s, 5, 5, 8, 8, 0, false);
    r_vectorUnsignedShiftLong(s, 5, 5, 4, 16, 0, false);
    r_vectorBinary(s, "add", 6, 2, 1, 4, 32);
    r_vectorBinary(s, "sub", 7, 2, 1, 4, 32);
    r_vectorBinary(s, "mul", 6, 6, 7, 4, 32);
    r_vectorEor3(s, 5, 5, 1, 6);
    r_vectorExtractNarrow(s, 5, 5, 4, 16);
    r_vectorBinary(s, "mul", 5, 5, 3, 4, 16);
    r_vectorUnzipEven(s, 5, 5, 0, 8, 8);
    r_storeVector(s, 5, s->x[0], 4);
    r_vectorBinary(s, "add", 2, 2, 4, 4, 32);
    s->x[10] = ((uint64_t)(((s->x[10] + ((uint64_t)(0x4))))));
    r_compare64(s, ((uint64_t)(s->x[10])), ((uint64_t)(((uint64_t)(0x8)))));
    if (r_condition(s, "ne"))
    {
        next = 0x10061dca4;
    }
    else
    {
        next = 0x10061dce4;
    }
    return next;
}

uint64_t r_bb_10061dce4(RState *s) {
    uint64_t next = 0;
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0x44))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((uint64_t)(0x193))))));
    s->x[17] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[17])))), 0x100, 16, 16, 32)))));
    s->x[0] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[16])))) + ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[0] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[0])))) ^ ((uint64_t)(((uint32_t)(s->x[16]))))))))));
    s->x[0] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[0])))) * ((uint64_t)(((uint32_t)(s->x[17]))))))))));
    s->x[1] = ((uint64_t)(((uint32_t)(unsignedDivide(((uint64_t)(((uint32_t)(s->x[0])))), ((uint64_t)(((uint32_t)(s->x[10])))), 32)))));
    s->x[0] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[0])))) - (((uint64_t)(((uint32_t)(s->x[1])))) * ((uint64_t)(((uint32_t)(s->x[10])))))))))));
    s->x[1] = ((uint64_t)(((s->x[15] + shiftLeft(s->x[10], 3, 64)))));
    __auto_type value9 = r_load(s, s->x[1], 8);
    s->x[2] = ((uint64_t)(value9));
    __auto_type value10 = r_load(s, ((s->x[15] + shiftLeft(((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[0])))))))), 3, 64))), 8);
    s->x[3] = ((uint64_t)(value10));
    s->x[2] = ((uint64_t)(((s->x[3] ^ s->x[2]))));
    r_storeValue(s, s->x[1], s->x[2], 8);
    __auto_type value13 = r_load(s, ((s->x[15] + shiftLeft(((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[0])))))))), 3, 64))), 8);
    s->x[3] = ((uint64_t)(value13));
    s->x[2] = ((uint64_t)(((s->x[3] ^ s->x[2]))));
    r_storeValue(s, ((s->x[15] + shiftLeft(((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[0])))))))), 3, 64))), s->x[2], 8);
    __auto_type value16 = r_load(s, s->x[1], 8);
    s->x[0] = ((uint64_t)(value16));
    s->x[0] = ((uint64_t)(((s->x[0] ^ s->x[2]))));
    r_storeValue(s, s->x[1], s->x[0], 8);
    s->x[0] = ((uint64_t)(((s->x[10] + ((uint64_t)(0x1))))));
    s->x[10] = ((uint64_t)(((s->x[10] - ((uint64_t)(0x1))))));
    r_compare64(s, ((uint64_t)(s->x[0])), ((uint64_t)(((uint64_t)(0x2)))));
    if (r_condition(s, "gt"))
    {
        next = 0x10061dcf0;
    }
    else
    {
        next = 0x10061dd40;
    }
    return next;
}

uint64_t r_bb_10061dcf0(RState *s) {
    uint64_t next = 0;
    s->x[0] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[16])))) + ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[0] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[0])))) ^ ((uint64_t)(((uint32_t)(s->x[16]))))))))));
    s->x[0] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[0])))) * ((uint64_t)(((uint32_t)(s->x[17]))))))))));
    s->x[1] = ((uint64_t)(((uint32_t)(unsignedDivide(((uint64_t)(((uint32_t)(s->x[0])))), ((uint64_t)(((uint32_t)(s->x[10])))), 32)))));
    s->x[0] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[0])))) - (((uint64_t)(((uint32_t)(s->x[1])))) * ((uint64_t)(((uint32_t)(s->x[10])))))))))));
    s->x[1] = ((uint64_t)(((s->x[15] + shiftLeft(s->x[10], 3, 64)))));
    __auto_type value6 = r_load(s, s->x[1], 8);
    s->x[2] = ((uint64_t)(value6));
    __auto_type value7 = r_load(s, ((s->x[15] + shiftLeft(((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[0])))))))), 3, 64))), 8);
    s->x[3] = ((uint64_t)(value7));
    s->x[2] = ((uint64_t)(((s->x[3] ^ s->x[2]))));
    r_storeValue(s, s->x[1], s->x[2], 8);
    __auto_type value10 = r_load(s, ((s->x[15] + shiftLeft(((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[0])))))))), 3, 64))), 8);
    s->x[3] = ((uint64_t)(value10));
    s->x[2] = ((uint64_t)(((s->x[3] ^ s->x[2]))));
    r_storeValue(s, ((s->x[15] + shiftLeft(((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[0])))))))), 3, 64))), s->x[2], 8);
    __auto_type value13 = r_load(s, s->x[1], 8);
    s->x[0] = ((uint64_t)(value13));
    s->x[0] = ((uint64_t)(((s->x[0] ^ s->x[2]))));
    r_storeValue(s, s->x[1], s->x[0], 8);
    s->x[0] = ((uint64_t)(((s->x[10] + ((uint64_t)(0x1))))));
    s->x[10] = ((uint64_t)(((s->x[10] - ((uint64_t)(0x1))))));
    r_compare64(s, ((uint64_t)(s->x[0])), ((uint64_t)(((uint64_t)(0x2)))));
    if (r_condition(s, "gt"))
    {
        next = 0x10061dcf0;
    }
    else
    {
        next = 0x10061dd40;
    }
    return next;
}

uint64_t r_bb_10061dd40(RState *s) {
    uint64_t next = 0;
    s->x[17] = ((uint64_t)(((s->sp + shiftLeft(((uint64_t)(0xb)), 12, 64)))));
    s->x[17] = ((uint64_t)(((s->x[17] + ((uint64_t)(0x5e8))))));
    __auto_type value2 = r_load(s, addOffset(s->x[17], 47), 1);
    s->x[10] = ((uint64_t)(((uint32_t)(value2))));
    s->x[15] = ((uint64_t)(((s->sp + shiftLeft(((uint64_t)(0xb)), 12, 64)))));
    s->x[15] = ((uint64_t)(((s->x[15] + ((uint64_t)(0x610))))));
    s->x[14] = ((uint64_t)(((s->x[15] + ((uint64_t)(((uint8_t)(((uint64_t)(((uint32_t)(s->x[14]))))))))))));
    __auto_type value6 = r_load(s, s->x[14], 1);
    s->x[16] = ((uint64_t)(((uint32_t)(value6))));
    r_storeValue(s, s->x[14], ((uint64_t)(((uint32_t)(s->x[10])))), 1);
    r_storeValue(s, addOffset(s->x[17], 47), ((uint64_t)(((uint32_t)(s->x[16])))), 1);
    __auto_type value9 = r_load(s, addOffset(s->x[17], 46), 1);
    s->x[10] = ((uint64_t)(((uint32_t)(value9))));
    s->x[13] = ((uint64_t)(((s->x[15] + ((uint64_t)(((uint8_t)(((uint64_t)(((uint32_t)(s->x[13]))))))))))));
    __auto_type value11 = r_load(s, s->x[13], 1);
    s->x[14] = ((uint64_t)(((uint32_t)(value11))));
    r_storeValue(s, s->x[13], ((uint64_t)(((uint32_t)(s->x[10])))), 1);
    r_storeValue(s, addOffset(s->x[17], 46), ((uint64_t)(((uint32_t)(s->x[14])))), 1);
    __auto_type value14 = r_load(s, addOffset(s->x[17], 45), 1);
    s->x[10] = ((uint64_t)(((uint32_t)(value14))));
    s->x[12] = ((uint64_t)(((s->x[15] + ((uint64_t)(((uint8_t)(((uint64_t)(((uint32_t)(s->x[12]))))))))))));
    __auto_type value16 = r_load(s, s->x[12], 1);
    s->x[13] = ((uint64_t)(((uint32_t)(value16))));
    r_storeValue(s, s->x[12], ((uint64_t)(((uint32_t)(s->x[10])))), 1);
    r_storeValue(s, addOffset(s->x[17], 45), ((uint64_t)(((uint32_t)(s->x[13])))), 1);
    __auto_type value19 = r_load(s, addOffset(s->x[17], 44), 1);
    s->x[10] = ((uint64_t)(((uint32_t)(value19))));
    __auto_type value20 = r_load(s, addOffset(s->x[17], 40), 1);
    s->x[12] = ((uint64_t)(((uint32_t)(value20))));
    r_storeValue(s, addOffset(s->x[17], 40), ((uint64_t)(((uint32_t)(s->x[10])))), 1);
    r_storeValue(s, addOffset(s->x[17], 44), ((uint64_t)(((uint32_t)(s->x[12])))), 1);
    __auto_type value23 = r_load(s, addOffset(s->x[17], 43), 1);
    s->x[10] = ((uint64_t)(((uint32_t)(value23))));
    s->x[11] = ((uint64_t)(((s->x[15] + ((uint64_t)(((uint8_t)(((uint64_t)(((uint32_t)(s->x[11]))))))))))));
    __auto_type value25 = r_load(s, s->x[11], 1);
    s->x[12] = ((uint64_t)(((uint32_t)(value25))));
    r_storeValue(s, s->x[11], ((uint64_t)(((uint32_t)(s->x[10])))), 1);
    r_storeValue(s, addOffset(s->x[17], 43), ((uint64_t)(((uint32_t)(s->x[12])))), 1);
    __auto_type value28 = r_load(s, addOffset(s->x[17], 40), 1);
    s->x[10] = ((uint64_t)(((uint32_t)(value28))));
    __auto_type value29 = r_load(s, addOffset(s->x[17], 41), 2);
    s->x[11] = ((uint64_t)(((uint32_t)(value29))));
    r_storeValue(s, addOffset(s->x[17], 42), ((uint64_t)(((uint32_t)(s->x[10])))), 1);
    r_storeValue(s, addOffset(s->x[17], 40), ((uint64_t)(((uint32_t)(s->x[11])))), 2);
    r_loadVector(s, 1, addOffset(s->x[17], 40), 8);
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0x193))))));
    s->x[10] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[10])))), 0x100, 16, 16, 32)))));
    r_vectorDup(s, 2, 2, 32, ((uint64_t)(((uint32_t)(s->x[10])))));
    r_vectorMultiplyAccumulate(s, 0, 1, 2, 2, 32, false);
    r_storeVector(s, 0, addOffset(s->x[17], 40), 8);
    __auto_type value38a = r_load(s, addOffset(s->x[17], 32), 8);
    __auto_type value38b = r_load(s, ((addOffset(s->x[17], 32)) + 8), 8);
    s->x[10] = ((uint64_t)(value38a));
    s->x[11] = ((uint64_t)(value38b));
    s->x[10] = ((uint64_t)(((s->x[11] ^ s->x[10]))));
    r_storeValue(s, s->x[5], s->x[10], 8);
    __auto_type value41 = r_load(s, s->x[4], 4);
    s->x[10] = ((uint64_t)(((uint32_t)(value41))));
    __auto_type value42 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[11] = ((uint64_t)(value42));
    __auto_type value43 = r_load(s, ((s->x[11] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[8]))))))), 3, 64))), 8);
    s->x[8] = ((uint64_t)(value43));
    s->x[17] = ((uint64_t)(((uint64_t)(0xca20))));
    next = s->x[8];
    return next;
}

uint64_t r_bb_10061deb0(RState *s) {
    uint64_t next = 0;
    __auto_type value0 = r_load(s, addOffset(s->sp, 5944), 8);
    s->x[8] = ((uint64_t)(value0));
    __auto_type value1 = r_load(s, addOffset(s->sp, 3544), 4);
    s->x[21] = ((uint64_t)(((uint32_t)(value1))));
    s->x[17] = ((uint64_t)(((uint64_t)(0x3f29))));
    next = s->x[8];
    return next;
}

uint64_t r_bb_10061e72c(RState *s) {
    uint64_t next = 0;
    s->x[19] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    __auto_type value1 = r_load(s, addOffset(s->sp, 17632), 8);
    s->x[20] = ((uint64_t)(value1));
    __auto_type value2 = r_load(s, addOffset(s->sp, 6556), 4);
    s->x[8] = ((uint64_t)(((uint32_t)(value2))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0xc1c8))))));
    __auto_type value4 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[11] = ((uint64_t)(value4));
    s->x[9] = ((uint64_t)(((s->x[11] + s->x[9]))));
    __auto_type value6 = r_load(s, s->x[9], 8);
    s->x[9] = ((uint64_t)(value6));
    s->x[17] = ((uint64_t)(((uint64_t)(0x661c))));
    next = s->x[9];
    return next;
}

uint64_t r_bb_10061ee20(RState *s) {
    uint64_t next = 0;
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0xde25))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0x57fa, 16, 16, 32)))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0xfeec))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0xf90e, 16, 16, 32)))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[19])))) + ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[20] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) & ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[8] = ((uint64_t)(((s->sp + shiftLeft(((uint64_t)(0x8)), 12, 64)))));
    __auto_type value7 = r_load(s, addOffset(s->x[8], 1088), 8);
    s->x[8] = ((uint64_t)(value7));
    __auto_type value8 = r_load(s, addOffset(s->x[8], 88), 8);
    s->x[9] = ((uint64_t)(value8));
    r_compare64(s, ((uint64_t)(s->x[9])), ((uint64_t)(((uint64_t)(0x0)))));
    s->x[9] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "ne"))))));
    s->x[21] = ((uint64_t)(((uint32_t)(((uint64_t)(0xa6))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) * ((uint64_t)(((uint32_t)(s->x[21]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[19]))))))))));
    __auto_type value14 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[10] = ((uint64_t)(value14));
    __auto_type value15 = r_load(s, ((s->x[10] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[9]))))))), 3, 64))), 8);
    s->x[9] = ((uint64_t)(value15));
    s->x[17] = ((uint64_t)(((uint64_t)(0xc5a4))));
    next = s->x[9];
    return next;
}

uint64_t r_bb_10061f6e4(RState *s) {
    uint64_t next = 0;
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) + ((uint64_t)(0x1f8))))))));
    s->x[16] = ((uint64_t)(((uint32_t)(((uint64_t)(0x1604))))));
    s->x[16] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) | ((uint64_t)(((uint32_t)(s->x[16]))))))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((uint64_t)(0x6889))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((uint64_t)(0xbf73))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) + ((uint64_t)(((uint32_t)(s->x[15]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) ^ ((uint64_t)(((uint32_t)(s->x[17]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) ^ ((uint64_t)(((uint32_t)(s->x[16]))))))))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[14])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[17])))))));
    s->x[17] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "lt"))))));
    s->x[0] = ((uint64_t)(((uint32_t)(((uint64_t)(0xe8))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) * ((uint64_t)(((uint32_t)(s->x[0]))))))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) ^ ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    __auto_type value13 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[17] = ((uint64_t)(value13));
    __auto_type value14 = r_load(s, ((s->x[17] + shiftLeft(((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[13])))))))), 3, 64))), 8);
    s->x[13] = ((uint64_t)(value14));
    s->x[17] = ((uint64_t)(((uint64_t)(0xfda))));
    next = s->x[13];
    return next;
}

uint64_t r_bb_100620148(RState *s) {
    uint64_t next = 0;
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0x3576))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0xce41, 16, 16, 32)))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0xdf5c))))));
    s->x[10] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[10])))), 0x31be, 16, 16, 32)))));
    __auto_type value4 = r_load(s, addOffset(s->sp, 3520), 4);
    s->x[14] = ((uint64_t)(((uint32_t)(value4))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[14])))) + ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) & ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[10] = ((uint64_t)(((s->sp + shiftLeft(((uint64_t)(0x7)), 12, 64)))));
    r_storeValue(s, addOffset(s->x[10], 2000), ((uint64_t)(((uint32_t)(s->x[13])))), 4);
    __auto_type value9 = r_load(s, addOffset(s->sp, 5440), 4);
    s->x[10] = ((uint64_t)(((uint32_t)(value9))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0xffffa2a3))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) + ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) + ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    r_storeValue(s, addOffset(s->sp, 5440), ((uint64_t)(((uint32_t)(s->x[11])))), 4);
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0x750e))))));
    s->x[11] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[11])))), 0x6247, 16, 16, 32)))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[10])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[11])))))));
    s->x[10] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "eq"))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0x7dc2))))));
    s->x[11] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[11])))), 0xce41, 16, 16, 32)))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) ^ ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) * ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    __auto_type value23 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[11] = ((uint64_t)(value23));
    __auto_type value24 = r_load(s, ((s->x[11] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[10]))))))), 3, 64))), 8);
    s->x[10] = ((uint64_t)(value24));
    s->x[17] = ((uint64_t)(((uint64_t)(0xc7ff))));
    next = s->x[10];
    return next;
}

uint64_t r_bb_100620290(RState *s) {
    uint64_t next = 0;
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0x3647))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[21])))) ^ ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x47))))));
    s->x[10] = ((uint64_t)(((s->sp + shiftLeft(((uint64_t)(0x11)), 12, 64)))));
    s->x[10] = ((uint64_t)(((s->x[10] + ((uint64_t)(0x148))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0x7898))))));
    s->x[11] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[11])))), 0x952, 16, 16, 32)))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) & ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(shiftLeft(((uint64_t)(((uint32_t)(s->x[11])))), ((int64_t)(((uint64_t)(0x1)))), 32)))));
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0x8764))))));
    s->x[12] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[12])))), 0xf6ad, 16, 16, 32)))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) - ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) + ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0x5506))))));
    s->x[11] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[11])))), 0x119f, 16, 16, 32)))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    __auto_type value16 = r_load(s, addOffset(s->sp, 5008), 8);
    s->x[11] = ((uint64_t)(value16));
    s->x[23] = ((uint64_t)(((s->sp + shiftLeft(((uint64_t)(0x11)), 12, 64)))));
    r_storeValue(s, addOffset(s->x[23], 336), s->x[19], 8);
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0x9ef7))))));
    s->x[12] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[12])))), 0xba20, 16, 16, 32)))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[21])))) - (((uint64_t)(((uint32_t)(s->x[10])))) * ((uint64_t)(((uint32_t)(s->x[12])))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0x35f8))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) + ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    r_storeValue(s, addOffset(s->x[23], 344), ((uint64_t)(((uint32_t)(s->x[10])))), 4);
    s->x[10] = ((uint64_t)(((s->sp + shiftLeft(((uint64_t)(0x4)), 12, 64)))));
    s->x[10] = ((uint64_t)(((s->x[10] + ((uint64_t)(0x9b0))))));
    r_storeValue(s, addOffset(s->x[23], 352), s->x[10], 8);
    r_storeValue(s, ((addOffset(s->x[23], 352)) + 8), s->x[11], 8);
    __auto_type value28 = r_load(s, addOffset(s->sp, 3560), 8);
    s->x[10] = ((uint64_t)(value28));
    __auto_type value29 = r_load(s, s->x[10], 4);
    s->x[10] = ((uint64_t)(((uint32_t)(value29))));
    __auto_type value30 = r_load(s, addOffset(s->sp, 3552), 8);
    s->x[11] = ((uint64_t)(value30));
    __auto_type value31 = r_load(s, s->x[11], 4);
    s->x[11] = ((uint64_t)(((uint32_t)(value31))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0xa6))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0xd4cf))))));
    s->x[11] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[11])))), 0xa5c, 16, 16, 32)))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) * ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    __auto_type value38 = r_load(s, addOffset(s->sp, 3488), 8);
    s->x[11] = ((uint64_t)(value38));
    s->x[11] = ((uint64_t)(((s->x[11] + ((uint64_t)(((uint8_t)(((uint64_t)(((uint32_t)(s->x[10]))))))))))));
    __auto_type value40 = r_load(s, s->x[11], 1);
    s->x[11] = ((uint64_t)(((uint32_t)(value40))));
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0x17))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) ^ ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    __auto_type value43 = r_load(s, addOffset(s->sp, 3496), 8);
    s->x[12] = ((uint64_t)(value43));
    __auto_type value44 = r_load(s, ((s->x[12] + ((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[11])))))))))), 1);
    s->x[11] = ((uint64_t)(((uint32_t)(value44))));
    s->x[19] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) * ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0xd03d))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) + ((uint64_t)(((uint8_t)(((uint64_t)(((uint32_t)(s->x[8]))))))))))))));
    __auto_type value49 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[22] = ((uint64_t)(value49));
    __auto_type value50 = r_load(s, ((s->x[22] + shiftLeft(((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[8])))))))), 3, 64))), 8);
    s->x[8] = ((uint64_t)(value50));
    s->x[0] = ((uint64_t)(((s->sp + shiftLeft(((uint64_t)(0x11)), 12, 64)))));
    s->x[0] = ((uint64_t)(((s->x[0] + ((uint64_t)(0x148))))));
    s->x[17] = ((uint64_t)(((uint64_t)(0xe7c4))));
    s->x[30] = 0x10062036c;
    next = s->x[8];
    return next;
}

uint64_t r_bb_10062036c(RState *s) {
    uint64_t next = 0;
    s->x[20] = ((uint64_t)(((uint32_t)(((uint64_t)(0x0))))));
    __auto_type value1 = r_load(s, addOffset(s->x[23], 328), 4);
    s->x[5] = ((uint64_t)(((uint32_t)(value1))));
    __auto_type value2 = r_load(s, ((s->x[22] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[21]))))))), 3, 64))), 8);
    s->x[8] = ((uint64_t)(value2));
    s->x[21] = ((uint64_t)(((uint32_t)(((uint64_t)(0x6c45))))));
    s->x[21] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[21])))), 0x2cf2, 16, 16, 32)))));
    s->x[17] = ((uint64_t)(((uint64_t)(0x6a8))));
    next = s->x[8];
    return next;
}

uint64_t r_bb_1006203d8(RState *s) {
    uint64_t next = 0;
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0x85bd))))));
    __auto_type value1 = r_load(s, addOffset(s->sp, 3560), 8);
    s->x[9] = ((uint64_t)(value1));
    __auto_type value2 = r_load(s, s->x[9], 4);
    s->x[9] = ((uint64_t)(((uint32_t)(value2))));
    __auto_type value3 = r_load(s, addOffset(s->sp, 3552), 8);
    s->x[10] = ((uint64_t)(value3));
    __auto_type value4 = r_load(s, s->x[10], 4);
    s->x[10] = ((uint64_t)(((uint32_t)(value4))));
    s->x[20] = ((uint64_t)(((uint32_t)(((uint64_t)(0xa6))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) + ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[20]))))))))));
    s->x[21] = ((uint64_t)(((uint32_t)(((uint64_t)(0xd4cf))))));
    s->x[21] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[21])))), 0xa5c, 16, 16, 32)))));
    return 0x100620400;
}

uint64_t r_bb_100620400(RState *s) {
    uint64_t next = 0;
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) * ((uint64_t)(((uint32_t)(s->x[21]))))))))));
    __auto_type value1 = r_load(s, addOffset(s->sp, 3536), 8);
    s->x[10] = ((uint64_t)(value1));
    s->x[10] = ((uint64_t)(((s->x[10] + ((uint64_t)(((uint8_t)(((uint64_t)(((uint32_t)(s->x[9]))))))))))));
    __auto_type value3 = r_load(s, s->x[10], 1);
    s->x[10] = ((uint64_t)(((uint32_t)(value3))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0xa1))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    __auto_type value6 = r_load(s, addOffset(s->sp, 3528), 8);
    s->x[11] = ((uint64_t)(value6));
    __auto_type value7 = r_load(s, ((s->x[11] + ((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[10])))))))))), 1);
    s->x[10] = ((uint64_t)(((uint32_t)(value7))));
    s->x[19] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[24])))) ^ ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0xcf02))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) + ((uint64_t)(((uint8_t)(((uint64_t)(((uint32_t)(s->x[8]))))))))))))));
    __auto_type value12 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[22] = ((uint64_t)(value12));
    __auto_type value13 = r_load(s, ((s->x[22] + shiftLeft(((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[8])))))))), 3, 64))), 8);
    s->x[8] = ((uint64_t)(value13));
    s->x[0] = ((uint64_t)(((uint32_t)(((uint64_t)(0x30))))));
    s->x[17] = ((uint64_t)(((uint64_t)(0x79e9))));
    s->x[30] = 0x100620444;
    next = s->x[8];
    return next;
}

uint64_t r_bb_100620444(RState *s) {
    uint64_t next = 0;
    s->x[8] = ((uint64_t)(((s->x[0] + s->x[25]))));
    r_storeValue(s, addOffset(s->sp, 26376), s->x[8], 8);
    r_compare64(s, ((uint64_t)(s->x[0])), ((uint64_t)(((uint64_t)(0x0)))));
    s->x[9] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "eq"))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[19])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) & ((uint64_t)(0x1))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0xc6))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) * ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[24]))))))))));
    __auto_type value9 = r_load(s, ((s->x[22] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[9]))))))), 3, 64))), 8);
    s->x[9] = ((uint64_t)(value9));
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0x2011))))));
    s->x[12] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[12])))), 0x318a, 16, 16, 32)))));
    s->x[17] = ((uint64_t)(((uint64_t)(0x5817))));
    next = s->x[9];
    return next;
}

uint64_t r_bb_1006206e4(RState *s) {
    uint64_t next = 0;
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0x1a1c))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0x825, 16, 16, 32)))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0xdcff))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0x68e6, 16, 16, 32)))));
    __auto_type value4 = r_load(s, addOffset(s->sp, 3544), 4);
    s->x[12] = ((uint64_t)(((uint32_t)(value4))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) + ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) & ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0xa5e3))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0x710b, 16, 16, 32)))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0x7bc5))))));
    s->x[10] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[10])))), 0xce75, 16, 16, 32)))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[5])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[10])))))));
    s->x[10] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "eq"))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0x9891))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) * ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) + ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    __auto_type value18 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[10] = ((uint64_t)(value18));
    __auto_type value19 = r_load(s, ((s->x[10] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[8]))))))), 3, 64))), 8);
    s->x[8] = ((uint64_t)(value19));
    s->x[17] = ((uint64_t)(((uint64_t)(0x9ef5))));
    next = s->x[8];
    return next;
}

uint64_t r_bb_100620be4(RState *s) {
    uint64_t next = 0;
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[20])))) - ((uint64_t)(0xebe))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x4452))))));
    s->x[22] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) | ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    __auto_type value3 = r_load(s, addOffset(s->sp, 3560), 8);
    s->x[8] = ((uint64_t)(value3));
    __auto_type value4 = r_load(s, s->x[8], 4);
    s->x[8] = ((uint64_t)(((uint32_t)(value4))));
    __auto_type value5 = r_load(s, addOffset(s->sp, 3552), 8);
    s->x[9] = ((uint64_t)(value5));
    __auto_type value6 = r_load(s, s->x[9], 4);
    s->x[9] = ((uint64_t)(((uint32_t)(value6))));
    return 0x100620c00;
}

uint64_t r_bb_100620c00(RState *s) {
    uint64_t next = 0;
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0xa6))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) - ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) ^ ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0xd4cf))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0xa5c, 16, 16, 32)))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) * ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    __auto_type value6 = r_load(s, addOffset(s->sp, 3488), 8);
    s->x[9] = ((uint64_t)(value6));
    s->x[9] = ((uint64_t)(((s->x[9] + ((uint64_t)(((uint8_t)(((uint64_t)(((uint32_t)(s->x[8]))))))))))));
    __auto_type value8 = r_load(s, s->x[9], 1);
    s->x[9] = ((uint64_t)(((uint32_t)(value8))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0xcd))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    __auto_type value11 = r_load(s, addOffset(s->sp, 3496), 8);
    s->x[10] = ((uint64_t)(value11));
    __auto_type value12 = r_load(s, ((s->x[10] + ((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[9])))))))))), 1);
    s->x[9] = ((uint64_t)(((uint32_t)(value12))));
    __auto_type value13 = r_load(s, addOffset(s->sp, 9088), 8);
    s->x[0] = ((uint64_t)(value13));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0xcf0d))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) + ((uint64_t)(((uint8_t)(((uint64_t)(((uint32_t)(s->x[8]))))))))))))));
    __auto_type value17 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[19] = ((uint64_t)(value17));
    __auto_type value18 = r_load(s, ((s->x[19] + shiftLeft(((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[8])))))))), 3, 64))), 8);
    s->x[8] = ((uint64_t)(value18));
    s->x[17] = ((uint64_t)(((uint64_t)(0xe89a))));
    s->x[30] = 0x100620c54;
    next = s->x[8];
    return next;
}

uint64_t r_bb_100620c54(RState *s) {
    uint64_t next = 0;
    __auto_type value0 = r_load(s, ((s->x[19] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[20]))))))), 3, 64))), 8);
    s->x[8] = ((uint64_t)(value0));
    s->x[17] = ((uint64_t)(((uint64_t)(0x5c58))));
    next = s->x[8];
    return next;
}

uint64_t r_bb_100621178(RState *s) {
    uint64_t next = 0;
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0xa17b))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0x710b, 16, 16, 32)))));
    s->x[19] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[22])))) + ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0x1c41))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0x710c, 16, 16, 32)))));
    s->x[21] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[22])))) + ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[8] = ((uint64_t)(((s->sp + shiftLeft(((uint64_t)(0x7)), 12, 64)))));
    __auto_type value7 = r_load(s, addOffset(s->x[8], 2624), 4);
    s->x[8] = ((uint64_t)(((uint32_t)(value7))));
    __auto_type value8 = r_load(s, addOffset(s->sp, 3560), 8);
    s->x[9] = ((uint64_t)(value8));
    __auto_type value9 = r_load(s, s->x[9], 4);
    s->x[9] = ((uint64_t)(((uint32_t)(value9))));
    __auto_type value10 = r_load(s, addOffset(s->sp, 3552), 8);
    s->x[10] = ((uint64_t)(value10));
    __auto_type value11 = r_load(s, s->x[10], 4);
    s->x[10] = ((uint64_t)(((uint32_t)(value11))));
    s->x[24] = ((uint64_t)(((uint32_t)(((uint64_t)(0xa6))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) + ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[24]))))))))));
    s->x[25] = ((uint64_t)(((uint32_t)(((uint64_t)(0xd4cf))))));
    s->x[25] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[25])))), 0xa5c, 16, 16, 32)))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) * ((uint64_t)(((uint32_t)(s->x[25]))))))))));
    __auto_type value18 = r_load(s, addOffset(s->sp, 2832), 8);
    s->x[10] = ((uint64_t)(value18));
    s->x[10] = ((uint64_t)(((s->x[10] + ((uint64_t)(((uint8_t)(((uint64_t)(((uint32_t)(s->x[9]))))))))))));
    __auto_type value20 = r_load(s, s->x[10], 1);
    s->x[10] = ((uint64_t)(((uint32_t)(value20))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0xb5))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    __auto_type value23 = r_load(s, addOffset(s->sp, 2824), 8);
    s->x[11] = ((uint64_t)(value23));
    __auto_type value24 = r_load(s, ((s->x[11] + ((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[10])))))))))), 1);
    s->x[10] = ((uint64_t)(((uint32_t)(value24))));
    s->x[20] = ((uint64_t)(((uint32_t)(((uint64_t)(0x7bc5))))));
    s->x[20] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[20])))), 0xce75, 16, 16, 32)))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0xcf4e))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) + ((uint64_t)(((uint8_t)(((uint64_t)(((uint32_t)(s->x[9]))))))))))))));
    __auto_type value30 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[26] = ((uint64_t)(value30));
    __auto_type value31 = r_load(s, ((s->x[26] + shiftLeft(((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[9])))))))), 3, 64))), 8);
    s->x[9] = ((uint64_t)(value31));
    s->x[0] = ((uint64_t)(((s->x[8] ^ s->x[20]))));
    s->x[17] = ((uint64_t)(((uint64_t)(0x79e9))));
    s->x[30] = 0x100621204;
    next = s->x[9];
    return next;
}

uint64_t r_bb_100621204(RState *s) {
    uint64_t next = 0;
    r_storeValue(s, addOffset(s->sp, 24704), s->x[0], 8);
    r_compare64(s, ((uint64_t)(s->x[0])), ((uint64_t)(((uint64_t)(0x0)))));
    s->x[8] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "eq"))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[19])))) ^ ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x1))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) & ~(((uint64_t)(((uint32_t)(s->x[8])))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x6c))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) * ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) ^ ((uint64_t)(((uint32_t)(s->x[21]))))))))));
    __auto_type value9 = r_load(s, ((s->x[26] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[8]))))))), 3, 64))), 8);
    s->x[8] = ((uint64_t)(value9));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x2011))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0x318a, 16, 16, 32)))));
    s->x[17] = ((uint64_t)(((uint64_t)(0x24c1))));
    next = s->x[8];
    return next;
}

uint64_t r_bb_1006216bc(RState *s) {
    uint64_t next = 0;
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0x4c0e))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0x802))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) + ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) | ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0xffff7471))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((uint64_t)(0x7bcc))))));
    s->x[13] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[13])))), 0xce72, 16, 16, 32)))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[9])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[13])))))));
    s->x[13] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "lt"))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) + ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) ^ ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((uint64_t)(0x1))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[14])))) & ~(((uint64_t)(((uint32_t)(s->x[13])))))))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((uint64_t)(0x2b))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) * ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) ^ ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    __auto_type value16 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[13] = ((uint64_t)(value16));
    __auto_type value17 = r_load(s, ((s->x[13] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[12]))))))), 3, 64))), 8);
    s->x[12] = ((uint64_t)(value17));
    s->x[17] = ((uint64_t)(((uint64_t)(0x62ce))));
    next = s->x[12];
    return next;
}

uint64_t r_bb_100622328(RState *s) {
    uint64_t next = 0;
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0xcc1a))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0x71ce))))));
    s->x[11] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[11])))), 0xbb9, 16, 16, 32)))));
    s->x[13] = ((uint64_t)(((uint32_t)(((uint64_t)(0x1e36))))));
    s->x[13] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[13])))), 0xf446, 16, 16, 32)))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) + ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) & ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    __auto_type value8 = r_load(s, addOffset(s->x[12], 4), 4);
    s->x[12] = ((uint64_t)(((uint32_t)(value8))));
    s->x[13] = ((uint64_t)(((uint32_t)(((uint64_t)(0xaeda))))));
    s->x[13] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[13])))), 0xd7ea, 16, 16, 32)))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) + ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[12])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[13])))))));
    s->x[12] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "eq"))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) | shiftLeft(((uint64_t)(((uint32_t)(s->x[12])))), 1, 32)))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) ^ ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    __auto_type value17 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[12] = ((uint64_t)(value17));
    __auto_type value18 = r_load(s, ((s->x[12] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[10]))))))), 3, 64))), 8);
    s->x[10] = ((uint64_t)(value18));
    s->x[17] = ((uint64_t)(((uint64_t)(0xe00d))));
    next = s->x[10];
    return next;
}

uint64_t r_bb_100624578(RState *s) {
    uint64_t next = 0;
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0xbd8e))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0xef4, 16, 16, 32)))));
    __auto_type value2 = r_load(s, addOffset(s->sp, 3544), 4);
    s->x[9] = ((uint64_t)(((uint32_t)(value2))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(shiftLeft(((uint64_t)(((uint32_t)(s->x[8])))), ((int64_t)(((uint64_t)(0x1)))), 32)))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0xc696))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0x2b3, 16, 16, 32)))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0xa10b))))));
    s->x[10] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[10])))), 0x8c40, 16, 16, 32)))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) + ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) | ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    r_storeValue(s, addOffset(s->x[0], 8), ((uint64_t)(0)), 8);
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0x204))))));
    r_storeValue(s, s->x[0], ((uint64_t)(((uint32_t)(s->x[10])))), 4);
    r_storeValue(s, ((s->x[0]) + 4), ((uint64_t)(0)), 4);
    r_storeValue(s, addOffset(s->x[0], 16), ((uint64_t)(0)), 4);
    r_storeValue(s, addOffset(s->x[0], 32), ((uint64_t)(0)), 1);
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0x88))))));
    r_storeValue(s, addOffset(s->x[0], 33), ((uint64_t)(((uint32_t)(s->x[10])))), 1);
    __auto_type value18 = r_load(s, addOffset(s->sp, 5600), 8);
    s->x[10] = ((uint64_t)(value18));
    __auto_type value19 = r_load(s, addOffset(s->sp, 3296), 8);
    s->x[11] = ((uint64_t)(value19));
    __auto_type value20 = r_load(s, s->x[11], 4);
    s->x[11] = ((uint64_t)(signExtend32(((uint32_t)(value20)))));
    __auto_type value21 = r_load(s, addOffset(s->sp, 3288), 8);
    s->x[12] = ((uint64_t)(value21));
    __auto_type value22 = r_load(s, s->x[12], 8);
    s->x[12] = ((uint64_t)(value22));
    s->x[13] = ((uint64_t)(((uint64_t)(0xffffffffffffb6b0))));
    s->x[13] = ((uint64_t)(insertBits(s->x[13], 0x8f02, 16, 16, 64)));
    s->x[13] = ((uint64_t)(((s->x[11] & s->x[13]))));
    s->x[13] = ((uint64_t)(((s->x[12] + s->x[13]))));
    __auto_type value27 = r_load(s, s->x[13], 8);
    s->x[13] = ((uint64_t)(value27));
    s->x[13] = ((uint64_t)(((s->x[13] & ((uint64_t)(0x7fffffffffffffff))))));
    s->x[14] = ((uint64_t)(((uint64_t)(0xbbe1))));
    s->x[14] = ((uint64_t)(insertBits(s->x[14], 0x8be3, 16, 16, 64)));
    s->x[14] = ((uint64_t)(insertBits(s->x[14], 0x4c0c, 32, 16, 64)));
    s->x[14] = ((uint64_t)(insertBits(s->x[14], 0xc46c, 48, 16, 64)));
    s->x[9] = ((uint64_t)(((s->x[9] + s->x[14]))));
    s->x[9] = ((uint64_t)(((s->x[13] ^ s->x[9]))));
    s->x[13] = ((uint64_t)(((uint64_t)(0xffffffffffff0fd0))));
    s->x[13] = ((uint64_t)(insertBits(s->x[13], 0xd398, 16, 16, 64)));
    s->x[11] = ((uint64_t)(((s->x[11] & s->x[13]))));
    s->x[11] = ((uint64_t)(((s->x[12] + s->x[11]))));
    __auto_type value39 = r_load(s, s->x[11], 8);
    s->x[11] = ((uint64_t)(value39));
    s->x[11] = ((uint64_t)(((s->x[11] & ((uint64_t)(0x7fffffffffffffff))))));
    s->x[12] = ((uint64_t)(((uint64_t)(0x9f7b))));
    s->x[12] = ((uint64_t)(insertBits(s->x[12], 0x3ab2, 16, 16, 64)));
    s->x[12] = ((uint64_t)(insertBits(s->x[12], 0xcbaa, 32, 16, 64)));
    s->x[12] = ((uint64_t)(insertBits(s->x[12], 0x3bf8, 48, 16, 64)));
    s->x[11] = ((uint64_t)(((s->x[11] ^ s->x[12]))));
    s->x[9] = ((uint64_t)(((s->x[10] + s->x[9]))));
    s->x[9] = ((uint64_t)(((s->x[9] + s->x[11]))));
    s->x[9] = ((uint64_t)(((s->x[9] + ((uint64_t)(0x1))))));
    r_storeValue(s, addOffset(s->x[0], 40), s->x[9], 8);
    r_storeValue(s, addOffset(s->x[0], 20), ((uint64_t)(0)), 4);
    r_storeValue(s, addOffset(s->x[0], 24), ((uint64_t)(0)), 8);
    __auto_type value52 = r_load(s, addOffset(s->sp, 19248), 8);
    s->x[9] = ((uint64_t)(value52));
    r_storeValue(s, s->x[9], s->x[0], 8);
    __auto_type value54 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[9] = ((uint64_t)(value54));
    __auto_type value55 = r_load(s, ((s->x[9] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[8]))))))), 3, 64))), 8);
    s->x[8] = ((uint64_t)(value55));
    s->x[28] = ((uint64_t)(((uint32_t)(((uint64_t)(0x7bc5))))));
    s->x[28] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[28])))), 0xce75, 16, 16, 32)))));
    s->x[17] = ((uint64_t)(((uint64_t)(0x3c8a))));
    next = s->x[8];
    return next;
}

uint64_t r_bb_10062491c(RState *s) {
    uint64_t next = 0;
    s->x[24] = ((uint64_t)(((uint64_t)(0x0))));
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0x1dc7))))));
    __auto_type value2 = r_load(s, addOffset(s->sp, 25952), 8);
    s->x[9] = ((uint64_t)(value2));
    __auto_type value3 = r_load(s, s->x[9], 8);
    s->x[22] = ((uint64_t)(value3));
    s->x[20] = ((uint64_t)(((s->sp + shiftLeft(((uint64_t)(0x2)), 12, 64)))));
    s->x[20] = ((uint64_t)(((s->x[20] + ((uint64_t)(0x3ec))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0xad5))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[23])))) + ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) + ((uint64_t)(((uint32_t)(s->x[23]))))))))));
    __auto_type value10 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[10] = ((uint64_t)(value10));
    __auto_type value11 = r_load(s, ((s->x[10] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[8]))))))), 3, 64))), 8);
    s->x[11] = ((uint64_t)(value11));
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0x7bc1))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0xce75, 16, 16, 32)))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0x1))))));
    s->x[17] = ((uint64_t)(((uint64_t)(0x59fd))));
    next = s->x[11];
    return next;
}

uint64_t r_bb_10062516c(RState *s) {
    uint64_t next = 0;
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0xffffd9e9))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0xa0c0))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[21])))) + ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) | ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    __auto_type value4 = r_load(s, addOffset(s->x[19], 1), 1);
    s->x[9] = ((uint64_t)(((uint32_t)(value4))));
    __auto_type value5 = r_load(s, addOffset(s->x[24], 1), 1);
    s->x[10] = ((uint64_t)(((uint32_t)(value5))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((uint64_t)(0x13))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) ^ ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) & ((uint64_t)(0x3f))))))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[12])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[11])))))));
    s->x[11] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "eq"))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0x82d3))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) * ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) ^ ((uint64_t)(((uint32_t)(s->x[21]))))))))));
    __auto_type value15 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[12] = ((uint64_t)(value15));
    __auto_type value16 = r_load(s, ((s->x[12] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[11]))))))), 3, 64))), 8);
    s->x[12] = ((uint64_t)(value16));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0x1))))));
    s->x[17] = ((uint64_t)(((uint64_t)(0xd55f))));
    next = s->x[12];
    return next;
}

uint64_t r_bb_100626370(RState *s) {
    uint64_t next = 0;
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0x235e))))));
    s->x[21] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[19] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[21])))) ^ ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0xffffb4a4))))));
    __auto_type value4 = r_load(s, addOffset(s->x[8], 8), 8);
    s->x[8] = ((uint64_t)(value4));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[21])))) + ((uint64_t)(0x38c))))))));
    s->x[11] = ((uint64_t)(((s->sp + shiftLeft(((uint64_t)(0x11)), 12, 64)))));
    s->x[11] = ((uint64_t)(((s->x[11] + ((uint64_t)(0x148))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0x2103))))));
    s->x[12] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[12])))), 0xedd, 16, 16, 32)))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) | ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((uint64_t)(0xdefc))))));
    s->x[13] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[13])))), 0xf122, 16, 16, 32)))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) | (~((uint64_t)(((uint32_t)(s->x[11])))))))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((uint64_t)(0x8d88))))));
    s->x[13] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[13])))), 0x96a3, 16, 16, 32)))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) + ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) ^ ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0x29c1))))));
    s->x[12] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[12])))), 0x316f, 16, 16, 32)))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) * ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[11] = ((uint64_t)(((s->sp + shiftLeft(((uint64_t)(0x11)), 12, 64)))));
    r_storeValue(s, addOffset(s->x[11], 328), ((uint64_t)(((uint32_t)(s->x[10])))), 4);
    r_storeValue(s, addOffset(s->x[11], 336), s->x[8], 8);
    __auto_type value25 = r_load(s, addOffset(s->sp, 3560), 8);
    s->x[8] = ((uint64_t)(value25));
    __auto_type value26 = r_load(s, s->x[8], 4);
    s->x[8] = ((uint64_t)(((uint32_t)(value26))));
    __auto_type value27 = r_load(s, addOffset(s->sp, 3552), 8);
    s->x[10] = ((uint64_t)(value27));
    __auto_type value28 = r_load(s, s->x[10], 4);
    s->x[10] = ((uint64_t)(((uint32_t)(value28))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) ^ ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0xa6))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) ^ ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0xd4cf))))));
    s->x[10] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[10])))), 0xa5c, 16, 16, 32)))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) * ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    __auto_type value35 = r_load(s, addOffset(s->sp, 3488), 8);
    s->x[10] = ((uint64_t)(value35));
    return 0x100626400;
}

uint64_t r_bb_100626400(RState *s) {
    uint64_t next = 0;
    s->x[10] = ((uint64_t)(((s->x[10] + ((uint64_t)(((uint8_t)(((uint64_t)(((uint32_t)(s->x[8]))))))))))));
    __auto_type value1 = r_load(s, s->x[10], 1);
    s->x[10] = ((uint64_t)(((uint32_t)(value1))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0xcd))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    __auto_type value4 = r_load(s, addOffset(s->sp, 3496), 8);
    s->x[11] = ((uint64_t)(value4));
    __auto_type value5 = r_load(s, ((s->x[11] + ((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[10])))))))))), 1);
    s->x[10] = ((uint64_t)(((uint32_t)(value5))));
    s->x[22] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[19])))) + ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) ^ ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0xcf28))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) + ((uint64_t)(((uint8_t)(((uint64_t)(((uint32_t)(s->x[8]))))))))))))));
    __auto_type value10 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[23] = ((uint64_t)(value10));
    __auto_type value11 = r_load(s, ((s->x[23] + shiftLeft(((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[8])))))))), 3, 64))), 8);
    s->x[8] = ((uint64_t)(value11));
    s->x[0] = ((uint64_t)(((s->sp + shiftLeft(((uint64_t)(0x11)), 12, 64)))));
    s->x[0] = ((uint64_t)(((s->x[0] + ((uint64_t)(0x148))))));
    s->x[17] = ((uint64_t)(((uint64_t)(0xc5fc))));
    s->x[30] = 0x100626440;
    next = s->x[8];
    return next;
}

uint64_t r_bb_100626440(RState *s) {
    uint64_t next = 0;
    s->x[24] = ((uint64_t)(((uint64_t)(0x0))));
    __auto_type value1 = r_load(s, addOffset(s->sp, 2616), 8);
    s->x[8] = ((uint64_t)(value1));
    __auto_type value2 = r_load(s, s->x[8], 8);
    s->x[8] = ((uint64_t)(value2));
    __auto_type value3 = r_load(s, addOffset(s->x[8], 24), 4);
    s->x[9] = ((uint64_t)(((uint32_t)(value3))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0x3c34))))));
    s->x[10] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[10])))), 0x4964, 16, 16, 32)))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[9])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[10])))))));
    s->x[9] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "eq"))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[22])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) & ((uint64_t)(0x1))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0x1ef))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) * ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[21]))))))))));
    __auto_type value13 = r_load(s, ((s->x[23] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[9]))))))), 3, 64))), 8);
    s->x[9] = ((uint64_t)(value13));
    s->x[17] = ((uint64_t)(((uint64_t)(0xa116))));
    next = s->x[9];
    return next;
}

uint64_t r_bb_100626cb4(RState *s) {
    uint64_t next = 0;
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0xe616))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0x3fb7, 16, 16, 32)))));
    s->x[15] = ((uint64_t)(((uint32_t)(((uint64_t)(0xb7ff))))));
    s->x[15] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[15])))), 0xc047, 16, 16, 32)))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) + ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) & ((uint64_t)(((uint32_t)(s->x[15]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x2701))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((uint64_t)(0x43))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) * ((uint64_t)(((uint32_t)(s->x[15]))))))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((uint64_t)(0xb))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[15]))))))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[14])))) & ((uint64_t)(0xff))))))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[14])))))), ((uint32_t)(((uint64_t)(((uint8_t)(((uint64_t)(((uint32_t)(s->x[15])))))))))));
    s->x[14] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "eq"))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((uint64_t)(0x8c96))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) ^ ((uint64_t)(((uint32_t)(s->x[15]))))))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[14])))) * ((uint64_t)(((uint32_t)(s->x[15]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[14])))) ^ ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    __auto_type value19 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[14] = ((uint64_t)(value19));
    __auto_type value20 = r_load(s, ((s->x[14] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[12]))))))), 3, 64))), 8);
    s->x[12] = ((uint64_t)(value20));
    s->x[17] = ((uint64_t)(((uint64_t)(0x3da4))));
    next = s->x[12];
    return next;
}

uint64_t r_bb_100627154(RState *s) {
    uint64_t next = 0;
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x67d7))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0x710b, 16, 16, 32)))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0x117b))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[19])))) + ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    __auto_type value5 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[11] = ((uint64_t)(value5));
    __auto_type value6 = r_load(s, ((s->x[11] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[9]))))))), 3, 64))), 8);
    s->x[9] = ((uint64_t)(value6));
    s->x[17] = ((uint64_t)(((uint64_t)(0x661c))));
    next = s->x[9];
    return next;
}
