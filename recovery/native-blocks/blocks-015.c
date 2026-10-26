// Fixed native recovery blocks; generated from the verified 26A428 path.
#include "native-runtime.h"
uint64_t r_bb_100386a10(RState *s) {
    uint64_t next = 0;
    s->sp = ((uint64_t)(((s->sp - ((uint64_t)(0x70))))));
    r_storeValue(s, addOffset(s->sp, 16), s->x[28], 8);
    r_storeValue(s, ((addOffset(s->sp, 16)) + 8), s->x[27], 8);
    r_storeValue(s, addOffset(s->sp, 32), s->x[26], 8);
    r_storeValue(s, ((addOffset(s->sp, 32)) + 8), s->x[25], 8);
    r_storeValue(s, addOffset(s->sp, 48), s->x[24], 8);
    r_storeValue(s, ((addOffset(s->sp, 48)) + 8), s->x[23], 8);
    r_storeValue(s, addOffset(s->sp, 64), s->x[22], 8);
    r_storeValue(s, ((addOffset(s->sp, 64)) + 8), s->x[21], 8);
    r_storeValue(s, addOffset(s->sp, 80), s->x[20], 8);
    r_storeValue(s, ((addOffset(s->sp, 80)) + 8), s->x[19], 8);
    r_storeValue(s, addOffset(s->sp, 96), s->x[29], 8);
    r_storeValue(s, ((addOffset(s->sp, 96)) + 8), s->x[30], 8);
    s->x[29] = ((uint64_t)(((s->sp + ((uint64_t)(0x60))))));
    s->x[19] = ((uint64_t)(s->x[0]));
    s->x[8] = ((uint64_t)(0x101080000));
    __auto_type value11 = r_load(s, addOffset(s->x[8], 3744), 4);
    s->x[9] = ((uint64_t)(((uint32_t)(value11))));
    s->x[0] = ((uint64_t)(0x101075000));
    __auto_type value13 = r_load(s, addOffset(s->x[0], 2880), 4);
    s->x[11] = ((uint64_t)(((uint32_t)(value13))));
    s->x[17] = ((uint64_t)(((uint32_t)(((uint64_t)(0xa6))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) - ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[17]))))))))));
    s->x[22] = ((uint64_t)(((uint32_t)(((uint64_t)(0xd4cf))))));
    s->x[22] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[22])))), 0xa5c, 16, 16, 32)))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) * ((uint64_t)(((uint32_t)(s->x[22]))))))))));
    s->x[9] = ((uint64_t)(0x100f49000));
    s->x[9] = ((uint64_t)(((s->x[9] + ((uint64_t)(0x630))))));
    s->x[10] = ((uint64_t)(((s->x[9] + ((uint64_t)(((uint8_t)(((uint64_t)(((uint32_t)(s->x[12]))))))))))));
    __auto_type value23 = r_load(s, s->x[10], 1);
    s->x[10] = ((uint64_t)(((uint32_t)(value23))));
    s->x[13] = ((uint64_t)(((uint32_t)(((uint64_t)(0xcd))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    s->x[10] = ((uint64_t)(0x100fe9000));
    s->x[10] = ((uint64_t)(((s->x[10] + ((uint64_t)(0x490))))));
    __auto_type value28 = r_load(s, ((s->x[10] + ((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[13])))))))))), 1);
    s->x[13] = ((uint64_t)(((uint32_t)(value28))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) ^ ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) & ((uint64_t)(0xff))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) + ((uint64_t)(0xa91))))))));
    s->x[20] = ((uint64_t)(0x10105b000));
    s->x[20] = ((uint64_t)(((s->x[20] + ((uint64_t)(0x6f0))))));
    __auto_type value34 = r_load(s, ((s->x[20] + shiftLeft(((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[12])))))))), 3, 64))), 8);
    s->x[12] = ((uint64_t)(value34));
    s->x[13] = ((uint64_t)(((uint64_t)(0xffffffffffff2e75))));
    s->x[13] = ((uint64_t)(insertBits(s->x[13], 0xa0c1, 16, 16, 64)));
    s->x[28] = ((uint64_t)(((s->x[12] + s->x[13]))));
    __auto_type value38 = r_load(s, s->x[28], 8);
    s->x[12] = ((uint64_t)(value38));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) - ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) ^ ((uint64_t)(((uint32_t)(s->x[17]))))))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) * ((uint64_t)(((uint32_t)(s->x[22]))))))))));
    __auto_type value42 = r_load(s, addOffset(s->x[20], 6904), 8);
    s->x[11] = ((uint64_t)(value42));
    s->x[11] = ((uint64_t)(((s->x[11] + ((uint64_t)(((uint8_t)(((uint64_t)(((uint32_t)(s->x[13]))))))))))));
    s->x[14] = ((uint64_t)(((uint64_t)(0xffffffffffff4862))));
    s->x[14] = ((uint64_t)(insertBits(s->x[14], 0xcd11, 16, 16, 64)));
    s->x[11] = ((uint64_t)(((s->x[11] + s->x[14]))));
    __auto_type value47 = r_load(s, s->x[11], 1);
    s->x[14] = ((uint64_t)(((uint32_t)(value47))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0xb1))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[14])))) ^ ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    __auto_type value50 = r_load(s, addOffset(s->x[20], 10840), 8);
    s->x[15] = ((uint64_t)(value50));
    s->x[16] = ((uint64_t)(((uint64_t)(0xffffffffffff614e))));
    s->x[16] = ((uint64_t)(insertBits(s->x[16], 0xe5b0, 16, 16, 64)));
    s->x[15] = ((uint64_t)(((s->x[15] + s->x[16]))));
    s->x[14] = ((uint64_t)(((s->x[15] + s->x[14]))));
    __auto_type value55 = r_load(s, s->x[14], 1);
    s->x[14] = ((uint64_t)(((uint32_t)(value55))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[14])))) ^ ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((uint64_t)(0x133a))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[14])))) + ((uint64_t)(((uint8_t)(((uint64_t)(((uint32_t)(s->x[13]))))))))))))));
    __auto_type value59 = r_load(s, ((s->x[20] + shiftLeft(((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[13])))))))), 3, 64))), 8);
    s->x[13] = ((uint64_t)(value59));
    s->x[14] = ((uint64_t)(((uint64_t)(0xffffffffffffa825))));
    s->x[14] = ((uint64_t)(insertBits(s->x[14], 0x9608, 16, 16, 64)));
    s->x[25] = ((uint64_t)(((s->x[13] + s->x[14]))));
    __auto_type value63 = r_load(s, s->x[25], 8);
    s->x[13] = ((uint64_t)(value63));
    s->x[14] = ((uint64_t)(((s->sp + ((uint64_t)(0x8))))));
    s->x[12] = ((uint64_t)(((s->x[13] - s->x[12]))));
    s->x[12] = ((uint64_t)(((s->x[12] ^ s->x[14]))));
    s->x[13] = ((uint64_t)(((s->x[12] * s->x[22]))));
    s->x[14] = ((uint64_t)(((uint64_t)(0xd1a6))));
    s->x[14] = ((uint64_t)(insertBits(s->x[14], 0x8eae, 16, 16, 64)));
    s->x[14] = ((uint64_t)(insertBits(s->x[14], 0x4620, 32, 16, 64)));
    s->x[14] = ((uint64_t)(insertBits(s->x[14], 0x73d0, 48, 16, 64)));
    s->x[13] = ((uint64_t)(((s->x[13] ^ s->x[14]))));
    s->x[12] = ((uint64_t)(((s->x[12] ^ s->x[14]))));
    s->x[12] = ((uint64_t)(((s->x[12] * s->x[22]))));
    r_storeValue(s, s->x[28], s->x[13], 8);
    r_storeValue(s, s->x[25], s->x[12], 8);
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0xeeaf))))));
    s->x[12] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[12])))), 0xaa, 16, 16, 32)))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[19])))) & ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(shiftLeft(((uint64_t)(((uint32_t)(s->x[12])))), ((int64_t)(((uint64_t)(0x1)))), 32)))));
    s->x[13] = ((uint64_t)(((uint32_t)(((uint64_t)(0x1150))))));
    s->x[13] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[13])))), 0x7f55, 16, 16, 32)))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) - ((uint64_t)(((uint32_t)(s->x[19]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) + ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((uint64_t)(0x685b))))));
    s->x[13] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[13])))), 0xa315, 16, 16, 32)))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) ^ ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((uint64_t)(0xa279))))));
    s->x[13] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[13])))), 0x5973, 16, 16, 32)))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) * ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    __auto_type value91 = r_load(s, s->x[19], 4);
    s->x[13] = ((uint64_t)(((uint32_t)(value91))));
    s->x[24] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) ^ ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    __auto_type value93 = r_load(s, addOffset(s->x[19], 4), 1);
    s->x[13] = ((uint64_t)(((uint32_t)(value93))));
    s->x[27] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) + ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[21] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[27])))) & ((uint64_t)(0xff))))))));
    __auto_type value96 = r_load(s, addOffset(s->x[19], 5), 1);
    s->x[13] = ((uint64_t)(((uint32_t)(value96))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) ^ ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    r_storeValue(s, s->sp, ((uint64_t)(((uint32_t)(s->x[12])))), 4);
    s->x[26] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) & ((uint64_t)(0xff))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0xffffabf3))))));
    s->x[13] = ((uint64_t)(((s->sp + ((uint64_t)(0x4))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((uint64_t)(0xd3ce))))));
    s->x[14] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[14])))), 0x3586, 16, 16, 32)))));
    s->x[14] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) | ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((uint64_t)(0xd3cc))))));
    s->x[15] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[15])))), 0x3586, 16, 16, 32)))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) & ((uint64_t)(((uint32_t)(s->x[15]))))))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((uint64_t)(0xb3da))))));
    s->x[15] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[15])))), 0xf350, 16, 16, 32)))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[14])))) - ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) ^ ((uint64_t)(((uint32_t)(s->x[15]))))))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((uint64_t)(0x592f))))));
    s->x[14] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[14])))), 0x6b86, 16, 16, 32)))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) * ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[24])))) + ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) ^ ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    r_storeValue(s, addOffset(s->sp, 4), ((uint64_t)(((uint32_t)(s->x[12])))), 4);
    __auto_type value118 = r_load(s, s->x[28], 4);
    s->x[12] = ((uint64_t)(((uint32_t)(value118))));
    __auto_type value119 = r_load(s, s->x[25], 4);
    s->x[13] = ((uint64_t)(((uint32_t)(value119))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) ^ ((uint64_t)(((uint32_t)(s->x[17]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) ^ ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) * ((uint64_t)(((uint32_t)(s->x[22]))))))))));
    __auto_type value123 = r_load(s, addOffset(s->x[20], 14856), 8);
    s->x[13] = ((uint64_t)(value123));
    return 0x100386c00;
}

uint64_t r_bb_100386c00(RState *s) {
    uint64_t next = 0;
    s->x[13] = ((uint64_t)(((s->x[13] + ((uint64_t)(((uint8_t)(((uint64_t)(((uint32_t)(s->x[12]))))))))))));
    s->x[14] = ((uint64_t)(((uint64_t)(0xffffffffffff2ec2))));
    s->x[14] = ((uint64_t)(insertBits(s->x[14], 0xfdc5, 16, 16, 64)));
    s->x[13] = ((uint64_t)(((s->x[13] + s->x[14]))));
    __auto_type value4 = r_load(s, s->x[13], 1);
    s->x[13] = ((uint64_t)(((uint32_t)(value4))));
    s->x[14] = ((uint64_t)(((uint32_t)(((uint64_t)(0xb5))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) ^ ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    __auto_type value7 = r_load(s, addOffset(s->x[20], 2088), 8);
    s->x[14] = ((uint64_t)(value7));
    s->x[15] = ((uint64_t)(((uint64_t)(0xffffffffffff6d86))));
    s->x[15] = ((uint64_t)(insertBits(s->x[15], 0xba63, 16, 16, 64)));
    s->x[14] = ((uint64_t)(((s->x[14] + s->x[15]))));
    s->x[13] = ((uint64_t)(((s->x[14] + s->x[13]))));
    __auto_type value12 = r_load(s, s->x[13], 1);
    s->x[13] = ((uint64_t)(((uint32_t)(value12))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) ^ ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((uint64_t)(0xd012))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) + ((uint64_t)(((uint8_t)(((uint64_t)(((uint32_t)(s->x[12]))))))))))))));
    __auto_type value16 = r_load(s, addOffset(s->x[8], 3744), 4);
    s->x[8] = ((uint64_t)(((uint32_t)(value16))));
    __auto_type value17 = r_load(s, addOffset(s->x[0], 2880), 4);
    s->x[13] = ((uint64_t)(((uint32_t)(value17))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) ^ ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) ^ ((uint64_t)(((uint32_t)(s->x[17]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) * ((uint64_t)(((uint32_t)(s->x[22]))))))))));
    s->x[9] = ((uint64_t)(((s->x[9] + ((uint64_t)(((uint8_t)(((uint64_t)(((uint32_t)(s->x[8]))))))))))));
    __auto_type value22 = r_load(s, s->x[9], 1);
    s->x[9] = ((uint64_t)(((uint32_t)(value22))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    __auto_type value24 = r_load(s, ((s->x[10] + ((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[9])))))))))), 1);
    s->x[9] = ((uint64_t)(((uint32_t)(value24))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) & ((uint64_t)(0xff))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) + ((uint64_t)(0x26a))))))));
    __auto_type value28 = r_load(s, ((s->x[20] + shiftLeft(((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[8])))))))), 3, 64))), 8);
    s->x[8] = ((uint64_t)(value28));
    s->x[9] = ((uint64_t)(((uint64_t)(0xffffffffffff5355))));
    s->x[9] = ((uint64_t)(insertBits(s->x[9], 0x9824, 16, 16, 64)));
    s->x[23] = ((uint64_t)(((s->x[8] + s->x[9]))));
    __auto_type value32 = r_load(s, ((s->x[23] + shiftLeft(((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[12])))))))), 3, 64))), 8);
    s->x[8] = ((uint64_t)(value32));
    s->x[0] = ((uint64_t)(((s->sp + ((uint64_t)(0x4))))));
    s->x[17] = ((uint64_t)(((uint64_t)(0x3b19))));
    s->x[30] = 0x100386c90;
    next = s->x[8];
    return next;
}

uint64_t r_bb_100386c90(RState *s) {
    uint64_t next = 0;
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[21])))))), ((uint32_t)(((uint64_t)(0x5c)))));
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0x47))))));
    if (r_condition(s, "ne"))
    {
        r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[26])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[8])))))));
    }
    else
    {
        r_setNZCV(s, 0x4);
    }
    s->x[8] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "ne"))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x37))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) * ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) ^ ((uint64_t)(((uint32_t)(s->x[24]))))))))));
    __auto_type value7 = r_load(s, ((s->x[23] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[8]))))))), 3, 64))), 8);
    s->x[9] = ((uint64_t)(value7));
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0x6c))))));
    s->x[17] = ((uint64_t)(((uint64_t)(0x71ee))));
    next = s->x[9];
    return next;
}

uint64_t r_bb_100389a78(RState *s) {
    uint64_t next = 0;
    s->sp = ((uint64_t)(((s->sp - ((uint64_t)(0x140))))));
    r_storeValue(s, addOffset(s->sp, 224), s->x[28], 8);
    r_storeValue(s, ((addOffset(s->sp, 224)) + 8), s->x[27], 8);
    r_storeValue(s, addOffset(s->sp, 240), s->x[26], 8);
    r_storeValue(s, ((addOffset(s->sp, 240)) + 8), s->x[25], 8);
    r_storeValue(s, addOffset(s->sp, 256), s->x[24], 8);
    r_storeValue(s, ((addOffset(s->sp, 256)) + 8), s->x[23], 8);
    r_storeValue(s, addOffset(s->sp, 272), s->x[22], 8);
    r_storeValue(s, ((addOffset(s->sp, 272)) + 8), s->x[21], 8);
    r_storeValue(s, addOffset(s->sp, 288), s->x[20], 8);
    r_storeValue(s, ((addOffset(s->sp, 288)) + 8), s->x[19], 8);
    r_storeValue(s, addOffset(s->sp, 304), s->x[29], 8);
    r_storeValue(s, ((addOffset(s->sp, 304)) + 8), s->x[30], 8);
    s->x[8] = ((uint64_t)(0x101074000));
    __auto_type value9 = r_load(s, addOffset(s->x[8], 1176), 8);
    s->x[11] = ((uint64_t)(value9));
    s->x[25] = ((uint64_t)(0x101075000));
    __auto_type value11 = r_load(s, addOffset(s->x[25], 2880), 4);
    s->x[10] = ((uint64_t)(((uint32_t)(value11))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) ^ ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0xa6))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((uint64_t)(0xd4cf))))));
    s->x[14] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[14])))), 0xa5c, 16, 16, 32)))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) * ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    s->x[10] = ((uint64_t)(0x10105b000));
    s->x[10] = ((uint64_t)(((s->x[10] + ((uint64_t)(0x6f0))))));
    __auto_type value20 = r_load(s, addOffset(s->x[10], 6904), 8);
    s->x[15] = ((uint64_t)(value20));
    s->x[16] = ((uint64_t)(((uint64_t)(0xffffffffffff4862))));
    s->x[16] = ((uint64_t)(insertBits(s->x[16], 0xcd11, 16, 16, 64)));
    s->x[9] = ((uint64_t)(((s->x[15] + s->x[16]))));
    r_storeValue(s, addOffset(s->sp, 200), s->x[9], 8);
    s->x[15] = ((uint64_t)(((s->x[9] + ((uint64_t)(((uint8_t)(((uint64_t)(((uint32_t)(s->x[13]))))))))))));
    __auto_type value26 = r_load(s, s->x[15], 1);
    s->x[15] = ((uint64_t)(((uint32_t)(value26))));
    s->x[16] = ((uint64_t)(((uint32_t)(((uint64_t)(0xcd))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) ^ ((uint64_t)(((uint32_t)(s->x[16]))))))))));
    __auto_type value29 = r_load(s, addOffset(s->x[10], 10840), 8);
    s->x[16] = ((uint64_t)(value29));
    s->x[17] = ((uint64_t)(((uint64_t)(0xffffffffffff614e))));
    s->x[17] = ((uint64_t)(insertBits(s->x[17], 0xe5b0, 16, 16, 64)));
    s->x[9] = ((uint64_t)(((s->x[16] + s->x[17]))));
    r_storeValue(s, addOffset(s->sp, 192), s->x[9], 8);
    __auto_type value34 = r_load(s, ((s->x[9] + ((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[15])))))))))), 1);
    s->x[15] = ((uint64_t)(((uint32_t)(value34))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) ^ ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((uint64_t)(0x12bf))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) + ((uint64_t)(((uint8_t)(((uint64_t)(((uint32_t)(s->x[13]))))))))))))));
    __auto_type value38 = r_load(s, ((s->x[10] + shiftLeft(((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[13])))))))), 3, 64))), 8);
    s->x[13] = ((uint64_t)(value38));
    s->x[15] = ((uint64_t)(((uint64_t)(0xffffffffffffa825))));
    s->x[15] = ((uint64_t)(insertBits(s->x[15], 0x9608, 16, 16, 64)));
    s->x[13] = ((uint64_t)(((s->x[13] + s->x[15]))));
    __auto_type value42 = r_load(s, s->x[13], 8);
    s->x[15] = ((uint64_t)(value42));
    s->x[11] = ((uint64_t)(((s->x[15] ^ s->x[11]))));
    s->x[15] = ((uint64_t)(((s->sp + ((uint64_t)(0xd8))))));
    s->x[16] = ((uint64_t)(((uint64_t)(0xd1a6))));
    s->x[16] = ((uint64_t)(insertBits(s->x[16], 0x8eae, 16, 16, 64)));
    s->x[16] = ((uint64_t)(insertBits(s->x[16], 0x4620, 32, 16, 64)));
    s->x[16] = ((uint64_t)(insertBits(s->x[16], 0x73d0, 48, 16, 64)));
    s->x[11] = ((uint64_t)(((s->x[11] + s->x[15]))));
    s->x[15] = ((uint64_t)(((s->x[11] ^ s->x[16]))));
    s->x[11] = ((uint64_t)((((s->x[11] * s->x[14]) + s->x[16]))));
    s->x[15] = ((uint64_t)(((s->x[15] * s->x[14]))));
    r_storeValue(s, addOffset(s->x[8], 1176), s->x[11], 8);
    r_storeValue(s, s->x[13], s->x[15], 8);
    s->x[11] = ((uint64_t)(((uint64_t)(0x21f4))));
    s->x[11] = ((uint64_t)(insertBits(s->x[11], 0xb051, 16, 16, 64)));
    s->x[11] = ((uint64_t)(insertBits(s->x[11], 0x1b88, 32, 16, 64)));
    s->x[11] = ((uint64_t)(insertBits(s->x[11], 0x1335, 48, 16, 64)));
    s->x[15] = ((uint64_t)(((s->x[0] | s->x[11]))));
    s->x[11] = ((uint64_t)(((s->x[0] & s->x[11]))));
    s->x[16] = ((uint64_t)(((uint64_t)(0xc6b6))));
    s->x[16] = ((uint64_t)(insertBits(s->x[16], 0x570, 16, 16, 64)));
    s->x[16] = ((uint64_t)(insertBits(s->x[16], 0x2424, 32, 16, 64)));
    s->x[16] = ((uint64_t)(insertBits(s->x[16], 0x6d25, 48, 16, 64)));
    s->x[11] = ((uint64_t)(((s->x[15] - s->x[11]))));
    s->x[11] = ((uint64_t)(((s->x[11] ^ s->x[16]))));
    s->x[15] = ((uint64_t)(((uint32_t)(((uint64_t)(0xe98d))))));
    s->x[15] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[15])))), 0x74ca, 16, 16, 32)))));
    s->x[11] = ((uint64_t)(((s->x[11] * s->x[15]))));
    __auto_type value70 = r_load(s, addOffset(s->x[0], 4), 4);
    s->x[16] = ((uint64_t)(((uint32_t)(value70))));
    r_storeValue(s, addOffset(s->sp, 208), s->x[0], 8);
    __auto_type value72 = r_load(s, addOffset(s->x[0], 8), 8);
    s->x[15] = ((uint64_t)(value72));
    r_compare64(s, ((uint64_t)(s->x[15])), ((uint64_t)(((uint64_t)(0x0)))));
    s->x[17] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "eq"))))));
    s->x[1] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[16])))) + ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[16] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) ^ ((uint64_t)(((uint32_t)(s->x[1]))))))))));
    s->x[16] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[16])))) & ((uint64_t)(0x1))))))));
    __auto_type value78 = r_load(s, addOffset(s->x[8], 1176), 4);
    s->x[17] = ((uint64_t)(((uint32_t)(value78))));
    __auto_type value79 = r_load(s, addOffset(s->x[25], 2880), 4);
    s->x[2] = ((uint64_t)(((uint32_t)(value79))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) ^ ((uint64_t)(((uint32_t)(s->x[2]))))))))));
    s->x[2] = ((uint64_t)(((uint32_t)(((uint64_t)(0x33))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) ^ ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) * ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    s->x[14] = ((uint64_t)(0x100fe9000));
    s->x[14] = ((uint64_t)(((s->x[14] + ((uint64_t)(0x390))))));
    s->x[14] = ((uint64_t)(((s->x[14] + ((uint64_t)(((uint8_t)(((uint64_t)(((uint32_t)(s->x[12]))))))))))));
    __auto_type value87 = r_load(s, s->x[14], 1);
    s->x[14] = ((uint64_t)(((uint32_t)(value87))));
    s->x[17] = ((uint64_t)(((uint32_t)(((uint64_t)(0x2a))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[14])))) ^ ((uint64_t)(((uint32_t)(s->x[17]))))))))));
    s->x[17] = ((uint64_t)(0x100de2000));
    s->x[17] = ((uint64_t)(((s->x[17] + ((uint64_t)(0xaf0))))));
    __auto_type value92 = r_load(s, ((s->x[17] + ((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[14])))))))))), 1);
    s->x[14] = ((uint64_t)(((uint32_t)(value92))));
    s->x[16] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[16])))) * ((uint64_t)(((uint32_t)(s->x[2]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) ^ ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) & ((uint64_t)(0xff))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) + ((uint64_t)(0x215))))))));
    __auto_type value97 = r_load(s, ((s->x[10] + shiftLeft(((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[12])))))))), 3, 64))), 8);
    s->x[12] = ((uint64_t)(value97));
    return 0x100389c00;
}

uint64_t r_bb_100389c00(RState *s) {
    uint64_t next = 0;
    s->x[16] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[16])))) ^ ((uint64_t)(((uint32_t)(s->x[1]))))))))));
    s->x[14] = ((uint64_t)(((uint64_t)(0xffffffffffff5355))));
    s->x[14] = ((uint64_t)(insertBits(s->x[14], 0x9824, 16, 16, 64)));
    s->x[14] = ((uint64_t)(((s->x[12] + s->x[14]))));
    __auto_type value4 = r_load(s, ((s->x[14] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[16]))))))), 3, 64))), 8);
    s->x[12] = ((uint64_t)(value4));
    s->x[2] = ((uint64_t)(((uint32_t)(((uint64_t)(0x98ef))))));
    s->x[2] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[2])))), 0x5d42, 16, 16, 32)))));
    s->x[17] = ((uint64_t)(((uint64_t)(0x4fbb))));
    next = s->x[12];
    return next;
}

uint64_t r_bb_100390f48(RState *s) {
    uint64_t next = 0;
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x7a75))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0xbd20))))));
    s->x[10] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[10])))), 0xfb9b, 16, 16, 32)))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[24])))) ^ ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((uint64_t)(0x42e0))))));
    s->x[15] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[15])))), 0x464, 16, 16, 32)))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) + ((uint64_t)(((uint32_t)(s->x[15]))))))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((uint64_t)(0x50e))))));
    s->x[15] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[15])))), 0x662e, 16, 16, 32)))));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[24])))) ^ ((uint64_t)(((uint32_t)(s->x[15]))))))))));
    s->x[16] = ((uint64_t)(((uint32_t)(((uint64_t)(0xfaf2))))));
    s->x[16] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[16])))), 0x99d1, 16, 16, 32)))));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) + ((uint64_t)(((uint32_t)(s->x[16]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[15]))))))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((uint64_t)(0x672d))))));
    s->x[15] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[15])))), 0x53c0, 16, 16, 32)))));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[24])))) ^ ((uint64_t)(((uint32_t)(s->x[15]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) + ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[16] = ((uint64_t)(((uint32_t)(((uint64_t)(0x3c15))))));
    s->x[16] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[16])))), 0xac3f, 16, 16, 32)))));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) + ((uint64_t)(((uint32_t)(s->x[16]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[15]))))))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((uint64_t)(0x4080))))));
    s->x[15] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[15])))), 0xd859, 16, 16, 32)))));
    s->x[16] = ((uint64_t)(((uint32_t)(((uint64_t)(0x9aa1))))));
    s->x[16] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[16])))), 0x8348, 16, 16, 32)))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) + ((uint64_t)(((uint32_t)(s->x[15]))))))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[16]))))))))));
    s->x[16] = ((uint64_t)(((uint32_t)(((uint64_t)(0xa1e4))))));
    s->x[16] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[16])))), 0x7554, 16, 16, 32)))));
    s->x[17] = ((uint64_t)(((uint32_t)(((uint64_t)(0xb9c7))))));
    s->x[17] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[17])))), 0x671f, 16, 16, 32)))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[17]))))))))));
    s->x[2] = ((uint64_t)(((uint32_t)(((uint64_t)(0x8286))))));
    s->x[2] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[2])))), 0x9103, 16, 16, 32)))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) + ((uint64_t)(((uint32_t)(s->x[2]))))))))));
    s->x[2] = ((uint64_t)(((uint32_t)(((uint64_t)(0x5924))))));
    s->x[2] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[2])))), 0x114f, 16, 16, 32)))));
    s->x[2] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[2]))))))))));
    s->x[3] = ((uint64_t)(((uint32_t)(((uint64_t)(0x6267))))));
    s->x[3] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[3])))), 0xe753, 16, 16, 32)))));
    s->x[4] = ((uint64_t)(((uint32_t)(((uint64_t)(0xbeff))))));
    s->x[4] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[4])))), 0xfcfb, 16, 16, 32)))));
    s->x[4] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[4]))))))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) + ((uint64_t)(((uint32_t)(s->x[16]))))))))));
    return 0x100391000;
}

uint64_t r_bb_100391000(RState *s) {
    uint64_t next = 0;
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[15]))))))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((uint64_t)(0x85be))))));
    s->x[15] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[15])))), 0xae7, 16, 16, 32)))));
    s->x[16] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[2])))) + ((uint64_t)(((uint32_t)(s->x[3]))))))))));
    s->x[16] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) ^ ((uint64_t)(((uint32_t)(s->x[16]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[16]))))))))));
    s->x[16] = ((uint64_t)(((uint32_t)(((uint64_t)(0xbf78))))));
    s->x[16] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[16])))), 0xc796, 16, 16, 32)))));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[4])))) + ((uint64_t)(((uint32_t)(s->x[15]))))))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) ^ ((uint64_t)(((uint32_t)(s->x[16]))))))))));
    s->x[24] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[15]))))))))));
    __auto_type value11 = r_load(s, ((s->x[19] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[8]))))))), 3, 64))), 8);
    s->x[8] = ((uint64_t)(value11));
    s->x[3] = ((uint64_t)(((uint32_t)(((uint64_t)(0xf4f))))));
    s->x[3] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[3])))), 0x961, 16, 16, 32)))));
    __auto_type value14 = r_load(s, addOffset(s->x[29], (-144)), 8);
    s->x[27] = ((uint64_t)(value14));
    s->x[17] = ((uint64_t)(((uint64_t)(0xb857))));
    next = s->x[8];
    return next;
}

uint64_t r_bb_10039263c(RState *s) {
    uint64_t next = 0;
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[1])))) ^ ((uint64_t)(((uint32_t)(s->x[0]))))))))));
    r_test32(s, ((uint32_t)((s->x[8] & ((uint64_t)(0x7))))));
    if (r_condition(s, "eq"))
    {
        next = 0x100392674;
    }
    else
    {
        next = 0x100392648;
    }
    return next;
}

uint64_t r_bb_100392648(RState *s) {
    uint64_t next = 0;
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[2])))) + ((uint64_t)(0x7))))))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[8])))))), ((uint32_t)(((uint64_t)(0x8)))));
    if (r_condition(s, "lo"))
    {
        next = 0x1003927cc;
    }
    else
    {
        next = 0x100392654;
    }
    return next;
}

uint64_t r_bb_100392654(RState *s) {
    uint64_t next = 0;
    s->x[8] = ((uint64_t)(((uint32_t)(shiftRight(((uint64_t)(((uint32_t)(s->x[8])))), ((int64_t)(((uint64_t)(0x3)))), 32)))));
    s->x[9] = ((uint64_t)(((s->x[2] & ((uint64_t)(0x7))))));
    r_compare64(s, ((uint64_t)(s->x[9])), ((uint64_t)(((uint64_t)(0x3)))));
    if (r_condition(s, "gt"))
    {
        next = 0x1003926a8;
    }
    else
    {
        next = 0x100392664;
    }
    return next;
}

uint64_t r_bb_100392664(RState *s) {
    uint64_t next = 0;
    r_compare64(s, ((uint64_t)(s->x[9])), ((uint64_t)(((uint64_t)(0x1)))));
    if (r_condition(s, "gt"))
    {
        next = 0x100392754;
    }
    else
    {
        next = 0x10039266c;
    }
    return next;
}

uint64_t r_bb_10039266c(RState *s) {
    uint64_t next = 0;
    if ((s->x[9] == 0))
    {
        next = 0x100392784;
    }
    else
    {
        next = 0x100392670;
    }
    return next;
}

uint64_t r_bb_100392674(RState *s) {
    uint64_t next = 0;
    s->x[8] = ((uint64_t)(((uint32_t)((-(((uint64_t)(((uint32_t)(s->x[0]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) & ((uint64_t)(0x7))))))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[8])))))), ((uint32_t)(((uint64_t)(0x3)))));
    if (r_condition(s, "gt"))
    {
        next = 0x100392694;
    }
    else
    {
        next = 0x100392684;
    }
    return next;
}

uint64_t r_bb_100392684(RState *s) {
    uint64_t next = 0;
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[8])))))), ((uint32_t)(((uint64_t)(0x1)))));
    if (r_condition(s, "gt"))
    {
        next = 0x1003926bc;
    }
    else
    {
        next = 0x10039268c;
    }
    return next;
}

uint64_t r_bb_10039268c(RState *s) {
    uint64_t next = 0;
    if ((((uint64_t)(((uint32_t)(s->x[8])))) != 0))
    {
        next = 0x100392700;
    }
    else
    {
        next = 0x100392690;
    }
    return next;
}

uint64_t r_bb_100392690(RState *s) {
    uint64_t next = 0;
    next = 0x100392708;
    return next;
}

uint64_t r_bb_100392694(RState *s) {
    uint64_t next = 0;
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[8])))))), ((uint32_t)(((uint64_t)(0x5)))));
    if (r_condition(s, "gt"))
    {
        next = 0x1003926c8;
    }
    else
    {
        next = 0x10039269c;
    }
    return next;
}

uint64_t r_bb_10039269c(RState *s) {
    uint64_t next = 0;
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[8])))))), ((uint32_t)(((uint64_t)(0x4)))));
    if (r_condition(s, "ne"))
    {
        next = 0x1003926e0;
    }
    else
    {
        next = 0x1003926a4;
    }
    return next;
}

uint64_t r_bb_1003926a4(RState *s) {
    uint64_t next = 0;
    next = 0x1003926e8;
    return next;
}

uint64_t r_bb_1003926e8(RState *s) {
    uint64_t next = 0;
    __auto_type value0 = r_load(s, s->x[0], 1);
    s->x[9] = ((uint64_t)(((uint32_t)(value0))));
    s->x[0] = ((uint64_t)(((s->x[0] + ((uint64_t)(0x1))))));
    r_storeValue(s, s->x[1], ((uint64_t)(((uint32_t)(s->x[9])))), 1);
    s->x[1] = ((uint64_t)(((s->x[1] + ((uint64_t)(0x1))))));
    __auto_type value2 = r_load(s, s->x[0], 1);
    s->x[9] = ((uint64_t)(((uint32_t)(value2))));
    s->x[0] = ((uint64_t)(((s->x[0] + ((uint64_t)(0x1))))));
    r_storeValue(s, s->x[1], ((uint64_t)(((uint32_t)(s->x[9])))), 1);
    s->x[1] = ((uint64_t)(((s->x[1] + ((uint64_t)(0x1))))));
    __auto_type value4 = r_load(s, s->x[0], 1);
    s->x[9] = ((uint64_t)(((uint32_t)(value4))));
    s->x[0] = ((uint64_t)(((s->x[0] + ((uint64_t)(0x1))))));
    r_storeValue(s, s->x[1], ((uint64_t)(((uint32_t)(s->x[9])))), 1);
    s->x[1] = ((uint64_t)(((s->x[1] + ((uint64_t)(0x1))))));
    __auto_type value6 = r_load(s, s->x[0], 1);
    s->x[9] = ((uint64_t)(((uint32_t)(value6))));
    s->x[0] = ((uint64_t)(((s->x[0] + ((uint64_t)(0x1))))));
    r_storeValue(s, s->x[1], ((uint64_t)(((uint32_t)(s->x[9])))), 1);
    s->x[1] = ((uint64_t)(((s->x[1] + ((uint64_t)(0x1))))));
    s->x[8] = ((uint64_t)(r_subtractWithFlags(s, s->x[2], s->x[8], 64)));
    s->x[8] = ((uint64_t)(selectValue(r_condition(s, "lo"), ((uint64_t)(0)), s->x[8])));
    r_compare64(s, ((uint64_t)(s->x[8])), ((uint64_t)(((uint64_t)(0x8)))));
    if (r_condition(s, "lo"))
    {
        next = 0x100392818;
    }
    else
    {
        next = 0x100392718;
    }
    return next;
}

uint64_t r_bb_100392708(RState *s) {
    uint64_t next = 0;
    s->x[8] = ((uint64_t)(r_subtractWithFlags(s, s->x[2], s->x[8], 64)));
    s->x[8] = ((uint64_t)(selectValue(r_condition(s, "lo"), ((uint64_t)(0)), s->x[8])));
    r_compare64(s, ((uint64_t)(s->x[8])), ((uint64_t)(((uint64_t)(0x8)))));
    if (r_condition(s, "lo"))
    {
        next = 0x100392818;
    }
    else
    {
        next = 0x100392718;
    }
    return next;
}

uint64_t r_bb_100392718(RState *s) {
    uint64_t next = 0;
    s->x[9] = ((uint64_t)(shiftRight(s->x[8], ((int64_t)(((uint64_t)(0x3)))), 64)));
    s->x[9] = ((uint64_t)(((s->x[9] + ((uint64_t)(0x7))))));
    s->x[9] = ((uint64_t)(shiftRight(s->x[9], ((int64_t)(((uint64_t)(0x3)))), 64)));
    s->x[10] = ((uint64_t)((((s->x[8] >> 3)) & bitMask(3, 64))));
    r_compare64(s, ((uint64_t)(s->x[10])), ((uint64_t)(((uint64_t)(0x3)))));
    if (r_condition(s, "gt"))
    {
        next = 0x100392740;
    }
    else
    {
        next = 0x100392730;
    }
    return next;
}

uint64_t r_bb_100392730(RState *s) {
    uint64_t next = 0;
    r_compare64(s, ((uint64_t)(s->x[10])), ((uint64_t)(((uint64_t)(0x1)))));
    if (r_condition(s, "gt"))
    {
        next = 0x10039276c;
    }
    else
    {
        next = 0x100392738;
    }
    return next;
}

uint64_t r_bb_10039276c(RState *s) {
    uint64_t next = 0;
    r_compare64(s, ((uint64_t)(s->x[10])), ((uint64_t)(((uint64_t)(0x2)))));
    if (r_condition(s, "ne"))
    {
        next = 0x1003927f8;
    }
    else
    {
        next = 0x100392774;
    }
    return next;
}

uint64_t r_bb_100392774(RState *s) {
    uint64_t next = 0;
    next = 0x100392800;
    return next;
}

uint64_t r_bb_100392784(RState *s) {
    uint64_t next = 0;
    __auto_type value0 = r_load(s, s->x[0], 1);
    s->x[9] = ((uint64_t)(((uint32_t)(value0))));
    s->x[0] = ((uint64_t)(((s->x[0] + ((uint64_t)(0x1))))));
    r_storeValue(s, s->x[1], ((uint64_t)(((uint32_t)(s->x[9])))), 1);
    s->x[1] = ((uint64_t)(((s->x[1] + ((uint64_t)(0x1))))));
    __auto_type value2 = r_load(s, s->x[0], 1);
    s->x[9] = ((uint64_t)(((uint32_t)(value2))));
    s->x[0] = ((uint64_t)(((s->x[0] + ((uint64_t)(0x1))))));
    r_storeValue(s, s->x[1], ((uint64_t)(((uint32_t)(s->x[9])))), 1);
    s->x[1] = ((uint64_t)(((s->x[1] + ((uint64_t)(0x1))))));
    __auto_type value4 = r_load(s, s->x[0], 1);
    s->x[9] = ((uint64_t)(((uint32_t)(value4))));
    s->x[0] = ((uint64_t)(((s->x[0] + ((uint64_t)(0x1))))));
    r_storeValue(s, s->x[1], ((uint64_t)(((uint32_t)(s->x[9])))), 1);
    s->x[1] = ((uint64_t)(((s->x[1] + ((uint64_t)(0x1))))));
    __auto_type value6 = r_load(s, s->x[0], 1);
    s->x[9] = ((uint64_t)(((uint32_t)(value6))));
    s->x[0] = ((uint64_t)(((s->x[0] + ((uint64_t)(0x1))))));
    r_storeValue(s, s->x[1], ((uint64_t)(((uint32_t)(s->x[9])))), 1);
    s->x[1] = ((uint64_t)(((s->x[1] + ((uint64_t)(0x1))))));
    __auto_type value8 = r_load(s, s->x[0], 1);
    s->x[9] = ((uint64_t)(((uint32_t)(value8))));
    s->x[0] = ((uint64_t)(((s->x[0] + ((uint64_t)(0x1))))));
    r_storeValue(s, s->x[1], ((uint64_t)(((uint32_t)(s->x[9])))), 1);
    s->x[1] = ((uint64_t)(((s->x[1] + ((uint64_t)(0x1))))));
    __auto_type value10 = r_load(s, s->x[0], 1);
    s->x[9] = ((uint64_t)(((uint32_t)(value10))));
    s->x[0] = ((uint64_t)(((s->x[0] + ((uint64_t)(0x1))))));
    r_storeValue(s, s->x[1], ((uint64_t)(((uint32_t)(s->x[9])))), 1);
    s->x[1] = ((uint64_t)(((s->x[1] + ((uint64_t)(0x1))))));
    __auto_type value12 = r_load(s, s->x[0], 1);
    s->x[9] = ((uint64_t)(((uint32_t)(value12))));
    s->x[0] = ((uint64_t)(((s->x[0] + ((uint64_t)(0x1))))));
    r_storeValue(s, s->x[1], ((uint64_t)(((uint32_t)(s->x[9])))), 1);
    s->x[1] = ((uint64_t)(((s->x[1] + ((uint64_t)(0x1))))));
    __auto_type value14 = r_load(s, s->x[0], 1);
    s->x[9] = ((uint64_t)(((uint32_t)(value14))));
    s->x[0] = ((uint64_t)(((s->x[0] + ((uint64_t)(0x1))))));
    r_storeValue(s, s->x[1], ((uint64_t)(((uint32_t)(s->x[9])))), 1);
    s->x[1] = ((uint64_t)(((s->x[1] + ((uint64_t)(0x1))))));
    s->x[8] = ((uint64_t)(((uint32_t)(r_subtractWithFlags(s, ((uint64_t)(((uint32_t)(s->x[8])))), ((uint64_t)(0x1)), 32)))));
    if (r_condition(s, "ne"))
    {
        next = 0x100392784;
    }
    else
    {
        next = 0x1003927cc;
    }
    return next;
}

uint64_t r_bb_1003927cc(RState *s) {
    uint64_t next = 0;
    next = s->x[30];
    return next;
}

uint64_t r_bb_100392800(RState *s) {
    uint64_t next = 0;
    __auto_type value0 = r_load(s, s->x[0], 8);
    s->x[10] = ((uint64_t)(value0));
    s->x[0] = ((uint64_t)(((s->x[0] + ((uint64_t)(0x8))))));
    r_storeValue(s, s->x[1], s->x[10], 8);
    s->x[1] = ((uint64_t)(((s->x[1] + ((uint64_t)(0x8))))));
    __auto_type value2 = r_load(s, s->x[0], 8);
    s->x[10] = ((uint64_t)(value2));
    s->x[0] = ((uint64_t)(((s->x[0] + ((uint64_t)(0x8))))));
    r_storeValue(s, s->x[1], s->x[10], 8);
    s->x[1] = ((uint64_t)(((s->x[1] + ((uint64_t)(0x8))))));
    s->x[9] = ((uint64_t)(r_subtractWithFlags(s, s->x[9], ((uint64_t)(0x1)), 64)));
    if (r_condition(s, "ne"))
    {
        next = 0x1003927d0;
    }
    else
    {
        next = 0x100392818;
    }
    return next;
}

uint64_t r_bb_100392818(RState *s) {
    uint64_t next = 0;
    s->x[8] = ((uint64_t)(((s->x[8] & ((uint64_t)(0x7))))));
    r_compare64(s, ((uint64_t)(s->x[8])), ((uint64_t)(((uint64_t)(0x3)))));
    if (r_condition(s, "gt"))
    {
        next = 0x100392834;
    }
    else
    {
        next = 0x100392824;
    }
    return next;
}

uint64_t r_bb_100392824(RState *s) {
    uint64_t next = 0;
    r_compare64(s, ((uint64_t)(s->x[8])), ((uint64_t)(((uint64_t)(0x1)))));
    if (r_condition(s, "gt"))
    {
        next = 0x100392848;
    }
    else
    {
        next = 0x10039282c;
    }
    return next;
}

uint64_t r_bb_10039282c(RState *s) {
    uint64_t next = 0;
    if ((s->x[8] == 0))
    {
        next = 0x1003927cc;
    }
    else
    {
        next = 0x100392830;
    }
    return next;
}

uint64_t r_bb_100392834(RState *s) {
    uint64_t next = 0;
    r_compare64(s, ((uint64_t)(s->x[8])), ((uint64_t)(((uint64_t)(0x5)))));
    if (r_condition(s, "gt"))
    {
        next = 0x100392854;
    }
    else
    {
        next = 0x10039283c;
    }
    return next;
}

uint64_t r_bb_10039283c(RState *s) {
    uint64_t next = 0;
    r_compare64(s, ((uint64_t)(s->x[8])), ((uint64_t)(((uint64_t)(0x4)))));
    if (r_condition(s, "ne"))
    {
        next = 0x10039286c;
    }
    else
    {
        next = 0x100392844;
    }
    return next;
}

uint64_t r_bb_100392844(RState *s) {
    uint64_t next = 0;
    next = 0x100392874;
    return next;
}

uint64_t r_bb_100392874(RState *s) {
    uint64_t next = 0;
    __auto_type value0 = r_load(s, s->x[0], 1);
    s->x[8] = ((uint64_t)(((uint32_t)(value0))));
    s->x[0] = ((uint64_t)(((s->x[0] + ((uint64_t)(0x1))))));
    r_storeValue(s, s->x[1], ((uint64_t)(((uint32_t)(s->x[8])))), 1);
    s->x[1] = ((uint64_t)(((s->x[1] + ((uint64_t)(0x1))))));
    __auto_type value2 = r_load(s, s->x[0], 1);
    s->x[8] = ((uint64_t)(((uint32_t)(value2))));
    s->x[0] = ((uint64_t)(((s->x[0] + ((uint64_t)(0x1))))));
    r_storeValue(s, s->x[1], ((uint64_t)(((uint32_t)(s->x[8])))), 1);
    s->x[1] = ((uint64_t)(((s->x[1] + ((uint64_t)(0x1))))));
    __auto_type value4 = r_load(s, s->x[0], 1);
    s->x[8] = ((uint64_t)(((uint32_t)(value4))));
    s->x[0] = ((uint64_t)(((s->x[0] + ((uint64_t)(0x1))))));
    r_storeValue(s, s->x[1], ((uint64_t)(((uint32_t)(s->x[8])))), 1);
    s->x[1] = ((uint64_t)(((s->x[1] + ((uint64_t)(0x1))))));
    __auto_type value6 = r_load(s, s->x[0], 1);
    s->x[8] = ((uint64_t)(((uint32_t)(value6))));
    r_storeValue(s, s->x[1], ((uint64_t)(((uint32_t)(s->x[8])))), 1);
    next = s->x[30];
    return next;
}

uint64_t r_bb_100392acc(RState *s) {
    uint64_t next = 0;
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x90c3))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0x3cfa, 16, 16, 32)))));
    s->x[23] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[1])))) + ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x7973))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[6])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x1c12))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) * ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0xa0d9))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) + ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0xa0f3))))));
    s->x[16] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[16] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[16])))) ^ ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[27])))) & ((uint64_t)(0xffff))))))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[17])))))), ((uint32_t)(((uint64_t)(((uint16_t)(((uint64_t)(((uint32_t)(s->x[16])))))))))));
    s->x[16] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "eq"))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0xca))))));
    s->x[16] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[16])))) * ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[16] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[16])))) ^ ((uint64_t)(((uint32_t)(s->x[6]))))))))));
    __auto_type value18 = r_load(s, ((s->x[14] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[16]))))))), 3, 64))), 8);
    s->x[2] = ((uint64_t)(value18));
    __auto_type value19 = r_load(s, addOffset(s->sp, 104), 4);
    s->x[1] = ((uint64_t)(((uint32_t)(value19))));
    s->x[17] = ((uint64_t)(((uint64_t)(0x2bf9))));
    next = s->x[2];
    return next;
}

uint64_t r_bb_100392b24(RState *s) {
    uint64_t next = 0;
    __auto_type value0 = r_load(s, addOffset(s->sp, 128), 4);
    s->x[8] = ((uint64_t)(((uint32_t)(value0))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) ^ ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0x7864))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0x54b1, 16, 16, 32)))));
    s->x[16] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) ^ ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0x879c))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0xab4e, 16, 16, 32)))));
    s->x[16] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[16])))) + ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0x5124))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0x9295, 16, 16, 32)))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) ^ ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0xaedc))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0x6d6a, 16, 16, 32)))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) + ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[16] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) ^ ((uint64_t)(((uint32_t)(s->x[16]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0xad7b))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0xf7ae, 16, 16, 32)))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) + ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[16])))) ^ ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0x7bb1))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0xce75, 16, 16, 32)))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) + ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    (void)r_addWithCarry(s, ((uint64_t)(((uint32_t)(s->x[12])))), ((uint64_t)(0x14)), false, 32);
    s->x[12] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "lo"))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0x4e8e))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) * ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    __auto_type value26 = r_load(s, addOffset(s->sp, 132), 4);
    s->x[8] = ((uint64_t)(((uint32_t)(value26))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) ^ ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    __auto_type value28 = r_load(s, ((s->x[14] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[12]))))))), 3, 64))), 8);
    s->x[12] = ((uint64_t)(value28));
    s->x[2] = ((uint64_t)(((uint32_t)(((uint64_t)(0x98ef))))));
    s->x[2] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[2])))), 0x5d42, 16, 16, 32)))));
    s->x[8] = ((uint64_t)(0x101074000));
    s->x[25] = ((uint64_t)(0x101075000));
    __auto_type value33 = r_load(s, addOffset(s->sp, 168), 8);
    s->x[26] = ((uint64_t)(value33));
    s->x[17] = ((uint64_t)(((uint64_t)(0xd348))));
    next = s->x[12];
    return next;
}

uint64_t r_bb_100393cd4(RState *s) {
    uint64_t next = 0;
    r_compare64(s, ((uint64_t)(s->x[14])), ((uint64_t)(s->x[15])));
    s->x[9] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "lt"))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[16])))) ^ ((uint64_t)(((uint32_t)(s->x[7]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[16])))) ^ ((uint64_t)(((uint32_t)(s->x[22]))))))))));
    s->x[1] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) * ((uint64_t)(((uint32_t)(s->x[23]))))))))));
    s->x[0] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) * ((uint64_t)(((uint32_t)(s->x[24]))))))))));
    __auto_type value6 = r_load(s, addOffset(s->x[10], 8), 8);
    s->x[13] = ((uint64_t)(value6));
    s->x[17] = ((uint64_t)(((s->x[13] + s->x[27]))));
    s->x[2] = ((uint64_t)(((s->x[1] + s->x[28]))));
    r_compare64(s, ((uint64_t)(s->x[17])), ((uint64_t)(s->x[2])));
    s->x[2] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "lt"))))));
    s->x[2] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[2]))))))))));
    r_compare64(s, ((uint64_t)(s->x[17])), ((uint64_t)(s->x[14])));
    s->x[17] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "lt"))))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[2])))))), ((uint32_t)(((uint64_t)(0x0)))));
    s->x[9] = ((uint64_t)(((uint32_t)(selectValue(r_condition(s, "ne"), ((uint64_t)(((uint32_t)(s->x[9])))), ((uint64_t)(((uint32_t)(s->x[17])))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[0])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((((uint64_t)(((uint32_t)(s->x[9]))))) & bitMask(1, 32))) << 3)))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[16]))))))))));
    __auto_type value19 = r_load(s, ((s->x[21] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[9]))))))), 3, 64))), 8);
    s->x[9] = ((uint64_t)(value19));
    s->x[17] = ((uint64_t)(((uint64_t)(0x837c))));
    next = s->x[9];
    return next;
}

uint64_t r_bb_100397714(RState *s) {
    uint64_t next = 0;
    s->x[11] = ((uint64_t)(((uint32_t)(signExtendBits(((uint64_t)(((uint32_t)(s->x[10])))), 8, 32)))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x2bec))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) + shiftLeft(((uint64_t)(((uint32_t)(s->x[9])))), 1, 32)))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) ^ ((uint64_t)(0xffffffef))))))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[11])))))), ((uint32_t)(((uint64_t)(((int64_t)(((int8_t)(((uint64_t)(((uint32_t)(s->x[12])))))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "lt"))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) & ((uint64_t)(0x1))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0x34f))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) * ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) ^ ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    __auto_type value12 = r_load(s, ((s->x[30] + shiftLeft(((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[11])))))))), 3, 64))), 8);
    s->x[11] = ((uint64_t)(value12));
    __auto_type value13 = r_load(s, addOffset(s->sp, 104), 8);
    s->x[3] = ((uint64_t)(value13));
    s->x[17] = ((uint64_t)(((uint64_t)(0xced))));
    next = s->x[11];
    return next;
}

uint64_t r_bb_100397ecc(RState *s) {
    uint64_t next = 0;
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x3f73))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0x4c0))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) + ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[20] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) | ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x40a1))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0x59a7))))));
    s->x[21] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) * ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0xfb95))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0x486f, 16, 16, 32)))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[20])))) + ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[11])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[9])))))));
    s->x[9] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "eq"))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0x32cc))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[21])))) ^ ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) * ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    __auto_type value17 = r_load(s, ((s->x[30] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[9]))))))), 3, 64))), 8);
    s->x[9] = ((uint64_t)(value17));
    s->x[22] = ((uint64_t)(((uint32_t)(((uint64_t)(0x201c))))));
    s->x[22] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[22])))), 0x318a, 16, 16, 32)))));
    s->x[17] = ((uint64_t)(((uint64_t)(0x9aa0))));
    next = s->x[9];
    return next;
}

uint64_t r_bb_10039a594(RState *s) {
    uint64_t next = 0;
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[8])))))), ((uint32_t)(((uint64_t)(0x2c)))));
    s->x[17] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "eq"))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) ^ ((uint64_t)(((uint32_t)(s->x[17]))))))))));
    __auto_type value3 = r_load(s, ((s->x[21] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[17]))))))), 3, 64))), 8);
    s->x[3] = ((uint64_t)(value3));
    s->x[17] = ((uint64_t)(((uint64_t)(0x64c8))));
    next = s->x[3];
    return next;
}

uint64_t r_bb_10039b3d4(RState *s) {
    uint64_t next = 0;
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[15]))))))))));
    s->x[27] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[0]))))))))));
    s->x[27] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[27])))) + ((uint64_t)(((uint32_t)(s->x[1]))))))))));
    s->x[28] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[2]))))))))));
    s->x[30] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[4]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) + ((uint64_t)(((uint32_t)(s->x[16]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[28] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[28])))) + ((uint64_t)(((uint32_t)(s->x[3]))))))))));
    s->x[27] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[27])))) ^ ((uint64_t)(((uint32_t)(s->x[28]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) ^ ((uint64_t)(((uint32_t)(s->x[27]))))))))));
    s->x[27] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[30])))) + ((uint64_t)(((uint32_t)(s->x[5]))))))))));
    return 0x10039b400;
}

uint64_t r_bb_10039b400(RState *s) {
    uint64_t next = 0;
    __auto_type value0 = r_load(s, addOffset(s->sp, 272), 8);
    s->x[30] = ((uint64_t)(value0));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) ^ ((uint64_t)(((uint32_t)(s->x[27]))))))))));
    s->x[27] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) ^ ((uint64_t)(((uint32_t)(s->x[6]))))))))));
    s->x[27] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[27])))) + ((uint64_t)(((uint32_t)(s->x[7]))))))))));
    s->x[28] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) ^ ((uint64_t)(((uint32_t)(s->x[19]))))))))));
    s->x[28] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[28])))) + ((uint64_t)(((uint32_t)(s->x[20]))))))))));
    s->x[27] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[27])))) ^ ((uint64_t)(((uint32_t)(s->x[28]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) ^ ((uint64_t)(((uint32_t)(s->x[21]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) + ((uint64_t)(((uint32_t)(s->x[22]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[27])))) ^ ((uint64_t)(((uint32_t)(s->x[17]))))))))));
    s->x[27] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) + ((uint64_t)(((uint32_t)(s->x[23]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) * ((uint64_t)(((uint32_t)(s->x[24]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)((((((uint64_t)(((uint32_t)(s->x[13])))) * ((uint64_t)(((uint32_t)(s->x[27]))))) + ((uint64_t)(((uint32_t)(s->x[17]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) + ((uint64_t)(((uint32_t)(s->x[17]))))))))));
    s->x[27] = ((uint64_t)(((s->x[25] + s->x[14]))));
    r_storeValue(s, s->x[27], ((uint64_t)(((uint32_t)(s->x[17])))), 1);
    s->x[9] = ((uint64_t)(((s->x[9] + ((uint64_t)(0x1))))));
    r_compare64(s, ((uint64_t)(s->x[14])), ((uint64_t)(((uint64_t)(0x0)))));
    s->x[17] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "eq"))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) * ((uint64_t)(((uint32_t)(s->x[26]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) ^ ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    __auto_type value21 = r_load(s, ((s->x[30] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[17]))))))), 3, 64))), 8);
    s->x[27] = ((uint64_t)(value21));
    s->x[14] = ((uint64_t)(((s->x[14] - ((uint64_t)(0x1))))));
    s->x[11] = ((uint64_t)(((s->x[11] + s->x[10]))));
    s->x[13] = ((uint64_t)(((s->x[13] + ((uint64_t)(0x1))))));
    s->x[17] = ((uint64_t)(((uint64_t)(0x3c63))));
    next = s->x[27];
    return next;
}

uint64_t r_bb_10039bb40(RState *s) {
    uint64_t next = 0;
    __auto_type value0 = r_load(s, addOffset(s->sp, 208), 8);
    s->x[9] = ((uint64_t)(value0));
    __auto_type value1 = r_load(s, addOffset(s->x[9], 16), 4);
    s->x[12] = ((uint64_t)(((uint32_t)(value1))));
    s->x[17] = ((uint64_t)(((uint32_t)(((uint64_t)(0x8ce5))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[16])))) ^ ((uint64_t)(((uint32_t)(s->x[17]))))))))));
    s->x[2] = ((uint64_t)(((uint32_t)(((uint64_t)(0x98ef))))));
    s->x[2] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[2])))), 0x5d42, 16, 16, 32)))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) + ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[11])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[2])))))));
    __auto_type value8a = r_load(s, addOffset(s->x[15], 20), 4);
    __auto_type value8b = r_load(s, ((addOffset(s->x[15], 20)) + 4), 4);
    s->x[3] = ((uint64_t)(((uint32_t)(value8a))));
    s->x[12] = ((uint64_t)(((uint32_t)(value8b))));
    s->x[9] = ((uint64_t)(((uint32_t)(selectValue(r_condition(s, "eq"), ((uint64_t)(((uint32_t)(s->x[12])))), ((uint64_t)(((uint32_t)(s->x[11])))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0xd20f))))));
    s->x[11] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[11])))), 0xe2ea, 16, 16, 32)))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) + ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    r_storeValue(s, addOffset(s->sp, 100), ((uint64_t)(((uint32_t)(s->x[9])))), 4);
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) + ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0xfe3f))))));
    s->x[12] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[12])))), 0x9ef, 16, 16, 32)))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[16])))) ^ ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[4] = ((uint64_t)(((uint32_t)(((uint64_t)(0x3ed))))));
    s->x[4] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[4])))), 0x9d70, 16, 16, 32)))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[11])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[4])))))));
    s->x[5] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "lo"))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[3])))) + ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[12])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[4])))))));
    s->x[3] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "lo"))))));
    s->x[4] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[3])))) ^ ((uint64_t)(((uint32_t)(s->x[5]))))))))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[11])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[12])))))));
    s->x[11] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "lo"))))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[4])))))), ((uint32_t)(((uint64_t)(0x0)))));
    s->x[11] = ((uint64_t)(((uint32_t)(selectValue(r_condition(s, "ne"), ((uint64_t)(((uint32_t)(s->x[3])))), ((uint64_t)(((uint32_t)(s->x[11])))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) + ((uint64_t)(0x796))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) * ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) ^ ((uint64_t)(((uint32_t)(s->x[16]))))))))));
    __auto_type value33 = r_load(s, ((s->x[14] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[11]))))))), 3, 64))), 8);
    s->x[11] = ((uint64_t)(value33));
    s->x[17] = ((uint64_t)(((uint64_t)(0xd348))));
    next = s->x[11];
    return next;
}

uint64_t r_bb_10039bd4c(RState *s) {
    uint64_t next = 0;
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0x9a40))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[1])))) ^ ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[16] = ((uint64_t)(((uint32_t)(((uint64_t)(0xc1e4))))));
    s->x[16] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[16])))), 0x167a, 16, 16, 32)))));
    s->x[17] = ((uint64_t)(((uint32_t)(((uint64_t)(0x2fbe))))));
    s->x[17] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[17])))), 0xe985, 16, 16, 32)))));
    s->x[16] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) + ((uint64_t)(((uint32_t)(s->x[16]))))))))));
    s->x[16] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[16])))) & ((uint64_t)(((uint32_t)(s->x[17]))))))))));
    __auto_type value8 = r_load(s, s->x[15], 8);
    s->x[17] = ((uint64_t)(value8));
    r_compare64(s, ((uint64_t)(s->x[17])), ((uint64_t)(((uint64_t)(0x0)))));
    s->x[17] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "eq"))))));
    s->x[2] = ((uint64_t)(((uint32_t)(((uint64_t)(0x8c9c))))));
    s->x[2] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[16])))) + ((uint64_t)(((uint32_t)(s->x[2]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) * ((uint64_t)(((uint32_t)(s->x[2]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) ^ ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    __auto_type value15 = r_load(s, ((s->x[14] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[17]))))))), 3, 64))), 8);
    s->x[2] = ((uint64_t)(value15));
    s->x[17] = ((uint64_t)(((uint64_t)(0xc697))));
    next = s->x[2];
    return next;
}

uint64_t r_bb_10039d958(RState *s) {
    uint64_t next = 0;
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[12])))))), ((uint32_t)(((uint64_t)(0x1)))));
    s->x[11] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "eq"))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0xffffbf78))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) + ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) * ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) ^ ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    __auto_type value6 = r_load(s, ((s->x[9] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[11]))))))), 3, 64))), 8);
    s->x[12] = ((uint64_t)(value6));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0x10))))));
    s->x[17] = ((uint64_t)(((uint64_t)(0x8c87))));
    next = s->x[12];
    return next;
}

uint64_t r_bb_10039f168(RState *s) {
    uint64_t next = 0;
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[15]))))))))));
    s->x[26] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[26] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[26])))) ^ ((uint64_t)(((uint32_t)(s->x[0]))))))))));
    s->x[27] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[2]))))))))));
    s->x[27] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[27])))) + ((uint64_t)(((uint32_t)(s->x[3]))))))))));
    s->x[28] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[4]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) + ((uint64_t)(((uint32_t)(s->x[16]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) ^ ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[28] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[28])))) + ((uint64_t)(((uint32_t)(s->x[5]))))))))));
    s->x[27] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[27])))) ^ ((uint64_t)(((uint32_t)(s->x[28]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) ^ ((uint64_t)(((uint32_t)(s->x[27]))))))))));
    s->x[26] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[26])))) + ((uint64_t)(((uint32_t)(s->x[1]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) ^ ((uint64_t)(((uint32_t)(s->x[26]))))))))));
    s->x[26] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) ^ ((uint64_t)(((uint32_t)(s->x[6]))))))))));
    s->x[26] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[26])))) + ((uint64_t)(((uint32_t)(s->x[7]))))))))));
    s->x[27] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) + ((uint64_t)(((uint32_t)(s->x[19]))))))))));
    s->x[26] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[26])))) ^ ((uint64_t)(((uint32_t)(s->x[27]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) ^ ((uint64_t)(((uint32_t)(s->x[20]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) + ((uint64_t)(((uint32_t)(s->x[21]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[26])))) ^ ((uint64_t)(((uint32_t)(s->x[17]))))))))));
    s->x[26] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) + ((uint64_t)(((uint32_t)(s->x[22]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) * ((uint64_t)(((uint32_t)(s->x[23]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)((((((uint64_t)(((uint32_t)(s->x[13])))) * ((uint64_t)(((uint32_t)(s->x[26]))))) + ((uint64_t)(((uint32_t)(s->x[17]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) + ((uint64_t)(((uint32_t)(s->x[17]))))))))));
    s->x[26] = ((uint64_t)(((s->x[24] + s->x[14]))));
    r_storeValue(s, s->x[26], ((uint64_t)(((uint32_t)(s->x[17])))), 1);
    s->x[10] = ((uint64_t)(((s->x[10] + ((uint64_t)(0x1))))));
    r_compare64(s, ((uint64_t)(s->x[14])), ((uint64_t)(((uint64_t)(0x0)))));
    s->x[17] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "eq"))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) * ((uint64_t)(((uint32_t)(s->x[25]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    __auto_type value31 = r_load(s, ((s->x[30] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[17]))))))), 3, 64))), 8);
    s->x[26] = ((uint64_t)(value31));
    s->x[14] = ((uint64_t)(((s->x[14] - ((uint64_t)(0x1))))));
    s->x[12] = ((uint64_t)(((s->x[12] + s->x[11]))));
    s->x[13] = ((uint64_t)(((s->x[13] + ((uint64_t)(0x1))))));
    s->x[17] = ((uint64_t)(((uint64_t)(0x8372))));
    next = s->x[26];
    return next;
}

uint64_t r_bb_1003a1cc8(RState *s) {
    uint64_t next = 0;
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x937f))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0x8ef4, 16, 16, 32)))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[26])))) + ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0xe2ee))))));
    s->x[10] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[10])))), 0xed00, 16, 16, 32)))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) + ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    __auto_type value6 = r_load(s, addOffset(s->x[0], 2776), 8);
    s->x[27] = ((uint64_t)(value6));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0x691b))))));
    s->x[10] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[10])))), 0x710b, 16, 16, 32)))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[26])))) + ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) + ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    __auto_type value11 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[11] = ((uint64_t)(value11));
    __auto_type value12 = r_load(s, ((s->x[11] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[10]))))))), 3, 64))), 8);
    s->x[10] = ((uint64_t)(value12));
    __auto_type value13 = r_load(s, addOffset(s->sp, 3504), 8);
    s->x[14] = ((uint64_t)(value13));
    __auto_type value14 = r_load(s, addOffset(s->sp, 3512), 8);
    s->x[13] = ((uint64_t)(value14));
    s->x[4] = ((uint64_t)(((uint32_t)(((uint64_t)(0x43a))))));
    s->x[4] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[4])))), 0xb04c, 16, 16, 32)))));
    s->x[0] = ((uint64_t)(((uint32_t)(((uint64_t)(0x12f1))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((uint64_t)(0xb1))))));
    s->x[17] = ((uint64_t)(((uint64_t)(0x4a55))));
    next = s->x[10];
    return next;
}

uint64_t r_bb_1003a58c4(RState *s) {
    uint64_t next = 0;
    __auto_type value0 = r_load(s, addOffset(s->sp, 156), 4);
    s->x[9] = ((uint64_t)(((uint32_t)(value0))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0x6d86))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) + ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0xcc7))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0x6657, 16, 16, 32)))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) + ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0xebdf))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0x99a8, 16, 16, 32)))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) & ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    __auto_type value9 = r_load(s, addOffset(s->x[15], 20), 4);
    s->x[16] = ((uint64_t)(((uint32_t)(value9))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0xab0d))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0xf891, 16, 16, 32)))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0xce85))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0xc90b, 16, 16, 32)))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[1])))) + ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x3dc2))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0x8c11, 16, 16, 32)))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[17])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[9])))))));
    s->x[2] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "lo"))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) + ((uint64_t)(((uint32_t)(s->x[16]))))))))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[12])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[9])))))));
    s->x[16] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "lo"))))));
    s->x[16] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[2])))) ^ ((uint64_t)(((uint32_t)(s->x[16]))))))))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[17])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[12])))))));
    s->x[12] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "hi"))))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[16])))))), ((uint32_t)(((uint64_t)(0x0)))));
    s->x[12] = ((uint64_t)(((uint32_t)(selectValue(r_condition(s, "ne"), ((uint64_t)(((uint32_t)(s->x[2])))), ((uint64_t)(((uint32_t)(s->x[12])))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) ^ ((uint64_t)(0x1))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0xd))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) * ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) ^ ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    __auto_type value32 = r_load(s, ((s->x[14] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[12]))))))), 3, 64))), 8);
    s->x[12] = ((uint64_t)(value32));
    s->x[2] = ((uint64_t)(((uint32_t)(((uint64_t)(0x98ef))))));
    s->x[2] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[2])))), 0x5d42, 16, 16, 32)))));
    s->x[17] = ((uint64_t)(((uint64_t)(0xf3f))));
    next = s->x[12];
    return next;
}

uint64_t r_bb_1003a5cb4(RState *s) {
    uint64_t next = 0;
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0xab52))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0x710b, 16, 16, 32)))));
    s->x[9] = ((uint64_t)(((s->sp + shiftLeft(((uint64_t)(0x7)), 12, 64)))));
    __auto_type value3 = r_load(s, addOffset(s->x[9], 2624), 4);
    s->x[9] = ((uint64_t)(((uint32_t)(value3))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0xddf5))))));
    s->x[10] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[10])))), 0xd1e8, 16, 16, 32)))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0x220b))))));
    s->x[11] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[11])))), 0x2e17, 16, 16, 32)))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) + ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0xd4a7))))));
    s->x[11] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[11])))), 0xf34d, 16, 16, 32)))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0x8a32))))));
    s->x[12] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[12])))), 0x8246, 16, 16, 32)))));
    __auto_type value15 = r_load(s, addOffset(s->sp, 3544), 4);
    s->x[14] = ((uint64_t)(((uint32_t)(value15))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[14])))) ^ ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) + ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0x7297))))));
    s->x[11] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[11])))), 0xecd0, 16, 16, 32)))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0x8d69))))));
    s->x[11] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[11])))), 0x132f, 16, 16, 32)))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) + ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0xc2ac))))));
    s->x[10] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[10])))), 0x48f0, 16, 16, 32)))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[2])))) ^ ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0x3d54))))));
    s->x[11] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[11])))), 0xb70f, 16, 16, 32)))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) + ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0x75c7))))));
    s->x[11] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[11])))), 0x9cda, 16, 16, 32)))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[2])))) ^ ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0x8a39))))));
    s->x[12] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[12])))), 0x6325, 16, 16, 32)))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) + ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0xccae))))));
    s->x[11] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[11])))), 0x1a5f, 16, 16, 32)))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[2])))) ^ ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0x3352))))));
    s->x[12] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[12])))), 0xe5a0, 16, 16, 32)))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) + ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0x1122))))));
    s->x[11] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[11])))), 0x3937, 16, 16, 32)))));
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0x10fe))))));
    s->x[12] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[12])))), 0x3937, 16, 16, 32)))));
    s->x[13] = ((uint64_t)(((uint32_t)(((uint64_t)(0x955d))))));
    s->x[13] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[13])))), 0x6ac1, 16, 16, 32)))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) + ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[10])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[13])))))));
    s->x[11] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "lo"))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) + ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[9])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[13])))))));
    s->x[12] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "lo"))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) ^ ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[10])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[9])))))));
    s->x[9] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "lo"))))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[11])))))), ((uint32_t)(((uint64_t)(0x0)))));
    s->x[9] = ((uint64_t)(((uint32_t)(selectValue(r_condition(s, "ne"), ((uint64_t)(((uint32_t)(s->x[12])))), ((uint64_t)(((uint32_t)(s->x[9])))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(0x1))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0x4c))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) * ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[14])))) + ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    __auto_type value68 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[9] = ((uint64_t)(value68));
    __auto_type value69 = r_load(s, ((s->x[9] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[8]))))))), 3, 64))), 8);
    s->x[8] = ((uint64_t)(value69));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x201b))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0x318a, 16, 16, 32)))));
    s->x[22] = ((uint64_t)(s->x[14]));
    s->x[17] = ((uint64_t)(((uint64_t)(0x50cb))));
    next = s->x[8];
    return next;
}

uint64_t r_bb_1003a5ec8(RState *s) {
    uint64_t next = 0;
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0x94ae))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0x710b, 16, 16, 32)))));
    __auto_type value2 = r_load(s, addOffset(s->sp, 3544), 4);
    s->x[10] = ((uint64_t)(((uint32_t)(value2))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) + ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[0] = ((uint64_t)(((s->sp + shiftLeft(((uint64_t)(0xa)), 12, 64)))));
    s->x[0] = ((uint64_t)(((s->x[0] + ((uint64_t)(0x5c0))))));
    __auto_type value6 = r_load(s, addOffset(s->x[0], 2792), 8);
    s->x[9] = ((uint64_t)(value6));
    r_storeValue(s, addOffset(s->x[9], 8), ((uint64_t)(((uint32_t)(s->x[28])))), 4);
    __auto_type value8 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[9] = ((uint64_t)(value8));
    __auto_type value9 = r_load(s, ((s->x[9] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[8]))))))), 3, 64))), 8);
    s->x[8] = ((uint64_t)(value9));
    s->x[17] = ((uint64_t)(((uint64_t)(0x301d))));
    next = s->x[8];
    return next;
}

uint64_t r_bb_1003aa000(RState *s) {
    uint64_t next = 0;
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[3])))) + ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[27] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) & ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    __auto_type value2 = r_load(s, ((s->x[21] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[19]))))))), 3, 64))), 8);
    s->x[4] = ((uint64_t)(value2));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[3])))) + ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) + ((uint64_t)(((uint32_t)(s->x[27]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) * ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) ^ ((uint64_t)(((uint32_t)(s->x[3]))))))))));
    __auto_type value7 = r_load(s, ((s->x[21] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[17]))))))), 3, 64))), 8);
    s->x[3] = ((uint64_t)(value7));
    s->x[24] = ((uint64_t)(((uint32_t)(((uint64_t)(0x98fb))))));
    s->x[24] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[24])))), 0x5d42, 16, 16, 32)))));
    s->x[17] = ((uint64_t)(((uint64_t)(0xd54c))));
    next = s->x[3];
    return next;
}

uint64_t r_bb_1003aae3c(RState *s) {
    uint64_t next = 0;
    s->x[8] = ((uint64_t)(((s->x[29] - ((uint64_t)(0x9c))))));
    r_storeValue(s, addOffset(s->sp, 104), s->x[8], 8);
    __auto_type value2 = r_load(s, addOffset(s->sp, 408), 4);
    s->x[8] = ((uint64_t)(((uint32_t)(value2))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) & ((uint64_t)(0x3f))))))));
    __auto_type value4 = r_load(s, addOffset(s->sp, 56), 4);
    s->x[9] = ((uint64_t)(((uint32_t)(value4))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0xb947))))));
    s->x[10] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[10])))), 0xc46b, 16, 16, 32)))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) + ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0x2121))))));
    s->x[10] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[10])))), 0x5c5b, 16, 16, 32)))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) ^ ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0x65f5))))));
    s->x[11] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[11])))), 0x1db1, 16, 16, 32)))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) + ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0xdcb2))))));
    s->x[10] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[10])))), 0xd9da, 16, 16, 32)))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) ^ ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0x9868))))));
    s->x[10] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[10])))), 0x9830, 16, 16, 32)))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) + ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0xbb2a))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0xbe15, 16, 16, 32)))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) + ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0x9b))))));
    r_storeValue(s, ((s->x[26] + ((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[8])))))))))), ((uint64_t)(((uint32_t)(s->x[10])))), 1);
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0x8250))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0xd852, 16, 16, 32)))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) + ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0xbaf2))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0xbe15, 16, 16, 32)))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) + ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    __auto_type value34 = r_load(s, addOffset(s->sp, 52), 4);
    s->x[13] = ((uint64_t)(((uint32_t)(value34))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) | (~((uint64_t)(((uint32_t)(s->x[8])))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) - ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) & ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) & ~(((uint64_t)(((uint32_t)(s->x[8])))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) | ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(shiftRight(((uint64_t)(((uint32_t)(s->x[8])))), ((int64_t)(((uint64_t)(0x1f)))), 32)))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0xa875))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) * ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    __auto_type value43 = r_load(s, addOffset(s->sp, 48), 4);
    s->x[11] = ((uint64_t)(((uint32_t)(value43))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) ^ ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    __auto_type value45 = r_load(s, addOffset(s->sp, 272), 8);
    s->x[30] = ((uint64_t)(value45));
    __auto_type value46 = r_load(s, ((s->x[30] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[8]))))))), 3, 64))), 8);
    s->x[8] = ((uint64_t)(value46));
    s->x[7] = ((uint64_t)(((uint32_t)(((uint64_t)(0x7bc5))))));
    s->x[7] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[7])))), 0xce75, 16, 16, 32)))));
    __auto_type value49 = r_load(s, addOffset(s->sp, 208), 8);
    s->x[2] = ((uint64_t)(value49));
    s->x[17] = ((uint64_t)(((uint64_t)(0x76b7))));
    next = s->x[8];
    return next;
}

uint64_t r_bb_1003ad970(RState *s) {
    uint64_t next = 0;
    __auto_type value0 = r_load(s, ((s->x[21] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[10]))))))), 3, 64))), 8);
    s->x[8] = ((uint64_t)(value0));
    r_storeValue(s, addOffset(s->sp, 128), s->x[8], 8);
    __auto_type value2 = r_load(s, ((s->x[21] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[9]))))))), 3, 64))), 8);
    s->x[15] = ((uint64_t)(value2));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0x3699))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) + ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    __auto_type value5a = r_load(s, addOffset(s->sp, 40), 8);
    __auto_type value5b = r_load(s, ((addOffset(s->sp, 40)) + 8), 8);
    s->x[10] = ((uint64_t)(value5a));
    s->x[12] = ((uint64_t)(value5b));
    s->x[13] = ((uint64_t)(((uint32_t)(((uint64_t)(0x3))))));
    __auto_type value7 = r_load(s, addOffset(s->sp, 32), 8);
    s->x[14] = ((uint64_t)(value7));
    s->x[19] = ((uint64_t)(((uint32_t)(((uint64_t)(0x561a))))));
    s->x[19] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[19])))), 0xfb27, 16, 16, 32)))));
    s->x[28] = ((uint64_t)(((uint32_t)(((uint64_t)(0x9bf))))));
    s->x[28] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[28])))), 0xc381, 16, 16, 32)))));
    s->x[23] = ((uint64_t)(((uint32_t)(((uint64_t)(0xb267))))));
    s->x[23] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[23])))), 0x69fc, 16, 16, 32)))));
    s->x[27] = ((uint64_t)(((uint32_t)(((uint64_t)(0xedc4))))));
    s->x[27] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[27])))), 0x515a, 16, 16, 32)))));
    s->x[22] = ((uint64_t)(((uint32_t)(((uint64_t)(0x4197))))));
    s->x[22] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[22])))), 0x284e, 16, 16, 32)))));
    s->x[20] = ((uint64_t)(((uint32_t)(((uint64_t)(0x1e34))))));
    s->x[20] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[20])))), 0x10e8, 16, 16, 32)))));
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0x2061))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0xb522, 16, 16, 32)))));
    s->x[3] = ((uint64_t)(((s->sp + ((uint64_t)(0x134))))));
    s->x[4] = ((uint64_t)(((uint32_t)(((uint64_t)(0xac))))));
    s->x[17] = ((uint64_t)(((uint64_t)(0xa13d))));
    next = s->x[15];
    return next;
}

uint64_t r_bb_1003aed78(RState *s) {
    uint64_t next = 0;
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0x1e56))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0x1ecb, 16, 16, 32)))));
    r_storeValue(s, addOffset(s->x[0], 4), ((uint64_t)(((uint32_t)(s->x[8])))), 4);
    s->sp = ((uint64_t)(((s->sp + ((uint64_t)(0x10))))));
    next = s->x[30];
    return next;
}

uint64_t r_bb_1003b1b78(RState *s) {
    uint64_t next = 0;
    __auto_type value0 = r_load(s, addOffset(s->sp, 60), 4);
    s->x[8] = ((uint64_t)(((uint32_t)(value0))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x227e))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0x33ad, 16, 16, 32)))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[8])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[9])))))));
    s->x[8] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "lo"))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0xbb5f))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) * ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    __auto_type value7 = r_load(s, addOffset(s->sp, 172), 4);
    s->x[12] = ((uint64_t)(((uint32_t)(value7))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x1c59))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0x8758, 16, 16, 32)))));
    s->x[14] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) + ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x78b7))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[14])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    __auto_type value14a = r_load(s, addOffset(s->sp, 264), 8);
    __auto_type value14b = r_load(s, ((addOffset(s->sp, 264)) + 8), 8);
    s->x[10] = ((uint64_t)(value14a));
    s->x[30] = ((uint64_t)(value14b));
    __auto_type value15 = r_load(s, ((s->x[30] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[8]))))))), 3, 64))), 8);
    s->x[8] = ((uint64_t)(value15));
    __auto_type value16 = r_load(s, s->x[23], 4);
    s->x[9] = ((uint64_t)(((uint32_t)(value16))));
    __auto_type value17 = r_load(s, s->x[10], 4);
    s->x[10] = ((uint64_t)(((uint32_t)(value17))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) - ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[16] = ((uint64_t)(((uint32_t)(((uint64_t)(0xa6))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[16]))))))))));
    s->x[0] = ((uint64_t)(((uint32_t)(((uint64_t)(0xd4cf))))));
    s->x[0] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[0])))), 0xa5c, 16, 16, 32)))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) * ((uint64_t)(((uint32_t)(s->x[0]))))))))));
    __auto_type value24 = r_load(s, addOffset(s->sp, 120), 8);
    s->x[10] = ((uint64_t)(value24));
    s->x[10] = ((uint64_t)(((s->x[10] + ((uint64_t)(((uint8_t)(((uint64_t)(((uint32_t)(s->x[9]))))))))))));
    __auto_type value26 = r_load(s, s->x[10], 1);
    s->x[10] = ((uint64_t)(((uint32_t)(value26))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0x35))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    __auto_type value29 = r_load(s, addOffset(s->sp, 112), 8);
    s->x[11] = ((uint64_t)(value29));
    __auto_type value30 = r_load(s, ((s->x[11] + ((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[10])))))))))), 1);
    s->x[10] = ((uint64_t)(((uint32_t)(value30))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) & ((uint64_t)(0xff))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) + ((uint64_t)(0x6fb))))))));
    return 0x1003b1c00;
}

uint64_t r_bb_1003b1c00(RState *s) {
    uint64_t next = 0;
    s->x[10] = ((uint64_t)(0x10105b000));
    s->x[10] = ((uint64_t)(((s->x[10] + ((uint64_t)(0x6f0))))));
    __auto_type value2 = r_load(s, ((s->x[10] + shiftLeft(((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[9])))))))), 3, 64))), 8);
    s->x[9] = ((uint64_t)(value2));
    s->x[10] = ((uint64_t)(((uint64_t)(0xffffffffffff66ad))));
    s->x[10] = ((uint64_t)(insertBits(s->x[10], 0x9b0a, 16, 16, 64)));
    s->x[20] = ((uint64_t)(((s->x[9] + s->x[10]))));
    s->x[28] = ((uint64_t)(((uint32_t)(((uint64_t)(0xc))))));
    s->x[7] = ((uint64_t)(((uint32_t)(((uint64_t)(0x7bc5))))));
    s->x[7] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[7])))), 0xce75, 16, 16, 32)))));
    s->x[17] = ((uint64_t)(((uint64_t)(0x3f81))));
    next = s->x[8];
    return next;
}

uint64_t r_bb_1003b24b8(RState *s) {
    uint64_t next = 0;
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0x6600))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0x710b, 16, 16, 32)))));
    __auto_type value2 = r_load(s, addOffset(s->sp, 3544), 4);
    s->x[10] = ((uint64_t)(((uint32_t)(value2))));
    s->x[26] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) + ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    __auto_type value4 = r_load(s, addOffset(s->sp, 25752), 8);
    s->x[20] = ((uint64_t)(value4));
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0x7b4a))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0x710b, 16, 16, 32)))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) + ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    __auto_type value8 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[9] = ((uint64_t)(value8));
    __auto_type value9 = r_load(s, ((s->x[9] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[8]))))))), 3, 64))), 8);
    s->x[9] = ((uint64_t)(value9));
    s->x[8] = ((uint64_t)(((uint64_t)(0xb530))));
    s->x[8] = ((uint64_t)(insertBits(s->x[8], 0x1f4, 16, 16, 64)));
    s->x[8] = ((uint64_t)(insertBits(s->x[8], 0xa39f, 32, 16, 64)));
    s->x[8] = ((uint64_t)(insertBits(s->x[8], 0x353e, 48, 16, 64)));
    s->x[19] = ((uint64_t)(s->x[10]));
    s->x[17] = ((uint64_t)(((uint64_t)(0xee7d))));
    next = s->x[9];
    return next;
}

uint64_t r_bb_1003b4db4(RState *s) {
    uint64_t next = 0;
    s->x[9] = ((uint64_t)(((uint64_t)(0x0))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0x5303))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) ^ ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) + shiftLeft(((uint64_t)(((uint32_t)(s->x[10])))), 4, 32)))))));
    s->x[24] = ((uint64_t)(((uint32_t)(shiftLeft(((uint64_t)(((uint32_t)(s->x[10])))), ((int64_t)(((uint64_t)(0x1)))), 32)))));
    __auto_type value5 = r_load(s, addOffset(s->sp, 256), 8);
    s->x[14] = ((uint64_t)(value5));
    __auto_type value6 = r_load(s, s->x[14], 4);
    s->x[10] = ((uint64_t)(((uint32_t)(value6))));
    s->x[11] = ((uint64_t)(0x101075000));
    __auto_type value8 = r_load(s, addOffset(s->x[11], 2880), 4);
    s->x[11] = ((uint64_t)(((uint32_t)(value8))));
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0xa6))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) + ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0xd4cf))))));
    s->x[11] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[11])))), 0xa5c, 16, 16, 32)))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) * ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    __auto_type value15 = r_load(s, addOffset(s->sp, 200), 8);
    s->x[11] = ((uint64_t)(value15));
    s->x[11] = ((uint64_t)(((s->x[11] + ((uint64_t)(((uint8_t)(((uint64_t)(((uint32_t)(s->x[10]))))))))))));
    __auto_type value17 = r_load(s, s->x[11], 1);
    s->x[11] = ((uint64_t)(((uint32_t)(value17))));
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0x84))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) ^ ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    __auto_type value20 = r_load(s, addOffset(s->sp, 192), 8);
    s->x[12] = ((uint64_t)(value20));
    __auto_type value21 = r_load(s, ((s->x[12] + ((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[11])))))))))), 1);
    s->x[11] = ((uint64_t)(((uint32_t)(value21))));
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0xffffaf38))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) & ((uint64_t)(0xff))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) + ((uint64_t)(0xdd5))))))));
    s->x[19] = ((uint64_t)(0x10105b000));
    s->x[19] = ((uint64_t)(((s->x[19] + ((uint64_t)(0x6f0))))));
    __auto_type value28 = r_load(s, ((s->x[19] + shiftLeft(((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[10])))))))), 3, 64))), 8);
    s->x[10] = ((uint64_t)(value28));
    s->x[11] = ((uint64_t)(((uint64_t)(0xffffffffffff3451))));
    s->x[11] = ((uint64_t)(insertBits(s->x[11], 0xac69, 16, 16, 64)));
    s->x[10] = ((uint64_t)(((s->x[10] + s->x[11]))));
    __auto_type value32 = r_load(s, s->x[10], 1);
    s->x[10] = ((uint64_t)(((uint32_t)(value32))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[10])))))), ((uint32_t)(((uint64_t)(0x1)))));
    s->x[11] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "eq"))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[24])))) + ((uint64_t)(0x592))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) + ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) ^ ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) * ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) ^ ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    __auto_type value40 = r_load(s, ((s->x[21] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[8]))))))), 3, 64))), 8);
    s->x[8] = ((uint64_t)(value40));
    s->x[17] = ((uint64_t)(((uint64_t)(0xaf4c))));
    next = s->x[8];
    return next;
}

uint64_t r_bb_1003b4fec(RState *s) {
    uint64_t next = 0;
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0x889d))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0x3fa6, 16, 16, 32)))));
    s->x[16] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) + ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[10] = ((uint64_t)(((s->x[21] + shiftLeft(s->x[2], 2, 64)))));
    s->x[8] = ((uint64_t)(((uint64_t)(0xfffffffffffffecc))));
    return 0x1003b5000;
}

uint64_t r_bb_1003b5000(RState *s) {
    uint64_t next = 0;
    s->x[8] = ((uint64_t)(insertBits(s->x[8], 0x164, 16, 16, 64)));
    s->x[15] = ((uint64_t)(((s->x[10] + s->x[8]))));
    __auto_type value2 = r_load(s, s->x[15], 4);
    s->x[15] = ((uint64_t)(((uint32_t)(value2))));
    s->x[17] = ((uint64_t)(((s->x[16] ^ ((uint64_t)(0x3ffffffffffffff0))))));
    s->x[17] = ((uint64_t)(((s->x[17] + s->x[2]))));
    s->x[17] = ((uint64_t)(((s->x[21] + shiftLeft(s->x[17], 2, 64)))));
    __auto_type value6 = r_load(s, s->x[17], 4);
    s->x[17] = ((uint64_t)(((uint32_t)(value6))));
    s->x[8] = ((uint64_t)(((uint64_t)(0xfffffffffffffea0))));
    s->x[8] = ((uint64_t)(insertBits(s->x[8], 0x164, 16, 16, 64)));
    s->x[1] = ((uint64_t)(((s->x[10] + s->x[8]))));
    __auto_type value10 = r_load(s, s->x[1], 4);
    s->x[1] = ((uint64_t)(((uint32_t)(value10))));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) ^ ((uint64_t)(((uint32_t)(s->x[1]))))))))));
    s->x[8] = ((uint64_t)(((uint64_t)(0xfffffffffffffe98))));
    s->x[8] = ((uint64_t)(insertBits(s->x[8], 0x164, 16, 16, 64)));
    s->x[1] = ((uint64_t)(((s->x[10] + s->x[8]))));
    __auto_type value15 = r_load(s, s->x[1], 4);
    s->x[1] = ((uint64_t)(((uint32_t)(value15))));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) ^ ((uint64_t)(((uint32_t)(s->x[1]))))))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) ^ ((uint64_t)(((uint32_t)(s->x[15]))))))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[7])))) ^ rotateRight(((uint64_t)(((uint32_t)(s->x[15])))), 31, 32)))))));
    s->x[10] = ((uint64_t)(((s->x[10] + s->x[4]))));
    r_storeValue(s, s->x[10], ((uint64_t)(((uint32_t)(s->x[15])))), 4);
    s->x[2] = ((uint64_t)(((s->x[2] + ((uint64_t)(0x1))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0xc09a))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0x3fa6, 16, 16, 32)))));
    r_compare64(s, ((uint64_t)(s->x[2])), ((uint64_t)(s->x[8])));
    s->x[10] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "eq"))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0xbcb2))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) * ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    __auto_type value29 = r_load(s, ((s->x[30] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[10]))))))), 3, 64))), 8);
    s->x[10] = ((uint64_t)(value29));
    s->x[1] = ((uint64_t)(((uint32_t)(((uint64_t)(0xc04a))))));
    s->x[1] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[1])))), 0x3fa6, 16, 16, 32)))));
    s->x[17] = ((uint64_t)(((uint64_t)(0xceaf))));
    next = s->x[10];
    return next;
}

uint64_t r_bb_1003b9fcc(RState *s) {
    uint64_t next = 0;
    __auto_type value0 = r_load(s, addOffset(s->x[26], 4), 1);
    s->x[17] = ((uint64_t)(((uint32_t)(value0))));
    s->x[0] = ((uint64_t)(((uint32_t)(((uint64_t)(0x533f))))));
    s->x[0] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[0])))), 0x6fa5, 16, 16, 32)))));
    s->x[3] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) ^ ((uint64_t)(((uint32_t)(s->x[0]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((((uint64_t)(((uint32_t)(s->x[17]))))) & bitMask(6, 32))) << 1)))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) + ((uint64_t)(((uint32_t)(s->x[3]))))))))));
    __auto_type value6 = r_load(s, addOffset(s->x[26], 5), 1);
    s->x[3] = ((uint64_t)(((uint32_t)(value6))));
    s->x[0] = ((uint64_t)(((uint32_t)(((uint64_t)(0x7cf7))))));
    s->x[0] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[0])))), 0x72f9, 16, 16, 32)))));
    s->x[19] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[3])))) ^ ((uint64_t)(((uint32_t)(s->x[0]))))))))));
    s->x[3] = ((uint64_t)(((uint32_t)(shiftLeft(((uint64_t)(((uint32_t)(s->x[3])))), ((int64_t)(((uint64_t)(0x1)))), 32)))));
    s->x[3] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[3])))) & ((uint64_t)(0xffffffef))))))));
    s->x[0] = ((uint64_t)(((uint32_t)(((uint64_t)(0xbf7c))))));
    return 0x1003ba000;
}

uint64_t r_bb_1003ba000(RState *s) {
    uint64_t next = 0;
    s->x[0] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[0])))), 0xaf67, 16, 16, 32)))));
    s->x[19] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[19])))) + ((uint64_t)(((uint32_t)(s->x[0]))))))))));
    s->x[3] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[19])))) + ((uint64_t)(((uint32_t)(s->x[3]))))))))));
    s->x[0] = ((uint64_t)(((uint32_t)(((uint64_t)(0xffff7b63))))));
    s->x[19] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[27])))) + ((uint64_t)(((uint32_t)(s->x[0]))))))))));
    s->x[19] = ((uint64_t)(((uint32_t)((((((uint64_t)(((uint32_t)(s->x[17])))) * ((uint64_t)(((uint32_t)(s->x[19]))))) + ((uint64_t)(((uint32_t)(s->x[3]))))))))));
    __auto_type value6 = r_load(s, addOffset(s->x[26], 6), 1);
    s->x[24] = ((uint64_t)(((uint32_t)(value6))));
    s->x[0] = ((uint64_t)(((uint32_t)(((uint64_t)(0xfff3))))));
    s->x[0] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[0])))), 0xdefb, 16, 16, 32)))));
    s->x[23] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[24])))) ^ ((uint64_t)(((uint32_t)(s->x[0]))))))))));
    s->x[24] = ((uint64_t)(((uint32_t)(shiftLeft(((uint64_t)(((uint32_t)(s->x[24])))), ((int64_t)(((uint64_t)(0x1)))), 32)))));
    s->x[24] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[24])))) & ((uint64_t)(0xffffffe7))))))));
    s->x[23] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[24])))) + ((uint64_t)(((uint32_t)(s->x[23]))))))))));
    s->x[24] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[23])))) - ((uint64_t)(((uint32_t)(s->x[19]))))))))));
    s->x[19] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[24])))) + shiftLeft(((uint64_t)(((uint32_t)(s->x[19])))), 4, 32)))))));
    __auto_type value15 = r_load(s, addOffset(s->x[26], 7), 1);
    s->x[24] = ((uint64_t)(((uint32_t)(value15))));
    s->x[0] = ((uint64_t)(((uint32_t)(((uint64_t)(0xfefe))))));
    s->x[0] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[0])))), 0xedf6, 16, 16, 32)))));
    s->x[20] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[24])))) ^ ((uint64_t)(((uint32_t)(s->x[0]))))))))));
    s->x[24] = ((uint64_t)(((uint32_t)(shiftLeft(((uint64_t)(((uint32_t)(s->x[24])))), ((int64_t)(((uint64_t)(0x1)))), 32)))));
    s->x[24] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[24])))) & ((uint64_t)(0x1fc))))))));
    s->x[20] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[24])))) + ((uint64_t)(((uint32_t)(s->x[20]))))))))));
    s->x[0] = ((uint64_t)(((uint32_t)(((uint64_t)(0xb))))));
    s->x[19] = ((uint64_t)(((uint32_t)((((((uint64_t)(((uint32_t)(s->x[19])))) * ((uint64_t)(((uint32_t)(s->x[0]))))) + ((uint64_t)(((uint32_t)(s->x[20]))))))))));
    __auto_type value24 = r_load(s, addOffset(s->x[26], 8), 1);
    s->x[24] = ((uint64_t)(((uint32_t)(value24))));
    s->x[0] = ((uint64_t)(((uint32_t)(((uint64_t)(0xaf7f))))));
    s->x[0] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[0])))), 0x4374, 16, 16, 32)))));
    s->x[1] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[24])))) ^ ((uint64_t)(((uint32_t)(s->x[0]))))))))));
    s->x[24] = ((uint64_t)(((uint32_t)(((((((uint64_t)(((uint32_t)(s->x[24]))))) & bitMask(7, 32))) << 1)))));
    s->x[1] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[24])))) + ((uint64_t)(((uint32_t)(s->x[1]))))))))));
    s->x[0] = ((uint64_t)(((uint32_t)(((uint64_t)(0x13))))));
    s->x[19] = ((uint64_t)(((uint32_t)((((((uint64_t)(((uint32_t)(s->x[19])))) * ((uint64_t)(((uint32_t)(s->x[0]))))) + ((uint64_t)(((uint32_t)(s->x[1]))))))))));
    s->x[19] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[19])))) + shiftLeft(((uint64_t)(((uint32_t)(s->x[19])))), 3, 32)))))));
    __auto_type value33 = r_load(s, addOffset(s->x[26], 9), 1);
    s->x[24] = ((uint64_t)(((uint32_t)(value33))));
    s->x[0] = ((uint64_t)(((uint32_t)(((uint64_t)(0x82ff))))));
    s->x[0] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[0])))), 0xcd37, 16, 16, 32)))));
    s->x[0] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[24])))) ^ ((uint64_t)(((uint32_t)(s->x[0]))))))))));
    s->x[0] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[0])))) + shiftLeft(((uint64_t)(((uint32_t)(s->x[24])))), 1, 32)))))));
    s->x[24] = ((uint64_t)(((uint32_t)(((uint64_t)(0x8bbb))))));
    s->x[24] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[24])))), 0xf977, 16, 16, 32)))));
    s->x[24] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[0])))) + ((uint64_t)(((uint32_t)(s->x[24]))))))))));
    s->x[19] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[24])))) + ((uint64_t)(((uint32_t)(s->x[19]))))))))));
    s->x[24] = ((uint64_t)(((uint32_t)(((uint64_t)(0xac89))))));
    s->x[24] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[24])))), 0x5f64, 16, 16, 32)))));
    s->x[2] = ((uint64_t)(((uint32_t)(((uint64_t)(0xb116))))));
    s->x[2] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[2])))), 0x6241, 16, 16, 32)))));
    s->x[17] = ((uint64_t)(((uint32_t)((((((uint64_t)(((uint32_t)(s->x[17])))) * ((uint64_t)(((uint32_t)(s->x[24]))))) + ((uint64_t)(((uint32_t)(s->x[2]))))))))));
    s->x[2] = ((uint64_t)(((uint32_t)(((uint64_t)(0xedc2))))));
    s->x[2] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[2])))), 0x5f67, 16, 16, 32)))));
    s->x[24] = ((uint64_t)(((uint32_t)(((uint64_t)(0x4ba7))))));
    s->x[24] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[24])))), 0x95a, 16, 16, 32)))));
    s->x[3] = ((uint64_t)(((uint32_t)((((((uint64_t)(((uint32_t)(s->x[3])))) * ((uint64_t)(((uint32_t)(s->x[2]))))) + ((uint64_t)(((uint32_t)(s->x[24]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) ^ ((uint64_t)(((uint32_t)(s->x[3]))))))))));
    s->x[2] = ((uint64_t)(((uint32_t)(((uint64_t)(0x2efb))))));
    s->x[2] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[2])))), 0x5f6b, 16, 16, 32)))));
    s->x[3] = ((uint64_t)(((uint32_t)(((uint64_t)(0xf48c))))));
    s->x[3] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[3])))), 0xaa2, 16, 16, 32)))));
    s->x[3] = ((uint64_t)(((uint32_t)((((((uint64_t)(((uint32_t)(s->x[23])))) * ((uint64_t)(((uint32_t)(s->x[2]))))) + ((uint64_t)(((uint32_t)(s->x[3]))))))))));
    s->x[2] = ((uint64_t)(((uint32_t)(((uint64_t)(0x7034))))));
    s->x[2] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[2])))), 0x5f6e, 16, 16, 32)))));
    s->x[23] = ((uint64_t)(((uint32_t)(((uint64_t)(0xa635))))));
    s->x[23] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[23])))), 0xe266, 16, 16, 32)))));
    s->x[20] = ((uint64_t)(((uint32_t)((((((uint64_t)(((uint32_t)(s->x[20])))) * ((uint64_t)(((uint32_t)(s->x[2]))))) + ((uint64_t)(((uint32_t)(s->x[23]))))))))));
    s->x[3] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[3])))) ^ ((uint64_t)(((uint32_t)(s->x[20]))))))))));
    s->x[2] = ((uint64_t)(((uint32_t)(((uint64_t)(0xb16d))))));
    s->x[2] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[2])))), 0x5f71, 16, 16, 32)))));
    s->x[20] = ((uint64_t)(((uint32_t)(((uint64_t)(0x9ba))))));
    s->x[20] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[20])))), 0x1d31, 16, 16, 32)))));
    s->x[1] = ((uint64_t)(((uint32_t)((((((uint64_t)(((uint32_t)(s->x[1])))) * ((uint64_t)(((uint32_t)(s->x[2]))))) + ((uint64_t)(((uint32_t)(s->x[20]))))))))));
    s->x[2] = ((uint64_t)(((uint32_t)(((uint64_t)(0xf2a6))))));
    s->x[2] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[2])))), 0x5f74, 16, 16, 32)))));
    s->x[20] = ((uint64_t)(((uint32_t)(((uint64_t)(0x7c08))))));
    s->x[20] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[20])))), 0xb7d5, 16, 16, 32)))));
    s->x[0] = ((uint64_t)(((uint32_t)((((((uint64_t)(((uint32_t)(s->x[0])))) * ((uint64_t)(((uint32_t)(s->x[2]))))) + ((uint64_t)(((uint32_t)(s->x[20]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) ^ ((uint64_t)(((uint32_t)(s->x[3]))))))))));
    s->x[2] = ((uint64_t)(((uint32_t)(((uint64_t)(0x5971))))));
    s->x[2] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[2])))), 0xa22a, 16, 16, 32)))));
    s->x[3] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[0])))) ^ ((uint64_t)(((uint32_t)(s->x[2]))))))))));
    s->x[2] = ((uint64_t)(((uint32_t)(((uint64_t)(0x4f1c))))));
    s->x[2] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[2])))), 0x793a, 16, 16, 32)))));
    s->x[3] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[3])))) + ((uint64_t)(((uint32_t)(s->x[2]))))))))));
    s->x[1] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[1])))) ^ ((uint64_t)(((uint32_t)(s->x[0]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) ^ ((uint64_t)(((uint32_t)(s->x[1]))))))))));
    s->x[1] = ((uint64_t)(((uint32_t)(((uint64_t)(0x9a73))))));
    s->x[1] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[1])))), 0x3b51, 16, 16, 32)))));
    s->x[1] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[0])))) ^ ((uint64_t)(((uint32_t)(s->x[1]))))))))));
    s->x[2] = ((uint64_t)(((uint32_t)(((uint64_t)(0x8c1a))))));
    s->x[2] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[2])))), 0xe041, 16, 16, 32)))));
    s->x[1] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[1])))) + ((uint64_t)(((uint32_t)(s->x[2]))))))))));
    s->x[1] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[1])))) ^ ((uint64_t)(((uint32_t)(s->x[3]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) ^ ((uint64_t)(((uint32_t)(s->x[1]))))))))));
    s->x[1] = ((uint64_t)(((uint32_t)(((uint64_t)(0xd968))))));
    s->x[1] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[1])))), 0x466a, 16, 16, 32)))));
    s->x[1] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[0])))) ^ ((uint64_t)(((uint32_t)(s->x[1]))))))))));
    s->x[2] = ((uint64_t)(((uint32_t)(((uint64_t)(0xcf03))))));
    s->x[2] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[2])))), 0x9d7a, 16, 16, 32)))));
    s->x[1] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[1])))) + ((uint64_t)(((uint32_t)(s->x[2]))))))))));
    s->x[2] = ((uint64_t)(((uint32_t)(((uint64_t)(0xf3ff))))));
    s->x[2] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[2])))), 0xfbfe, 16, 16, 32)))));
    s->x[0] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[0])))) ^ ((uint64_t)(((uint32_t)(s->x[2]))))))))));
    s->x[2] = ((uint64_t)(((uint32_t)(((uint64_t)(0xe596))))));
    s->x[2] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[2])))), 0x20ee, 16, 16, 32)))));
    s->x[0] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[0])))) + ((uint64_t)(((uint32_t)(s->x[2]))))))))));
    s->x[0] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[1])))) ^ ((uint64_t)(((uint32_t)(s->x[0]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) ^ ((uint64_t)(((uint32_t)(s->x[0]))))))))));
    s->x[0] = ((uint64_t)(((uint32_t)(((uint64_t)(0x276b))))));
    s->x[0] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[0])))), 0x76f2, 16, 16, 32)))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) ^ ((uint64_t)(((uint32_t)(s->x[0]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) ^ ((uint64_t)(((uint32_t)(s->x[19]))))))))));
    s->x[0] = ((uint64_t)(((uint64_t)(0x7026))));
    s->x[0] = ((uint64_t)(insertBits(s->x[0], 0x71c0, 16, 16, 64)));
    s->x[0] = ((uint64_t)(insertBits(s->x[0], 0x1325, 32, 16, 64)));
    s->x[0] = ((uint64_t)(insertBits(s->x[0], 0x645f, 48, 16, 64)));
    s->x[0] = ((uint64_t)(((s->x[17] ^ s->x[0]))));
    s->x[1] = ((uint64_t)(((uint64_t)(0x8fda))));
    s->x[1] = ((uint64_t)(insertBits(s->x[1], 0x8e3f, 16, 16, 64)));
    s->x[1] = ((uint64_t)(insertBits(s->x[1], 0xecda, 32, 16, 64)));
    s->x[1] = ((uint64_t)(insertBits(s->x[1], 0x1ba0, 48, 16, 64)));
    s->x[0] = ((uint64_t)(((s->x[0] + s->x[1]))));
    s->x[1] = ((uint64_t)(((uint64_t)(0x6d59))));
    s->x[1] = ((uint64_t)(insertBits(s->x[1], 0xe4c2, 16, 16, 64)));
    s->x[1] = ((uint64_t)(insertBits(s->x[1], 0xa716, 32, 16, 64)));
    s->x[1] = ((uint64_t)(insertBits(s->x[1], 0x14e2, 48, 16, 64)));
    s->x[1] = ((uint64_t)(((s->x[17] ^ s->x[1]))));
    s->x[2] = ((uint64_t)(((uint64_t)(0x92a7))));
    s->x[2] = ((uint64_t)(insertBits(s->x[2], 0x1b3d, 16, 16, 64)));
    s->x[2] = ((uint64_t)(insertBits(s->x[2], 0x58e9, 32, 16, 64)));
    s->x[2] = ((uint64_t)(insertBits(s->x[2], 0x6b1d, 48, 16, 64)));
    s->x[1] = ((uint64_t)(((s->x[1] + s->x[2]))));
    s->x[0] = ((uint64_t)(((s->x[0] ^ s->x[1]))));
    s->x[1] = ((uint64_t)(((uint64_t)(0xd381))));
    s->x[1] = ((uint64_t)(insertBits(s->x[1], 0xc71f, 16, 16, 64)));
    s->x[1] = ((uint64_t)(insertBits(s->x[1], 0xb433, 32, 16, 64)));
    s->x[1] = ((uint64_t)(insertBits(s->x[1], 0x70bd, 48, 16, 64)));
    s->x[17] = ((uint64_t)(((s->x[17] ^ s->x[1]))));
    s->x[1] = ((uint64_t)(((uint64_t)(0x2c7f))));
    s->x[1] = ((uint64_t)(insertBits(s->x[1], 0x38e0, 16, 16, 64)));
    s->x[1] = ((uint64_t)(insertBits(s->x[1], 0x4bcc, 32, 16, 64)));
    s->x[1] = ((uint64_t)(insertBits(s->x[1], 0x8f42, 48, 16, 64)));
    s->x[17] = ((uint64_t)(((s->x[17] + s->x[1]))));
    s->x[17] = ((uint64_t)(((s->x[0] ^ s->x[17]))));
    s->x[0] = ((uint64_t)(((uint64_t)(0x5555555555555555))));
    s->x[0] = ((uint64_t)(insertBits(s->x[0], 0x5556, 0, 16, 64)));
    s->x[0] = ((uint64_t)(insertBits(s->x[0], 0x1555, 48, 16, 64)));
    s->x[1] = ((uint64_t)(((uint64_t)(0x973))));
    s->x[1] = ((uint64_t)(insertBits(s->x[1], 0xd389, 16, 16, 64)));
    s->x[1] = ((uint64_t)(insertBits(s->x[1], 0x4c20, 32, 16, 64)));
    s->x[1] = ((uint64_t)(insertBits(s->x[1], 0x613d, 48, 16, 64)));
    s->x[17] = ((uint64_t)((((s->x[17] * s->x[0]) + s->x[1]))));
    s->x[0] = ((uint64_t)(((uint64_t)(0xbe0c))));
    s->x[0] = ((uint64_t)(insertBits(s->x[0], 0x464d, 16, 16, 64)));
    s->x[0] = ((uint64_t)(insertBits(s->x[0], 0x1870, 32, 16, 64)));
    s->x[0] = ((uint64_t)(insertBits(s->x[0], 0x6423, 48, 16, 64)));
    s->x[0] = ((uint64_t)(((s->x[17] ^ s->x[0]))));
    s->x[1] = ((uint64_t)(((uint64_t)(0xebb0))));
    s->x[1] = ((uint64_t)(insertBits(s->x[1], 0xe560, 16, 16, 64)));
    s->x[1] = ((uint64_t)(insertBits(s->x[1], 0x56b2, 32, 16, 64)));
    s->x[1] = ((uint64_t)(insertBits(s->x[1], 0x925f, 48, 16, 64)));
    s->x[1] = ((uint64_t)(((s->x[17] ^ s->x[1]))));
    s->x[2] = ((uint64_t)(((uint64_t)(0x3e51))));
    s->x[2] = ((uint64_t)(insertBits(s->x[2], 0x5dea, 16, 16, 64)));
    s->x[2] = ((uint64_t)(insertBits(s->x[2], 0x5f86, 32, 16, 64)));
    s->x[2] = ((uint64_t)(insertBits(s->x[2], 0xe647, 48, 16, 64)));
    s->x[1] = ((uint64_t)(((s->x[1] + s->x[2]))));
    s->x[2] = ((uint64_t)(((uint64_t)(0xa440))));
    s->x[2] = ((uint64_t)(insertBits(s->x[2], 0x5927, 16, 16, 64)));
    s->x[2] = ((uint64_t)(insertBits(s->x[2], 0x4f77, 32, 16, 64)));
    s->x[2] = ((uint64_t)(insertBits(s->x[2], 0x6254, 48, 16, 64)));
    s->x[3] = ((uint64_t)(((s->x[17] ^ s->x[2]))));
    s->x[2] = ((uint64_t)(((uint64_t)(0x6bed))));
    s->x[2] = ((uint64_t)(insertBits(s->x[2], 0xfec7, 16, 16, 64)));
    s->x[2] = ((uint64_t)(insertBits(s->x[2], 0x1144, 32, 16, 64)));
    s->x[2] = ((uint64_t)(insertBits(s->x[2], 0x103b, 48, 16, 64)));
    s->x[0] = ((uint64_t)(((s->x[0] + s->x[2]))));
    s->x[0] = ((uint64_t)(((s->x[17] ^ s->x[0]))));
    s->x[2] = ((uint64_t)(((uint64_t)(0xdbe3))));
    s->x[2] = ((uint64_t)(insertBits(s->x[2], 0xbd7f, 16, 16, 64)));
    s->x[2] = ((uint64_t)(insertBits(s->x[2], 0xf77e, 32, 16, 64)));
    s->x[2] = ((uint64_t)(insertBits(s->x[2], 0x1fcf, 48, 16, 64)));
    s->x[17] = ((uint64_t)(((s->x[17] ^ s->x[2]))));
    s->x[2] = ((uint64_t)(((uint64_t)(0x71a1))));
    s->x[2] = ((uint64_t)(insertBits(s->x[2], 0xe1ad, 16, 16, 64)));
    s->x[2] = ((uint64_t)(insertBits(s->x[2], 0x4643, 32, 16, 64)));
    s->x[2] = ((uint64_t)(insertBits(s->x[2], 0x164c, 48, 16, 64)));
    s->x[3] = ((uint64_t)(((s->x[3] + s->x[2]))));
    s->x[1] = ((uint64_t)(((s->x[1] ^ s->x[3]))));
    s->x[0] = ((uint64_t)(((s->x[0] ^ s->x[1]))));
    s->x[1] = ((uint64_t)(((uint64_t)(0xe04))));
    s->x[1] = ((uint64_t)(insertBits(s->x[1], 0x5f5, 16, 16, 64)));
    s->x[1] = ((uint64_t)(insertBits(s->x[1], 0xfe4a, 32, 16, 64)));
    s->x[1] = ((uint64_t)(insertBits(s->x[1], 0x6bd7, 48, 16, 64)));
    s->x[17] = ((uint64_t)(((s->x[17] + s->x[1]))));
    s->x[17] = ((uint64_t)(((s->x[0] ^ s->x[17]))));
    s->x[0] = ((uint64_t)(((uint64_t)(0xa05a))));
    s->x[0] = ((uint64_t)(insertBits(s->x[0], 0x1959, 16, 16, 64)));
    s->x[0] = ((uint64_t)(insertBits(s->x[0], 0x68ef, 32, 16, 64)));
    s->x[0] = ((uint64_t)(insertBits(s->x[0], 0xd92a, 48, 16, 64)));
    s->x[0] = ((uint64_t)(((s->x[17] ^ s->x[0]))));
    s->x[1] = ((uint64_t)(((uint64_t)(0xf5bd))));
    s->x[1] = ((uint64_t)(insertBits(s->x[1], 0xd4a5, 16, 16, 64)));
    s->x[1] = ((uint64_t)(insertBits(s->x[1], 0x77a4, 32, 16, 64)));
    s->x[1] = ((uint64_t)(insertBits(s->x[1], 0x2117, 48, 16, 64)));
    s->x[1] = ((uint64_t)(((s->x[17] ^ s->x[1]))));
    s->x[2] = ((uint64_t)(((uint64_t)(0xe2ea))));
    s->x[2] = ((uint64_t)(insertBits(s->x[2], 0xbf52, 16, 16, 64)));
    s->x[2] = ((uint64_t)(insertBits(s->x[2], 0xc15e, 32, 16, 64)));
    s->x[2] = ((uint64_t)(insertBits(s->x[2], 0x886d, 48, 16, 64)));
    s->x[1] = ((uint64_t)(r_addWithCarry(s, s->x[1], s->x[2], false, 64)));
    s->x[3] = ((uint64_t)(((uint32_t)((((((uint64_t)(0)) + ((uint64_t)(((uint32_t)(s->x[5]))))) + boolValue(s->c)))))));
    s->x[2] = ((uint64_t)(((uint64_t)(0xb70f))));
    s->x[2] = ((uint64_t)(insertBits(s->x[2], 0x72ae, 16, 16, 64)));
    s->x[2] = ((uint64_t)(insertBits(s->x[2], 0xde15, 32, 16, 64)));
    s->x[2] = ((uint64_t)(insertBits(s->x[2], 0x7050, 48, 16, 64)));
    s->x[0] = ((uint64_t)(r_addWithCarry(s, s->x[0], s->x[2], false, 64)));
    s->x[0] = ((uint64_t)(((s->x[0] ^ s->x[1]))));
    s->x[1] = ((uint64_t)(((uint32_t)((((((uint64_t)(0)) + ((uint64_t)(((uint32_t)(s->x[5]))))) + boolValue(s->c)))))));
    s->x[1] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[1])))) ^ ((uint64_t)(((uint32_t)(s->x[3]))))))))));
    s->x[2] = ((uint64_t)(((uint64_t)(0x7ff8))));
    s->x[2] = ((uint64_t)(insertBits(s->x[2], 0x8a89, 16, 16, 64)));
    s->x[2] = ((uint64_t)(insertBits(s->x[2], 0xe980, 32, 16, 64)));
    s->x[2] = ((uint64_t)(insertBits(s->x[2], 0x73da, 48, 16, 64)));
    s->x[17] = ((uint64_t)(((s->x[17] ^ s->x[2]))));
    s->x[2] = ((uint64_t)(((uint64_t)(0x68ad))));
    s->x[2] = ((uint64_t)(insertBits(s->x[2], 0xe17e, 16, 16, 64)));
    s->x[2] = ((uint64_t)(insertBits(s->x[2], 0x5f7a, 32, 16, 64)));
    s->x[2] = ((uint64_t)(insertBits(s->x[2], 0xdaa0, 48, 16, 64)));
    s->x[17] = ((uint64_t)(r_addWithCarry(s, s->x[17], s->x[2], false, 64)));
    s->x[17] = ((uint64_t)(((s->x[0] ^ s->x[17]))));
    s->x[0] = ((uint64_t)(((uint32_t)((((((uint64_t)(0)) + ((uint64_t)(((uint32_t)(s->x[5]))))) + boolValue(s->c)))))));
    s->x[0] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[1])))) ^ ((uint64_t)(((uint32_t)(s->x[0]))))))))));
    s->x[1] = ((uint64_t)(multiplyHigh64(s->x[17], s->x[25])));
    s->x[0] = ((uint64_t)(((uint32_t)((((((uint64_t)(((uint32_t)(s->x[0])))) * ((uint64_t)(((uint32_t)(s->x[25]))))) + ((uint64_t)(((uint32_t)(s->x[1]))))))))));
    s->x[17] = ((uint64_t)(((s->x[17] + shiftLeft(s->x[17], 1, 64)))));
    s->x[1] = ((uint64_t)(((uint64_t)(0x2070))));
    s->x[1] = ((uint64_t)(insertBits(s->x[1], 0xe9e5, 16, 16, 64)));
    s->x[1] = ((uint64_t)(insertBits(s->x[1], 0xfdb1, 32, 16, 64)));
    s->x[1] = ((uint64_t)(insertBits(s->x[1], 0x60a0, 48, 16, 64)));
    (void)r_addWithCarry(s, s->x[1], shiftLeft(s->x[17], 2, 64), false, 64);
    s->x[17] = ((uint64_t)(((uint32_t)(((uint64_t)(0x4634))))));
    s->x[17] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[17])))), 0x309, 16, 16, 32)))));
    s->x[17] = ((uint64_t)(((uint32_t)((((((uint64_t)(((uint32_t)(s->x[0])))) + ((uint64_t)(((uint32_t)(s->x[17]))))) + boolValue(s->c)))))));
    s->x[0] = ((uint64_t)(((uint32_t)(((uint64_t)(0x52c6))))));
    s->x[0] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[0])))), 0x5a39, 16, 16, 32)))));
    s->x[24] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) + ((uint64_t)(((uint32_t)(s->x[0]))))))))));
    __auto_type value244 = r_load(s, ((s->x[21] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[27]))))))), 3, 64))), 8);
    s->x[0] = ((uint64_t)(value244));
    s->x[17] = ((uint64_t)(((uint64_t)(0xd54c))));
    next = s->x[0];
    return next;
}

uint64_t r_bb_1003bac88(RState *s) {
    uint64_t next = 0;
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0xa047))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0xaffc, 16, 16, 32)))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0xe9eb))))));
    s->x[10] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[10])))), 0xdef7, 16, 16, 32)))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[22])))) + ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[19] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) & ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0xa16a))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0x8ef4, 16, 16, 32)))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[19])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) + ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    r_storeValue(s, s->x[3], ((uint64_t)(((uint32_t)(s->x[8])))), 4);
    s->x[8] = ((uint64_t)(((s->sp + shiftLeft(((uint64_t)(0x11)), 12, 64)))));
    s->x[8] = ((uint64_t)(((s->x[8] + ((uint64_t)(0x148))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x3814))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0x635e, 16, 16, 32)))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) | shiftLeft(((uint64_t)(((uint32_t)(s->x[8])))), 1, 32)))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0xe3f6))))));
    s->x[10] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[10])))), 0x4e50, 16, 16, 32)))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) - ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) + ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x16c3))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0x5b01, 16, 16, 32)))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x180b))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0x7398, 16, 16, 32)))));
    s->x[10] = ((uint64_t)(((s->sp + shiftLeft(((uint64_t)(0x11)), 12, 64)))));
    r_storeValue(s, addOffset(s->x[10], 328), ((uint64_t)(0)), 8);
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[22])))) - (((uint64_t)(((uint32_t)(s->x[8])))) * ((uint64_t)(((uint32_t)(s->x[9])))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x602f))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) + ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    r_storeValue(s, addOffset(s->x[10], 336), ((uint64_t)(((uint32_t)(s->x[8])))), 4);
    __auto_type value31 = r_load(s, addOffset(s->sp, 3560), 8);
    s->x[8] = ((uint64_t)(value31));
    __auto_type value32 = r_load(s, s->x[8], 4);
    s->x[8] = ((uint64_t)(((uint32_t)(value32))));
    __auto_type value33 = r_load(s, addOffset(s->sp, 3552), 8);
    s->x[9] = ((uint64_t)(value33));
    __auto_type value34 = r_load(s, s->x[9], 4);
    s->x[9] = ((uint64_t)(((uint32_t)(value34))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) ^ ((uint64_t)(((uint32_t)(s->x[20]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) * ((uint64_t)(((uint32_t)(s->x[21]))))))))));
    __auto_type value38 = r_load(s, addOffset(s->sp, 2832), 8);
    s->x[9] = ((uint64_t)(value38));
    s->x[9] = ((uint64_t)(((s->x[9] + ((uint64_t)(((uint8_t)(((uint64_t)(((uint32_t)(s->x[8]))))))))))));
    __auto_type value40 = r_load(s, s->x[9], 1);
    s->x[9] = ((uint64_t)(((uint32_t)(value40))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0x9a))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    __auto_type value43 = r_load(s, addOffset(s->sp, 2824), 8);
    s->x[10] = ((uint64_t)(value43));
    __auto_type value44 = r_load(s, ((s->x[10] + ((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[9])))))))))), 1);
    s->x[9] = ((uint64_t)(((uint32_t)(value44))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0xcfbd))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) + ((uint64_t)(((uint8_t)(((uint64_t)(((uint32_t)(s->x[8]))))))))))))));
    __auto_type value48 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[21] = ((uint64_t)(value48));
    __auto_type value49 = r_load(s, ((s->x[21] + shiftLeft(((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[8])))))))), 3, 64))), 8);
    s->x[8] = ((uint64_t)(value49));
    s->x[0] = ((uint64_t)(((s->sp + shiftLeft(((uint64_t)(0x11)), 12, 64)))));
    s->x[0] = ((uint64_t)(((s->x[0] + ((uint64_t)(0x148))))));
    s->x[17] = ((uint64_t)(((uint64_t)(0xb38))));
    s->x[30] = 0x1003bad60;
    next = s->x[8];
    return next;
}
