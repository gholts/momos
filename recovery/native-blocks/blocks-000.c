// Fixed native recovery blocks; generated from the verified 26A428 path.
#include "native-runtime.h"
uint64_t r_bb_100009d80(RState *s) {
    uint64_t next = 0;
    __auto_type value0 = r_load(s, s->x[22], 4);
    s->x[8] = ((uint64_t)(((uint32_t)(value0))));
    __auto_type value1 = r_load(s, s->x[25], 4);
    s->x[9] = ((uint64_t)(((uint32_t)(value1))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) - ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) ^ ((uint64_t)(((uint32_t)(s->x[21]))))))))));
    s->x[9] = ((uint64_t)(0x101062000));
    s->x[9] = ((uint64_t)(((s->x[9] + ((uint64_t)(0xe40))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) * ((uint64_t)(((uint32_t)(s->x[20]))))))))));
    __auto_type value7 = r_load(s, s->x[9], 8);
    s->x[10] = ((uint64_t)(value7));
    s->x[10] = ((uint64_t)(((s->x[10] + ((uint64_t)(((uint8_t)(((uint64_t)(((uint32_t)(s->x[8]))))))))))));
    s->x[11] = ((uint64_t)(((uint64_t)(0xffffffffffff2dad))));
    s->x[11] = ((uint64_t)(insertBits(s->x[11], 0xed6f, 16, 16, 64)));
    s->x[10] = ((uint64_t)(((s->x[10] + s->x[11]))));
    __auto_type value12 = r_load(s, s->x[10], 1);
    s->x[10] = ((uint64_t)(((uint32_t)(value12))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0xa1))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    __auto_type value15 = r_load(s, addOffset(s->x[9], 10536), 8);
    s->x[9] = ((uint64_t)(value15));
    s->x[11] = ((uint64_t)(((uint64_t)(0xfffffffffffff512))));
    s->x[11] = ((uint64_t)(insertBits(s->x[11], 0x997c, 16, 16, 64)));
    s->x[9] = ((uint64_t)(((s->x[9] + s->x[11]))));
    s->x[9] = ((uint64_t)(((s->x[9] + s->x[10]))));
    __auto_type value20 = r_load(s, s->x[9], 1);
    s->x[9] = ((uint64_t)(((uint32_t)(value20))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0xd07f))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) + ((uint64_t)(((uint8_t)(((uint64_t)(((uint32_t)(s->x[8]))))))))))))));
    __auto_type value24 = r_load(s, ((s->x[23] + shiftLeft(((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[8])))))))), 3, 64))), 8);
    s->x[8] = ((uint64_t)(value24));
    s->x[0] = ((uint64_t)(s->x[19]));
    s->x[17] = ((uint64_t)(((uint64_t)(0x4f33))));
    s->x[30] = 0x100009df0;
    next = s->x[8];
    return next;
}

uint64_t r_bb_100009df0(RState *s) {
    uint64_t next = 0;
    __auto_type value0 = r_load(s, ((s->x[23] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[26]))))))), 3, 64))), 8);
    s->x[8] = ((uint64_t)(value0));
    s->x[17] = ((uint64_t)(((uint64_t)(0x3f64))));
    next = s->x[8];
    return next;
}

uint64_t r_bb_10000a9d8(RState *s) {
    uint64_t next = 0;
    __auto_type value0 = r_load(s, addOffset(s->sp, 16), 8);
    s->x[8] = ((uint64_t)(value0));
    r_storeValue(s, addOffset(s->x[8], 16), ((uint64_t)(((uint32_t)(s->x[9])))), 4);
    __auto_type value2 = r_load(s, addOffset(s->x[29], (-96)), 8);
    s->x[8] = ((uint64_t)(value2));
    s->x[9] = ((uint64_t)(0x10106d000));
    __auto_type value4 = r_load(s, addOffset(s->x[9], 1032), 8);
    s->x[9] = ((uint64_t)(value4));
    __auto_type value5 = r_load(s, s->x[9], 8);
    s->x[9] = ((uint64_t)(value5));
    r_compare64(s, ((uint64_t)(s->x[9])), ((uint64_t)(s->x[8])));
    if (r_condition(s, "ne"))
    {
        next = 0x10000aa18;
    }
    else
    {
        next = 0x10000a9f8;
    }
    return next;
}

uint64_t r_bb_10000a9f8(RState *s) {
    uint64_t next = 0;
    __auto_type value0a = r_load(s, addOffset(s->sp, 320), 8);
    __auto_type value0b = r_load(s, ((addOffset(s->sp, 320)) + 8), 8);
    s->x[29] = ((uint64_t)(value0a));
    s->x[30] = ((uint64_t)(value0b));
    __auto_type value1a = r_load(s, addOffset(s->sp, 304), 8);
    __auto_type value1b = r_load(s, ((addOffset(s->sp, 304)) + 8), 8);
    s->x[20] = ((uint64_t)(value1a));
    s->x[19] = ((uint64_t)(value1b));
    __auto_type value2a = r_load(s, addOffset(s->sp, 288), 8);
    __auto_type value2b = r_load(s, ((addOffset(s->sp, 288)) + 8), 8);
    s->x[22] = ((uint64_t)(value2a));
    s->x[21] = ((uint64_t)(value2b));
    __auto_type value3a = r_load(s, addOffset(s->sp, 272), 8);
    __auto_type value3b = r_load(s, ((addOffset(s->sp, 272)) + 8), 8);
    s->x[24] = ((uint64_t)(value3a));
    s->x[23] = ((uint64_t)(value3b));
    __auto_type value4a = r_load(s, addOffset(s->sp, 256), 8);
    __auto_type value4b = r_load(s, ((addOffset(s->sp, 256)) + 8), 8);
    s->x[26] = ((uint64_t)(value4a));
    s->x[25] = ((uint64_t)(value4b));
    __auto_type value5a = r_load(s, addOffset(s->sp, 240), 8);
    __auto_type value5b = r_load(s, ((addOffset(s->sp, 240)) + 8), 8);
    s->x[28] = ((uint64_t)(value5a));
    s->x[27] = ((uint64_t)(value5b));
    s->sp = ((uint64_t)(((s->sp + ((uint64_t)(0x150))))));
    next = s->x[30];
    return next;
}

uint64_t r_bb_10000aa1c(RState *s) {
    uint64_t next = 0;
    s->x[14] = ((uint64_t)(((uint32_t)(((uint64_t)(0xffffbb9e))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((uint64_t)(0xffffb411))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) + ((uint64_t)(((uint32_t)(s->x[17]))))))))));
    s->x[1] = ((uint64_t)(((uint32_t)(((uint64_t)(0xcc60))))));
    s->x[1] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[1])))), 0xbf8e, 16, 16, 32)))));
    s->x[1] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[1]))))))))));
    s->x[2] = ((uint64_t)(((uint32_t)(((uint64_t)(0x4a2f))))));
    s->x[2] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[2])))), 0x4071, 16, 16, 32)))));
    s->x[14] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) + ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[14])))) ^ ((uint64_t)(((uint32_t)(s->x[2]))))))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[1])))) + ((uint64_t)(((uint32_t)(s->x[15]))))))))));
    s->x[1] = ((uint64_t)(((uint32_t)(((uint64_t)(0x52c9))))));
    s->x[1] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[1])))), 0x36c0, 16, 16, 32)))));
    s->x[1] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[1]))))))))));
    s->x[2] = ((uint64_t)(((uint32_t)(((uint64_t)(0xad37))))));
    s->x[2] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[2])))), 0xc93f, 16, 16, 32)))));
    s->x[1] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[1])))) + ((uint64_t)(((uint32_t)(s->x[2]))))))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) ^ ((uint64_t)(((uint32_t)(s->x[1]))))))))));
    s->x[1] = ((uint64_t)(((uint32_t)(((uint64_t)(0x1276))))));
    s->x[1] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[1])))), 0x8816, 16, 16, 32)))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[1]))))))))));
    s->x[1] = ((uint64_t)(((uint32_t)(((uint64_t)(0xed8a))))));
    s->x[1] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[1])))), 0x77e9, 16, 16, 32)))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) + ((uint64_t)(((uint32_t)(s->x[1]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) ^ ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((uint64_t)(0x8cda))))));
    s->x[15] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[15])))), 0x158, 16, 16, 32)))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) + ((uint64_t)(((uint32_t)(s->x[15]))))))))));
    (void)r_addWithCarry(s, ((uint64_t)(((uint32_t)(s->x[10])))), ((uint64_t)(0x5)), false, 32);
    s->x[10] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "lo"))))));
    s->x[15] = ((uint64_t)(((uint32_t)(shiftLeft(((uint64_t)(((uint32_t)(s->x[10])))), ((int64_t)(((uint64_t)(0x6)))), 32)))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) - ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[17]))))))))));
    __auto_type value33 = r_load(s, ((s->x[20] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[10]))))))), 3, 64))), 8);
    s->x[15] = ((uint64_t)(value33));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0x5a9))))));
    s->x[10] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[10])))), 0x3adb, 16, 16, 32)))));
    s->x[17] = ((uint64_t)(((uint64_t)(0x27a4))));
    next = s->x[15];
    return next;
}

uint64_t r_bb_10000ad30(RState *s) {
    uint64_t next = 0;
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0x2f22))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((uint64_t)(0x80b1))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) + ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) | ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    __auto_type value4 = r_load(s, addOffset(s->x[27], 8), 8);
    s->x[15] = ((uint64_t)(value4));
    s->x[13] = ((uint64_t)(((uint32_t)(((uint64_t)(0x824a))))));
    s->x[13] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[13])))), 0xa21, 16, 16, 32)))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    __auto_type value8 = r_load(s, addOffset(s->sp, 148), 4);
    s->x[8] = ((uint64_t)(((uint32_t)(value8))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) + ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((uint64_t)(0x115b))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) + ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    __auto_type value12 = r_load(s, ((s->x[20] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[13]))))))), 3, 64))), 8);
    s->x[14] = ((uint64_t)(value12));
    s->x[17] = ((uint64_t)(((uint64_t)(0x77b4))));
    next = s->x[14];
    return next;
}

uint64_t r_bb_10000f70c(RState *s) {
    uint64_t next = 0;
    s->sp = ((uint64_t)(((s->sp + ((uint64_t)(0x10))))));
    next = s->x[30];
    return next;
}

uint64_t r_bb_10000f85c(RState *s) {
    uint64_t next = 0;
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0xffff47e0))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[28])))) + ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0xffff6e27))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[28])))) + ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    __auto_type value4 = r_load(s, ((s->x[20] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[10]))))))), 3, 64))), 8);
    s->x[10] = ((uint64_t)(value4));
    s->x[14] = ((uint64_t)(((uint32_t)(((uint64_t)(0xf212))))));
    s->x[14] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[14])))), 0xd2ca, 16, 16, 32)))));
    __auto_type value7 = r_load(s, addOffset(s->sp, 160), 8);
    s->x[23] = ((uint64_t)(value7));
    s->x[17] = ((uint64_t)(((uint64_t)(0xf5e6))));
    next = s->x[10];
    return next;
}

uint64_t r_bb_10000f8fc(RState *s) {
    uint64_t next = 0;
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0xbf95))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[30] = ((uint64_t)(((uint32_t)(shiftLeft(((uint64_t)(((uint32_t)(s->x[9])))), ((int64_t)(((uint64_t)(0x1)))), 32)))));
    __auto_type value3 = r_load(s, s->x[2], 8);
    s->x[9] = ((uint64_t)(value3));
    __auto_type value4 = r_load(s, s->x[3], 8);
    s->x[13] = ((uint64_t)(value4));
    s->x[13] = ((uint64_t)(((s->x[13] + s->x[21]))));
    __auto_type value6 = r_load(s, s->x[13], 1);
    s->x[13] = ((uint64_t)(((uint32_t)(value6))));
    s->x[13] = ((uint64_t)(((uint32_t)((~(((uint64_t)(((uint32_t)(s->x[13]))))))))));
    s->x[9] = ((uint64_t)(((s->x[9] + ((uint64_t)(((uint8_t)(((uint64_t)(((uint32_t)(s->x[13]))))))))))));
    __auto_type value9 = r_load(s, s->x[9], 1);
    s->x[9] = ((uint64_t)(((uint32_t)(value9))));
    s->x[13] = ((uint64_t)(((uint32_t)(((uint64_t)(0xffffff90))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) & ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((uint64_t)(0xffffff86))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) ^ ((uint64_t)(((uint32_t)(s->x[15]))))))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((uint64_t)(0x28))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) & shiftLeft(((uint64_t)(((uint32_t)(s->x[9])))), 1, 32)))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) | ((uint64_t)(0x4))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[30])))) + ((uint64_t)(0x2))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[17]))))))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) & ((uint64_t)(((uint32_t)(s->x[17]))))))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) ^ ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) & shiftLeft(((uint64_t)(((uint32_t)(s->x[15])))), 1, 32)))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) ^ ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) & shiftLeft(((uint64_t)(((uint32_t)(s->x[15])))), 1, 32)))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) ^ ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) & shiftLeft(((uint64_t)(((uint32_t)(s->x[15])))), 1, 32)))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) ^ ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ shiftLeft(((uint64_t)(((uint32_t)(s->x[13])))), 1, 32)))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) & ((uint64_t)(0xff))))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((uint64_t)(0x70a8))))));
    s->x[13] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[13])))), 0x764, 16, 16, 32)))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    __auto_type value32 = r_load(s, ((s->x[14] + shiftLeft(((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[11])))))))), 3, 64))), 8);
    s->x[11] = ((uint64_t)(value32));
    s->x[17] = ((uint64_t)(((uint64_t)(0x970e))));
    next = s->x[11];
    return next;
}

uint64_t r_bb_100010044(RState *s) {
    uint64_t next = 0;
    s->x[11] = ((uint64_t)(((s->x[11] - ((uint64_t)(0x1))))));
    __auto_type value1 = r_load(s, s->x[13], 4);
    s->x[17] = ((uint64_t)(((uint32_t)(value1))));
    s->x[3] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) + ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[23] = ((uint64_t)(((s->x[9] + s->x[3]))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[23])))) ^ ((uint64_t)(((uint32_t)(s->x[17]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) & ((uint64_t)(0x7fffffff))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0xbb2f))))));
    s->x[12] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[12])))), 0xbf5a, 16, 16, 32)))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) * ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0xfc0b))))));
    s->x[12] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[12])))), 0x5758, 16, 16, 32)))));
    s->x[3] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) + ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0xbcd))))));
    s->x[12] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[12])))), 0xe803, 16, 16, 32)))));
    s->x[26] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[3])))) ^ ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) ^ shiftRight(((uint64_t)(((uint32_t)(s->x[17])))), 16, 32)))))));
    __auto_type value16 = r_load(s, addOffset(s->sp, 152), 8);
    s->x[12] = ((uint64_t)(value16));
    __auto_type value17 = r_load(s, s->x[12], 4);
    s->x[27] = ((uint64_t)(((uint32_t)(value17))));
    s->x[12] = ((uint64_t)(0x101075000));
    __auto_type value19 = r_load(s, addOffset(s->x[12], 2880), 4);
    s->x[28] = ((uint64_t)(((uint32_t)(value19))));
    s->x[27] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[28])))) - ((uint64_t)(((uint32_t)(s->x[27]))))))))));
    s->x[27] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[27])))) ^ ((uint64_t)(((uint32_t)(s->x[16]))))))))));
    s->x[27] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[27])))) * ((uint64_t)(((uint32_t)(s->x[1]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) * ((uint64_t)(((uint32_t)(s->x[26]))))))))));
    s->x[26] = ((uint64_t)(((s->x[27] & ((uint64_t)(0xff))))));
    __auto_type value25 = r_load(s, addOffset(s->x[29], (-144)), 8);
    s->x[12] = ((uint64_t)(value25));
    s->x[28] = ((uint64_t)(((s->x[12] + s->x[26]))));
    __auto_type value27 = r_load(s, s->x[28], 1);
    s->x[28] = ((uint64_t)(((uint32_t)(value27))));
    s->x[30] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[28])))) ^ ((uint64_t)(((uint32_t)(s->x[2]))))))))));
    __auto_type value29 = r_load(s, ((s->x[15] + ((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[30])))))))))), 1);
    s->x[30] = ((uint64_t)(((uint32_t)(value29))));
    s->x[12] = ((uint64_t)(shiftRight(s->x[17], ((int64_t)(((uint64_t)(0x18)))), 64)));
    s->x[30] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[27])))) ^ ((uint64_t)(((uint32_t)(s->x[30]))))))))));
    s->x[30] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[30])))) & ((uint64_t)(0xff))))))));
    s->x[30] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[30])))) + ((uint64_t)(0x6aa))))))));
    __auto_type value34 = r_load(s, ((s->x[22] + shiftLeft(((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[30])))))))), 3, 64))), 8);
    s->x[30] = ((uint64_t)(value34));
    __auto_type value35 = r_load(s, addOffset(s->sp, 120), 8);
    s->x[14] = ((uint64_t)(value35));
    s->x[26] = ((uint64_t)(((s->x[14] + s->x[26]))));
    __auto_type value37 = r_load(s, s->x[26], 1);
    s->x[26] = ((uint64_t)(((uint32_t)(value37))));
    s->x[26] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[26])))) ^ ((uint64_t)(((uint32_t)(s->x[5]))))))))));
    __auto_type value39 = r_load(s, addOffset(s->sp, 112), 8);
    s->x[14] = ((uint64_t)(value39));
    __auto_type value40 = r_load(s, ((s->x[14] + ((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[26])))))))))), 1);
    s->x[26] = ((uint64_t)(((uint32_t)(value40))));
    s->x[14] = ((uint64_t)(((s->x[12] + s->x[4]))));
    s->x[14] = ((uint64_t)(((s->x[30] + s->x[14]))));
    s->x[26] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[27])))) ^ ((uint64_t)(((uint32_t)(s->x[26]))))))))));
    s->x[26] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[6])))) + ((uint64_t)(((uint8_t)(((uint64_t)(((uint32_t)(s->x[26]))))))))))))));
    s->x[28] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[28])))) ^ ((uint64_t)(0x4))))))));
    __auto_type value46 = r_load(s, ((s->x[22] + shiftLeft(((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[26])))))))), 3, 64))), 8);
    s->x[26] = ((uint64_t)(value46));
    __auto_type value47 = r_load(s, ((s->x[15] + ((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[28])))))))))), 1);
    s->x[28] = ((uint64_t)(((uint32_t)(value47))));
    s->x[27] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[27])))) ^ ((uint64_t)(((uint32_t)(s->x[28]))))))))));
    s->x[27] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[27])))) & ((uint64_t)(0xff))))))));
    s->x[28] = ((uint64_t)(((s->x[12] + s->x[7]))));
    s->x[26] = ((uint64_t)(((s->x[26] + s->x[28]))));
    s->x[27] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[27])))) + ((uint64_t)(0xfe1))))))));
    __auto_type value53 = r_load(s, ((s->x[22] + shiftLeft(((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[27])))))))), 3, 64))), 8);
    s->x[27] = ((uint64_t)(value53));
    s->x[28] = ((uint64_t)(((s->x[12] + s->x[19]))));
    s->x[27] = ((uint64_t)(((s->x[27] + s->x[28]))));
    __auto_type value56 = r_load(s, s->x[23], 1);
    s->x[23] = ((uint64_t)(((uint32_t)(value56))));
    __auto_type value57 = r_load(s, s->x[14], 1);
    s->x[14] = ((uint64_t)(((uint32_t)(value57))));
    s->x[14] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[23])))) ^ ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    __auto_type value59 = r_load(s, s->x[26], 1);
    s->x[23] = ((uint64_t)(((uint32_t)(value59))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[23])))) ^ ((uint64_t)(((uint32_t)(s->x[17]))))))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[14])))) ^ ((uint64_t)(((uint32_t)(s->x[17]))))))))));
    __auto_type value62 = r_load(s, s->x[27], 1);
    s->x[17] = ((uint64_t)(((uint32_t)(value62))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) * ((uint64_t)(((uint32_t)(s->x[21]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) ^ ((uint64_t)(((uint32_t)(s->x[17]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[14])))) ^ ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) ^ ((uint64_t)(0x6))))))));
    r_storeValue(s, ((s->x[24] + ((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[11])))))))))), ((uint64_t)(((uint32_t)(s->x[12])))), 1);
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[11])))))), ((uint32_t)(((uint64_t)(0x0)))));
    s->x[12] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "eq"))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) * ((uint64_t)(((uint32_t)(s->x[25]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) ^ ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    __auto_type value72 = r_load(s, ((s->x[20] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[12]))))))), 3, 64))), 8);
    s->x[12] = ((uint64_t)(value72));
    s->x[17] = ((uint64_t)(((uint64_t)(0xb7c))));
    next = s->x[12];
    return next;
}

uint64_t r_bb_100010170(RState *s) {
    uint64_t next = 0;
    __auto_type value0 = r_load(s, addOffset(s->x[19], 16), 4);
    s->x[9] = ((uint64_t)(((uint32_t)(value0))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0xab2e))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[25])))) ^ ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) + shiftLeft(((uint64_t)(((uint32_t)(s->x[10])))), 3, 32)))))));
    s->x[11] = ((uint64_t)(((uint32_t)(shiftLeft(((uint64_t)(((uint32_t)(s->x[10])))), ((int64_t)(((uint64_t)(0x3)))), 32)))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0x5025))))));
    s->x[10] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[10])))), 0x43f0, 16, 16, 32)))));
    r_storeValue(s, addOffset(s->sp, 16), ((uint64_t)(((uint32_t)(s->x[11])))), 4);
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) ^ ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[11] = ((uint64_t)(((s->sp + ((uint64_t)(0x20))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0xd022))))));
    s->x[12] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[12])))), 0xad20, 16, 16, 32)))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) | ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) ^ ((uint64_t)(0xfffffffe))))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((uint64_t)(0x2fdd))))));
    s->x[13] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[13])))), 0x52df, 16, 16, 32)))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) | (~((uint64_t)(((uint32_t)(s->x[11])))))))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((uint64_t)(0xc89f))))));
    s->x[13] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[13])))), 0xe7fe, 16, 16, 32)))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) - ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) ^ ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0xe98d))))));
    s->x[12] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[12])))), 0x74ca, 16, 16, 32)))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) * ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    r_storeValue(s, addOffset(s->sp, 40), s->x[24], 8);
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) - ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) + ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) + ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    r_storeValue(s, addOffset(s->sp, 48), ((uint64_t)(((uint32_t)(s->x[8])))), 4);
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[25])))) - ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) - ((uint64_t)(0x984))))))));
    r_storeValue(s, addOffset(s->sp, 36), ((uint64_t)(((uint32_t)(s->x[8])))), 4);
    __auto_type value32 = r_load(s, s->x[22], 4);
    s->x[8] = ((uint64_t)(((uint32_t)(value32))));
    __auto_type value33 = r_load(s, s->x[26], 4);
    s->x[9] = ((uint64_t)(((uint32_t)(value33))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0xa6))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) - ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) ^ ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0xd4cf))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0xa5c, 16, 16, 32)))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) * ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[9] = ((uint64_t)(0x101062000));
    s->x[9] = ((uint64_t)(((s->x[9] + ((uint64_t)(0x600))))));
    __auto_type value42 = r_load(s, addOffset(s->x[9], 7776), 8);
    s->x[10] = ((uint64_t)(value42));
    s->x[11] = ((uint64_t)(((uint64_t)(0xffffffffffffb571))));
    s->x[11] = ((uint64_t)(insertBits(s->x[11], 0x93fc, 16, 16, 64)));
    s->x[10] = ((uint64_t)(((s->x[10] + s->x[11]))));
    r_storeValue(s, s->sp, s->x[10], 8);
    s->x[10] = ((uint64_t)(((s->x[10] + ((uint64_t)(((uint8_t)(((uint64_t)(((uint32_t)(s->x[8]))))))))))));
    __auto_type value48 = r_load(s, s->x[10], 1);
    s->x[10] = ((uint64_t)(((uint32_t)(value48))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0x84))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    __auto_type value51 = r_load(s, s->x[9], 8);
    s->x[9] = ((uint64_t)(value51));
    s->x[11] = ((uint64_t)(((uint64_t)(0xffffffffffffc2a5))));
    s->x[11] = ((uint64_t)(insertBits(s->x[11], 0x954b, 16, 16, 64)));
    s->x[9] = ((uint64_t)(((s->x[9] + s->x[11]))));
    r_storeValue(s, addOffset(s->sp, 8), s->x[9], 8);
    __auto_type value56 = r_load(s, ((s->x[9] + ((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[10])))))))))), 1);
    s->x[9] = ((uint64_t)(((uint32_t)(value56))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0xcf7b))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) + ((uint64_t)(((uint8_t)(((uint64_t)(((uint32_t)(s->x[8]))))))))))))));
    __auto_type value60 = r_load(s, ((s->x[27] + shiftLeft(((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[8])))))))), 3, 64))), 8);
    s->x[8] = ((uint64_t)(value60));
    s->x[0] = ((uint64_t)(((s->sp + ((uint64_t)(0x20))))));
    s->x[17] = ((uint64_t)(((uint64_t)(0xe89a))));
    s->x[30] = 0x100010270;
    next = s->x[8];
    return next;
}

uint64_t r_bb_100010270(RState *s) {
    uint64_t next = 0;
    __auto_type value0 = r_load(s, addOffset(s->sp, 32), 4);
    s->x[11] = ((uint64_t)(((uint32_t)(value0))));
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0x98ef))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0x5d42, 16, 16, 32)))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[11])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[8])))))));
    s->x[8] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "eq"))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0xde))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) * ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) ^ ((uint64_t)(((uint32_t)(s->x[25]))))))))));
    __auto_type value8 = r_load(s, ((s->x[27] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[8]))))))), 3, 64))), 8);
    s->x[8] = ((uint64_t)(value8));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0x20db))))));
    s->x[10] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[10])))), 0x318a, 16, 16, 32)))));
    s->x[17] = ((uint64_t)(((uint64_t)(0xb4a8))));
    next = s->x[8];
    return next;
}

uint64_t r_bb_1000107a4(RState *s) {
    uint64_t next = 0;
    s->x[14] = ((uint64_t)(((uint32_t)(((uint64_t)(0x1bca))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((uint64_t)(0x9acf))))));
    s->x[2] = ((uint64_t)(((uint32_t)(((uint64_t)(0xba0))))));
    s->x[2] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[2])))), 0xba0c, 16, 16, 32)))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[3])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[2])))))));
    s->x[2] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "eq"))))));
    s->x[3] = ((uint64_t)(((uint32_t)(((uint64_t)(0xffff9212))))));
    s->x[19] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[4])))) + ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    s->x[3] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[19])))) ^ ((uint64_t)(((uint32_t)(s->x[3]))))))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[4])))) + ((uint64_t)(((uint32_t)(s->x[17]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[3])))) + ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) * ((uint64_t)(((uint32_t)(s->x[2]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) ^ ((uint64_t)(((uint32_t)(s->x[4]))))))))));
    __auto_type value13 = r_load(s, ((s->x[20] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[17]))))))), 3, 64))), 8);
    s->x[2] = ((uint64_t)(value13));
    s->x[17] = ((uint64_t)(((uint64_t)(0x80))));
    next = s->x[2];
    return next;
}

uint64_t r_bb_1000107fc(RState *s) {
    uint64_t next = 0;
    return 0x100010800;
}

uint64_t r_bb_100010800(RState *s) {
    uint64_t next = 0;
    s->sp = ((uint64_t)(((s->sp - ((uint64_t)(0x100))))));
    r_storeValue(s, addOffset(s->sp, 160), s->x[28], 8);
    r_storeValue(s, ((addOffset(s->sp, 160)) + 8), s->x[27], 8);
    r_storeValue(s, addOffset(s->sp, 176), s->x[26], 8);
    r_storeValue(s, ((addOffset(s->sp, 176)) + 8), s->x[25], 8);
    r_storeValue(s, addOffset(s->sp, 192), s->x[24], 8);
    r_storeValue(s, ((addOffset(s->sp, 192)) + 8), s->x[23], 8);
    r_storeValue(s, addOffset(s->sp, 208), s->x[22], 8);
    r_storeValue(s, ((addOffset(s->sp, 208)) + 8), s->x[21], 8);
    r_storeValue(s, addOffset(s->sp, 224), s->x[20], 8);
    r_storeValue(s, ((addOffset(s->sp, 224)) + 8), s->x[19], 8);
    r_storeValue(s, addOffset(s->sp, 240), s->x[29], 8);
    r_storeValue(s, ((addOffset(s->sp, 240)) + 8), s->x[30], 8);
    s->x[29] = ((uint64_t)(((s->sp + ((uint64_t)(0xf0))))));
    s->x[19] = ((uint64_t)(s->x[0]));
    s->x[8] = ((uint64_t)(0x10106d000));
    __auto_type value10 = r_load(s, addOffset(s->x[8], 1032), 8);
    s->x[8] = ((uint64_t)(value10));
    __auto_type value11 = r_load(s, s->x[8], 8);
    s->x[8] = ((uint64_t)(value11));
    r_storeValue(s, addOffset(s->x[29], (-96)), s->x[8], 8);
    s->x[10] = ((uint64_t)(0x101075000));
    __auto_type value14 = r_load(s, addOffset(s->x[10], 960), 4);
    s->x[8] = ((uint64_t)(((uint32_t)(value14))));
    s->x[12] = ((uint64_t)(0x101075000));
    __auto_type value16 = r_load(s, addOffset(s->x[12], 2880), 4);
    s->x[13] = ((uint64_t)(((uint32_t)(value16))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) ^ ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0xa6))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0xd4cf))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0xa5c, 16, 16, 32)))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) * ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[14] = ((uint64_t)(0x100fe9000));
    s->x[14] = ((uint64_t)(((s->x[14] + ((uint64_t)(0x290))))));
    s->x[14] = ((uint64_t)(((s->x[14] + ((uint64_t)(((uint8_t)(((uint64_t)(((uint32_t)(s->x[11]))))))))))));
    __auto_type value26 = r_load(s, s->x[14], 1);
    s->x[14] = ((uint64_t)(((uint32_t)(value26))));
    s->x[14] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[14])))) ^ ((uint64_t)(0xf0))))))));
    s->x[15] = ((uint64_t)(0x100de2000));
    s->x[15] = ((uint64_t)(((s->x[15] + ((uint64_t)(0x9f0))))));
    __auto_type value30 = r_load(s, ((s->x[15] + ((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[14])))))))))), 1);
    s->x[14] = ((uint64_t)(((uint32_t)(value30))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) ^ ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) & ((uint64_t)(0xff))))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) + ((uint64_t)(0xc87))))))));
    s->x[11] = ((uint64_t)(0x10105b000));
    s->x[11] = ((uint64_t)(((s->x[11] + ((uint64_t)(0x6f0))))));
    __auto_type value36 = r_load(s, ((s->x[11] + shiftLeft(((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[14])))))))), 3, 64))), 8);
    s->x[14] = ((uint64_t)(value36));
    s->x[15] = ((uint64_t)(((uint64_t)(0xffffffffffff7d56))));
    s->x[15] = ((uint64_t)(insertBits(s->x[15], 0xfd6d, 16, 16, 64)));
    s->x[23] = ((uint64_t)(((s->x[14] + s->x[15]))));
    __auto_type value40 = r_load(s, s->x[23], 8);
    s->x[14] = ((uint64_t)(value40));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) + ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) * ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    __auto_type value44 = r_load(s, addOffset(s->x[11], 30544), 8);
    s->x[15] = ((uint64_t)(value44));
    s->x[16] = ((uint64_t)(((uint64_t)(0xffffffffffff2dad))));
    s->x[16] = ((uint64_t)(insertBits(s->x[16], 0xed6f, 16, 16, 64)));
    s->x[15] = ((uint64_t)(((s->x[15] + s->x[16]))));
    r_storeValue(s, addOffset(s->sp, 24), s->x[15], 8);
    s->x[15] = ((uint64_t)(((s->x[15] + ((uint64_t)(((uint8_t)(((uint64_t)(((uint32_t)(s->x[13]))))))))))));
    __auto_type value50 = r_load(s, s->x[15], 1);
    s->x[15] = ((uint64_t)(((uint32_t)(value50))));
    s->x[16] = ((uint64_t)(((uint32_t)(((uint64_t)(0xfa))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) ^ ((uint64_t)(((uint32_t)(s->x[16]))))))))));
    s->x[16] = ((uint64_t)(((uint32_t)(((uint64_t)(0xa078))))));
    s->x[16] = ((uint64_t)(((s->x[11] + s->x[16]))));
    __auto_type value55 = r_load(s, s->x[16], 8);
    s->x[16] = ((uint64_t)(value55));
    s->x[17] = ((uint64_t)(((uint64_t)(0xfffffffffffff512))));
    s->x[17] = ((uint64_t)(insertBits(s->x[17], 0x997c, 16, 16, 64)));
    s->x[16] = ((uint64_t)(((s->x[16] + s->x[17]))));
    r_storeValue(s, addOffset(s->sp, 16), s->x[16], 8);
    __auto_type value60 = r_load(s, ((s->x[16] + ((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[15])))))))))), 1);
    s->x[15] = ((uint64_t)(((uint32_t)(value60))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) ^ ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((uint64_t)(0x1301))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) + ((uint64_t)(((uint8_t)(((uint64_t)(((uint32_t)(s->x[13]))))))))))))));
    __auto_type value64 = r_load(s, ((s->x[11] + shiftLeft(((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[13])))))))), 3, 64))), 8);
    s->x[13] = ((uint64_t)(value64));
    s->x[15] = ((uint64_t)(((uint64_t)(0xffffffffffffa825))));
    s->x[15] = ((uint64_t)(insertBits(s->x[15], 0x9608, 16, 16, 64)));
    s->x[0] = ((uint64_t)(((s->x[13] + s->x[15]))));
    __auto_type value68 = r_load(s, s->x[0], 8);
    s->x[13] = ((uint64_t)(value68));
    s->x[15] = ((uint64_t)(((s->sp + ((uint64_t)(0x48))))));
    s->x[13] = ((uint64_t)(((s->x[13] - s->x[14]))));
    s->x[13] = ((uint64_t)(((s->x[13] + s->x[15]))));
    s->x[14] = ((uint64_t)(((uint64_t)(0x2c6))));
    s->x[14] = ((uint64_t)(insertBits(s->x[14], 0x75f, 16, 16, 64)));
    s->x[14] = ((uint64_t)(insertBits(s->x[14], 0x3a80, 32, 16, 64)));
    s->x[14] = ((uint64_t)(insertBits(s->x[14], 0x673e, 48, 16, 64)));
    s->x[14] = ((uint64_t)((((s->x[13] * s->x[8]) + s->x[14]))));
    s->x[15] = ((uint64_t)(((uint64_t)(0xd1a6))));
    s->x[15] = ((uint64_t)(insertBits(s->x[15], 0x8eae, 16, 16, 64)));
    s->x[15] = ((uint64_t)(insertBits(s->x[15], 0x4620, 32, 16, 64)));
    s->x[15] = ((uint64_t)(insertBits(s->x[15], 0x73d0, 48, 16, 64)));
    s->x[13] = ((uint64_t)(((s->x[13] ^ s->x[15]))));
    s->x[13] = ((uint64_t)(((s->x[13] * s->x[8]))));
    r_storeValue(s, s->x[23], s->x[14], 8);
    r_storeValue(s, s->x[0], s->x[13], 8);
    s->x[13] = ((uint64_t)(((uint32_t)(((uint64_t)(0xa167))))));
    s->x[13] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[13])))), 0xc1b2, 16, 16, 32)))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[19])))) | ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((uint64_t)(0x5e98))))));
    s->x[14] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[14])))), 0x3e4d, 16, 16, 32)))));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[19])))) | ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) - ((uint64_t)(((uint32_t)(s->x[15]))))))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) + ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((uint64_t)(0xabae))))));
    s->x[14] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[14])))), 0x2b1c, 16, 16, 32)))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) ^ ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((uint64_t)(0x180b))))));
    s->x[14] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[14])))), 0x7398, 16, 16, 32)))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) * ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    __auto_type value99 = r_load(s, s->x[19], 4);
    s->x[14] = ((uint64_t)(((uint32_t)(value99))));
    __auto_type value100 = r_load(s, addOffset(s->x[19], 8), 8);
    s->x[26] = ((uint64_t)(value100));
    __auto_type value101 = r_load(s, addOffset(s->x[19], 48), 4);
    s->x[15] = ((uint64_t)(((uint32_t)(value101))));
    s->x[1] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) ^ ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    __auto_type value103a = r_load(s, addOffset(s->x[19], 32), 8);
    __auto_type value103b = r_load(s, ((addOffset(s->x[19], 32)) + 8), 8);
    s->x[2] = ((uint64_t)(value103a));
    s->x[16] = ((uint64_t)(value103b));
    __auto_type value104 = r_load(s, addOffset(s->x[19], 24), 8);
    s->x[17] = ((uint64_t)(value104));
    r_compare64(s, ((uint64_t)(s->x[2])), ((uint64_t)(((uint64_t)(0x0)))));
    if (r_condition(s, "ne"))
    {
        r_compare64(s, ((uint64_t)(s->x[26])), ((uint64_t)(((uint64_t)(0x0)))));
    }
    else
    {
        r_setNZCV(s, 0x4);
    }
    s->x[15] = ((uint64_t)(((uint32_t)(((uint64_t)(0xc711))))));
    s->x[15] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[15])))), 0x838, 16, 16, 32)))));
    r_storeValue(s, addOffset(s->sp, 32), s->x[17], 8);
    r_storeValue(s, ((addOffset(s->sp, 32)) + 8), s->x[1], 8);
    if (r_condition(s, "ne"))
    {
        r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[1])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[15])))))));
    }
    else
    {
        r_setNZCV(s, 0x4);
    }
    r_storeValue(s, addOffset(s->sp, 8), s->x[16], 8);
    if (r_condition(s, "ne"))
    {
        r_compare64(s, ((uint64_t)(s->x[16])), ((uint64_t)(((uint64_t)(0x0)))));
    }
    else
    {
        r_setNZCV(s, 0x4);
    }
    if (r_condition(s, "ne"))
    {
        r_compare64(s, ((uint64_t)(s->x[17])), ((uint64_t)(((uint64_t)(0x0)))));
    }
    else
    {
        r_setNZCV(s, 0x4);
    }
    s->x[15] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "eq"))))));
    s->x[16] = ((uint64_t)(((uint32_t)(((uint64_t)(0x689a))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[14])))) - ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    s->x[20] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) ^ ((uint64_t)(((uint32_t)(s->x[16]))))))))));
    __auto_type value118 = r_load(s, addOffset(s->x[10], 960), 4);
    s->x[10] = ((uint64_t)(((uint32_t)(value118))));
    __auto_type value119 = r_load(s, addOffset(s->x[12], 2880), 4);
    s->x[12] = ((uint64_t)(((uint32_t)(value119))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) * ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[12] = ((uint64_t)(0x100fe9000));
    s->x[12] = ((uint64_t)(((s->x[12] + ((uint64_t)(0x390))))));
    s->x[12] = ((uint64_t)(((s->x[12] + ((uint64_t)(((uint8_t)(((uint64_t)(((uint32_t)(s->x[10]))))))))))));
    __auto_type value126 = r_load(s, s->x[12], 1);
    s->x[12] = ((uint64_t)(((uint32_t)(value126))));
    s->x[14] = ((uint64_t)(((uint32_t)(((uint64_t)(0x84))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) ^ ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    s->x[14] = ((uint64_t)(0x100de2000));
    s->x[14] = ((uint64_t)(((s->x[14] + ((uint64_t)(0xaf0))))));
    __auto_type value131 = r_load(s, ((s->x[14] + ((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[12])))))))))), 1);
    s->x[12] = ((uint64_t)(((uint32_t)(value131))));
    s->x[14] = ((uint64_t)(((uint32_t)(((uint64_t)(0xffffae43))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[20])))) + ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) * ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) & ((uint64_t)(0xff))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) + ((uint64_t)(0x257))))))));
    __auto_type value138 = r_load(s, ((s->x[11] + shiftLeft(((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[10])))))))), 3, 64))), 8);
    s->x[10] = ((uint64_t)(value138));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[14])))) ^ ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    s->x[12] = ((uint64_t)(((uint64_t)(0xffffffffffff5355))));
    s->x[12] = ((uint64_t)(insertBits(s->x[12], 0x9824, 16, 16, 64)));
    s->x[24] = ((uint64_t)(((s->x[10] + s->x[12]))));
    __auto_type value143 = r_load(s, ((s->x[24] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[11]))))))), 3, 64))), 8);
    s->x[11] = ((uint64_t)(value143));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0x201c))))));
    s->x[10] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[10])))), 0x318a, 16, 16, 32)))));
    s->x[17] = ((uint64_t)(((uint64_t)(0xa3f9))));
    next = s->x[11];
    return next;
}

uint64_t r_bb_100011eb4(RState *s) {
    uint64_t next = 0;
    __auto_type value0 = r_load(s, addOffset(s->x[28], 528), 4);
    s->x[17] = ((uint64_t)(((uint32_t)(value0))));
    s->x[8] = ((uint64_t)(0x101075000));
    __auto_type value2 = r_load(s, addOffset(s->x[8], 2880), 4);
    s->x[2] = ((uint64_t)(((uint32_t)(value2))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) ^ ((uint64_t)(((uint32_t)(s->x[2]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) ^ ((uint64_t)(((uint32_t)(s->x[5]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) * ((uint64_t)(((uint32_t)(s->x[6]))))))))));
    s->x[2] = ((uint64_t)(((s->x[19] + ((uint64_t)(((uint8_t)(((uint64_t)(((uint32_t)(s->x[17]))))))))))));
    __auto_type value7 = r_load(s, s->x[2], 1);
    s->x[2] = ((uint64_t)(((uint32_t)(value7))));
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0xcd))))));
    s->x[2] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[2])))) ^ ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    __auto_type value10 = r_load(s, ((s->x[22] + ((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[2])))))))))), 1);
    s->x[2] = ((uint64_t)(((uint32_t)(value10))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[2])))) ^ ((uint64_t)(((uint32_t)(s->x[17]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) & ((uint64_t)(0xff))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) + ((uint64_t)(0x1a8))))))));
    __auto_type value14 = r_load(s, ((s->x[10] + shiftLeft(((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[17])))))))), 3, 64))), 8);
    s->x[17] = ((uint64_t)(value14));
    s->x[8] = ((uint64_t)(((uint64_t)(0xffffffffffff9e4e))));
    s->x[8] = ((uint64_t)(insertBits(s->x[8], 0xc260, 16, 16, 64)));
    s->x[2] = ((uint64_t)(((s->x[17] + s->x[8]))));
    __auto_type value18 = r_load(s, s->x[2], 8);
    s->x[17] = ((uint64_t)(value18));
    s->x[17] = ((uint64_t)(((s->x[17] + s->x[4]))));
    r_storeValue(s, s->x[17], ((uint64_t)(((uint32_t)(s->x[7])))), 1);
    __auto_type value21 = r_load(s, addOffset(s->x[28], 528), 4);
    s->x[17] = ((uint64_t)(((uint32_t)(value21))));
    __auto_type value22 = r_load(s, s->x[30], 4);
    s->x[3] = ((uint64_t)(((uint32_t)(value22))));
    s->x[3] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[3])))) ^ ((uint64_t)(((uint32_t)(s->x[5]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) ^ ((uint64_t)(((uint32_t)(s->x[3]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) * ((uint64_t)(((uint32_t)(s->x[6]))))))))));
    s->x[3] = ((uint64_t)(((s->x[15] + ((uint64_t)(((uint8_t)(((uint64_t)(((uint32_t)(s->x[17]))))))))))));
    __auto_type value27 = r_load(s, s->x[3], 1);
    s->x[3] = ((uint64_t)(((uint32_t)(value27))));
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0xfa))))));
    s->x[3] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[3])))) ^ ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    __auto_type value30 = r_load(s, ((s->x[1] + ((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[3])))))))))), 1);
    s->x[3] = ((uint64_t)(((uint32_t)(value30))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[3])))) ^ ((uint64_t)(((uint32_t)(s->x[17]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) & ((uint64_t)(0xff))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) + ((uint64_t)(0xfab))))))));
    __auto_type value34 = r_load(s, ((s->x[10] + shiftLeft(((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[17])))))))), 3, 64))), 8);
    s->x[17] = ((uint64_t)(value34));
    s->x[8] = ((uint64_t)(((uint64_t)(0xffffffffffffa14d))));
    s->x[8] = ((uint64_t)(insertBits(s->x[8], 0xddc4, 16, 16, 64)));
    s->x[3] = ((uint64_t)(((s->x[17] + s->x[8]))));
    __auto_type value38 = r_load(s, s->x[3], 8);
    s->x[17] = ((uint64_t)(value38));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[7])))) - ((uint64_t)(0x6c))))))));
    s->x[13] = ((uint64_t)(((s->x[17] + ((uint64_t)(((uint8_t)(((uint64_t)(((uint32_t)(s->x[13]))))))))))));
    r_storeValue(s, s->x[13], ((uint64_t)(((uint32_t)(s->x[4])))), 1);
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0xa))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[7])))) & ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0xffffffdb))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) ^ ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(shiftLeft(((uint64_t)(((uint32_t)(s->x[7])))), ((int64_t)(((uint64_t)(((uint32_t)(s->x[24])))))), 32)))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) & ((uint64_t)(((uint32_t)(s->x[25]))))))))));
    s->x[8] = ((uint64_t)(s->x[1]));
    s->x[1] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) ^ ((uint64_t)(0x1e))))))));
    s->x[16] = ((uint64_t)(s->x[15]));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[7])))) ^ ((uint64_t)(((uint32_t)(s->x[26]))))))))));
    s->x[1] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[1])))) & ((uint64_t)(((uint32_t)(s->x[15]))))))))));
    s->x[1] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[1])))) ^ ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    s->x[1] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) & shiftLeft(((uint64_t)(((uint32_t)(s->x[1])))), 1, 32)))))));
    s->x[1] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[1])))) ^ ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    s->x[1] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) & shiftLeft(((uint64_t)(((uint32_t)(s->x[1])))), 1, 32)))))));
    s->x[1] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[1])))) ^ ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    s->x[1] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) & shiftLeft(((uint64_t)(((uint32_t)(s->x[1])))), 1, 32)))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[1])))) ^ ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    s->x[1] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[7])))) + ((uint64_t)(0x14))))))));
    s->x[1] = ((uint64_t)(((uint32_t)(signExtendBits(((uint64_t)(((uint32_t)(s->x[1])))), 8, 32)))));
    (void)r_addWithCarry(s, ((uint64_t)(((uint32_t)(s->x[1])))), ((uint64_t)(0x1)), false, 32);
    s->x[1] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[7])))) & ((uint64_t)(0x3e))))))));
    s->x[1] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[1])))) ^ ((uint64_t)(((uint32_t)(s->x[21]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) ^ ((uint64_t)(((uint32_t)(s->x[23]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) & ((uint64_t)(((uint32_t)(s->x[7]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) ^ ((uint64_t)(((uint32_t)(s->x[1]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) & shiftLeft(((uint64_t)(((uint32_t)(s->x[17])))), 1, 32)))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) ^ ((uint64_t)(((uint32_t)(s->x[1]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) & shiftLeft(((uint64_t)(((uint32_t)(s->x[17])))), 1, 32)))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) ^ ((uint64_t)(((uint32_t)(s->x[1]))))))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) & shiftLeft(((uint64_t)(((uint32_t)(s->x[17])))), 1, 32)))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[1])))) ^ ((uint64_t)(((uint32_t)(s->x[7]))))))))));
    s->x[1] = ((uint64_t)(s->x[8]));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) ^ ((uint64_t)(((uint32_t)(s->x[15]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(selectValue(r_condition(s, "gt"), ((uint64_t)(((uint32_t)(s->x[20])))), ((uint64_t)(((uint32_t)(s->x[27])))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) ^ ((uint64_t)(((uint32_t)(s->x[7]))))))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) ^ shiftLeft(((uint64_t)(((uint32_t)(s->x[13])))), 2, 32)))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) ^ shiftLeft(((uint64_t)(((uint32_t)(s->x[15])))), 1, 32)))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) ^ ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) - ((uint64_t)(0x40))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) ^ ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    return 0x100012000;
}

uint64_t r_bb_100012000(RState *s) {
    uint64_t next = 0;
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) - ((uint64_t)(0x6d))))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) ^ ((uint64_t)(((uint32_t)(s->x[17]))))))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) ^ ((uint64_t)(0x3))))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) - ((uint64_t)(0x31))))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) ^ ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    s->x[15] = ((uint64_t)(s->x[16]));
    s->x[7] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) - ((uint64_t)(0x78))))))));
    r_compare64(s, ((uint64_t)(s->x[4])), ((uint64_t)(((uint64_t)(0xff)))));
    s->x[4] = ((uint64_t)(((s->x[4] + ((uint64_t)(0x1))))));
    s->x[13] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "ne"))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) * ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) ^ ((uint64_t)(((uint32_t)(s->x[0]))))))))));
    __auto_type value12 = r_load(s, ((s->x[14] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[13]))))))), 3, 64))), 8);
    s->x[13] = ((uint64_t)(value12));
    s->x[17] = ((uint64_t)(((uint64_t)(0xf807))));
    next = s->x[13];
    return next;
}

uint64_t r_bb_100012b80(RState *s) {
    uint64_t next = 0;
    s->x[14] = ((uint64_t)(((uint32_t)(((uint64_t)(0xb1d1))))));
    s->x[14] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[14])))), 0x8449, 16, 16, 32)))));
    s->x[15] = ((uint64_t)(((uint32_t)(((uint64_t)(0xfdfb))))));
    s->x[15] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[15])))), 0x7bb6, 16, 16, 32)))));
    s->x[14] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) + ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[14])))) & ((uint64_t)(((uint32_t)(s->x[15]))))))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) - ((uint64_t)(0xc63))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((uint64_t)(0x410))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[14])))) | ((uint64_t)(((uint32_t)(s->x[17]))))))))));
    __auto_type value9 = r_load(s, addOffset(s->x[27], 32), 8);
    s->x[17] = ((uint64_t)(value9));
    s->x[1] = ((uint64_t)(((s->x[19] & ((uint64_t)(0xff))))));
    __auto_type value11 = r_load(s, ((s->x[17] + shiftLeft(s->x[1], 2, 64))), 4);
    s->x[17] = ((uint64_t)(((uint32_t)(value11))));
    s->x[2] = ((uint64_t)(((uint32_t)(((uint64_t)(0x8876))))));
    s->x[2] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[2])))), 0x2ff8, 16, 16, 32)))));
    s->x[2] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[2]))))))))));
    s->x[3] = ((uint64_t)(((uint32_t)(((uint64_t)(0x778a))))));
    s->x[3] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[3])))), 0xd007, 16, 16, 32)))));
    s->x[2] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[2])))) + ((uint64_t)(((uint32_t)(s->x[3]))))))))));
    s->x[3] = ((uint64_t)(((uint32_t)(((uint64_t)(0x727e))))));
    s->x[3] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[3])))), 0xa5e0, 16, 16, 32)))));
    s->x[3] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[3]))))))))));
    s->x[4] = ((uint64_t)(((uint32_t)(((uint64_t)(0x87b1))))));
    s->x[4] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[4])))), 0x5a1f, 16, 16, 32)))));
    s->x[3] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[3])))) + ((uint64_t)(((uint32_t)(s->x[4]))))))))));
    s->x[3] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[3])))) + ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    s->x[4] = ((uint64_t)(((uint32_t)(((uint64_t)(0x81cd))))));
    s->x[4] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[4])))), 0x446d, 16, 16, 32)))));
    s->x[4] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[4]))))))))));
    s->x[5] = ((uint64_t)(((uint32_t)(((uint64_t)(0x7e33))))));
    s->x[5] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[5])))), 0xbb92, 16, 16, 32)))));
    s->x[4] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[4])))) + ((uint64_t)(((uint32_t)(s->x[5]))))))))));
    s->x[2] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[4])))) ^ ((uint64_t)(((uint32_t)(s->x[2]))))))))));
    return 0x100012c00;
}

uint64_t r_bb_100012c00(RState *s) {
    uint64_t next = 0;
    s->x[2] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[2])))) ^ ((uint64_t)(((uint32_t)(s->x[3]))))))))));
    s->x[3] = ((uint64_t)(((uint32_t)(((uint64_t)(0xa199))))));
    s->x[3] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[3])))), 0xfd2a, 16, 16, 32)))));
    s->x[3] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) ^ ((uint64_t)(((uint32_t)(s->x[3]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[3])))) - ((uint64_t)(((uint32_t)(s->x[17]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) + ((uint64_t)(((uint32_t)(s->x[2]))))))))));
    s->x[2] = ((uint64_t)(((uint32_t)(((uint64_t)(0x4d4b))))));
    s->x[2] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[2])))), 0xfd4c, 16, 16, 32)))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[17])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[2])))))));
    s->x[17] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "eq"))))));
    s->x[19] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[19])))) + ((uint64_t)(0x1))))))));
    s->x[2] = ((uint64_t)(((uint32_t)(((uint64_t)(0x71dd))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) * ((uint64_t)(((uint32_t)(s->x[2]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) ^ ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    __auto_type value14 = r_load(s, ((s->x[20] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[10]))))))), 3, 64))), 8);
    s->x[10] = ((uint64_t)(value14));
    s->x[17] = ((uint64_t)(((uint64_t)(0xc4))));
    next = s->x[10];
    return next;
}

uint64_t r_bb_100012c84(RState *s) {
    uint64_t next = 0;
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0xffffdea4))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) + ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((uint64_t)(0x1c4))))));
    s->x[16] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) | ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) - ((uint64_t)(0x24e))))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((uint64_t)(0xacf))))));
    s->x[13] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[13])))), 0x73a0, 16, 16, 32)))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[16])))) + ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((uint64_t)(0xc437))))));
    s->x[14] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[14])))), 0xd36d, 16, 16, 32)))));
    s->x[14] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((uint64_t)(0x3bc9))))));
    s->x[15] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[15])))), 0x2c92, 16, 16, 32)))));
    s->x[14] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[14])))) + ((uint64_t)(((uint32_t)(s->x[15]))))))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((uint64_t)(0xb149))))));
    s->x[15] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[15])))), 0x6eb8, 16, 16, 32)))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[15]))))))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((uint64_t)(0x4eb7))))));
    s->x[15] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[15])))), 0x9147, 16, 16, 32)))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) + ((uint64_t)(((uint32_t)(s->x[15]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[14])))) ^ ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((uint64_t)(0xf145))))));
    s->x[14] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[14])))), 0x8c5f, 16, 16, 32)))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) + ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) ^ ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    __auto_type value26 = r_load(s, addOffset(s->sp, 68), 4);
    s->x[13] = ((uint64_t)(((uint32_t)(value26))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) - ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((uint64_t)(0xba7d))))));
    s->x[13] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[13])))), 0xbbb9, 16, 16, 32)))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[10])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[13])))))));
    s->x[10] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "ne"))))));
    s->x[13] = ((uint64_t)(((uint32_t)(shiftLeft(((uint64_t)(((uint32_t)(s->x[10])))), ((int64_t)(((uint64_t)(0x4)))), 32)))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) - ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    __auto_type value35 = r_load(s, ((s->x[28] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[10]))))))), 3, 64))), 8);
    s->x[10] = ((uint64_t)(value35));
    s->x[17] = ((uint64_t)(((uint64_t)(0x7007))));
    next = s->x[10];
    return next;
}

uint64_t r_bb_100012d1c(RState *s) {
    uint64_t next = 0;
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0x98ef))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0x5d42, 16, 16, 32)))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[16])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[8])))))));
    s->x[8] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "eq"))))));
    __auto_type value4 = r_load(s, addOffset(s->sp, 32), 4);
    s->x[9] = ((uint64_t)(((uint32_t)(value4))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ shiftLeft(((uint64_t)(((uint32_t)(s->x[8])))), 2, 32)))))));
    __auto_type value6 = r_load(s, ((s->x[28] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[8]))))))), 3, 64))), 8);
    s->x[8] = ((uint64_t)(value6));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x201b))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0x318a, 16, 16, 32)))));
    s->x[17] = ((uint64_t)(((uint64_t)(0xa481))));
    next = s->x[8];
    return next;
}

uint64_t r_bb_10001306c(RState *s) {
    uint64_t next = 0;
    __auto_type value0a = r_load(s, addOffset(s->sp, 128), 8);
    __auto_type value0b = r_load(s, ((addOffset(s->sp, 128)) + 8), 8);
    s->x[29] = ((uint64_t)(value0a));
    s->x[30] = ((uint64_t)(value0b));
    __auto_type value1a = r_load(s, addOffset(s->sp, 112), 8);
    __auto_type value1b = r_load(s, ((addOffset(s->sp, 112)) + 8), 8);
    s->x[20] = ((uint64_t)(value1a));
    s->x[19] = ((uint64_t)(value1b));
    __auto_type value2a = r_load(s, addOffset(s->sp, 96), 8);
    __auto_type value2b = r_load(s, ((addOffset(s->sp, 96)) + 8), 8);
    s->x[22] = ((uint64_t)(value2a));
    s->x[21] = ((uint64_t)(value2b));
    __auto_type value3a = r_load(s, addOffset(s->sp, 80), 8);
    __auto_type value3b = r_load(s, ((addOffset(s->sp, 80)) + 8), 8);
    s->x[24] = ((uint64_t)(value3a));
    s->x[23] = ((uint64_t)(value3b));
    __auto_type value4a = r_load(s, addOffset(s->sp, 64), 8);
    __auto_type value4b = r_load(s, ((addOffset(s->sp, 64)) + 8), 8);
    s->x[26] = ((uint64_t)(value4a));
    s->x[25] = ((uint64_t)(value4b));
    __auto_type value5a = r_load(s, addOffset(s->sp, 48), 8);
    __auto_type value5b = r_load(s, ((addOffset(s->sp, 48)) + 8), 8);
    s->x[28] = ((uint64_t)(value5a));
    s->x[27] = ((uint64_t)(value5b));
    s->sp = ((uint64_t)(((s->sp + ((uint64_t)(0x90))))));
    next = s->x[30];
    return next;
}

uint64_t r_bb_100013294(RState *s) {
    uint64_t next = 0;
    s->x[15] = ((uint64_t)(((uint32_t)(((uint64_t)(0xf9fd))))));
    s->x[15] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[15])))), 0x44ae, 16, 16, 32)))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[14])))) & ((uint64_t)(((uint32_t)(s->x[15]))))))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((uint64_t)(0x1ce0))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) ^ ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    s->x[2] = ((uint64_t)(((uint32_t)(((uint64_t)(0x64d6))))));
    s->x[2] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[2])))), 0x1fb6, 16, 16, 32)))));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[14])))) + shiftLeft(((uint64_t)(((uint32_t)(s->x[14])))), 2, 32)))))));
    s->x[4] = ((uint64_t)(((uint32_t)(((uint64_t)(0x7c7d))))));
    s->x[4] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[4])))), 0xb859, 16, 16, 32)))));
    s->x[14] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[14])))) + ((uint64_t)(((uint32_t)(s->x[2]))))))))));
    s->x[2] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[14])))) ^ ((uint64_t)(((uint32_t)(s->x[4]))))))))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[1])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[2])))))));
    s->x[1] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "ne"))))));
    s->x[2] = ((uint64_t)(((uint32_t)(((uint64_t)(0xffff4273))))));
    s->x[2] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) + ((uint64_t)(((uint32_t)(s->x[2]))))))))));
    s->x[1] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[1])))) * ((uint64_t)(((uint32_t)(s->x[2]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[1])))) ^ ((uint64_t)(((uint32_t)(s->x[17]))))))))));
    __auto_type value18 = r_load(s, ((s->x[20] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[17]))))))), 3, 64))), 8);
    s->x[1] = ((uint64_t)(value18));
    s->x[17] = ((uint64_t)(((uint64_t)(0x9d8d))));
    next = s->x[1];
    return next;
}

uint64_t r_bb_100013620(RState *s) {
    uint64_t next = 0;
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) + ((uint64_t)(0x11))))))));
    __auto_type value1 = r_load(s, addOffset(s->sp, 8), 8);
    s->x[9] = ((uint64_t)(value1));
    r_storeValue(s, s->x[9], ((uint64_t)(((uint32_t)(s->x[28])))), 4);
    __auto_type value3 = r_load(s, addOffset(s->sp, 68), 4);
    s->x[9] = ((uint64_t)(((uint32_t)(value3))));
    __auto_type value4 = r_load(s, addOffset(s->sp, 32), 8);
    s->x[10] = ((uint64_t)(value4));
    r_storeValue(s, s->x[10], ((uint64_t)(((uint32_t)(s->x[9])))), 4);
    __auto_type value6 = r_load(s, ((s->x[24] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[8]))))))), 3, 64))), 8);
    s->x[8] = ((uint64_t)(value6));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0x7bc5))))));
    s->x[10] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[10])))), 0xce75, 16, 16, 32)))));
    s->x[17] = ((uint64_t)(((uint64_t)(0xa3f9))));
    next = s->x[8];
    return next;
}

uint64_t r_bb_10001364c(RState *s) {
    uint64_t next = 0;
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0xffffe867))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[20])))) + ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x8f7))))));
    s->x[22] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    __auto_type value4 = r_load(s, addOffset(s->sp, 68), 4);
    s->x[8] = ((uint64_t)(((uint32_t)(value4))));
    __auto_type value5 = r_load(s, addOffset(s->sp, 32), 8);
    s->x[9] = ((uint64_t)(value5));
    r_storeValue(s, s->x[9], ((uint64_t)(((uint32_t)(s->x[8])))), 4);
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0x8a3))))));
    s->x[10] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[10])))), 0x263e, 16, 16, 32)))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) | ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    __auto_type value10 = r_load(s, addOffset(s->sp, 4), 4);
    s->x[9] = ((uint64_t)(((uint32_t)(value10))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) - ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) + ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x6e28))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0x2015, 16, 16, 32)))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0xa827))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0xda51, 16, 16, 32)))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) * ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[28])))) + ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    r_storeValue(s, addOffset(s->sp, 136), s->x[12], 8);
    s->x[10] = ((uint64_t)(((s->sp + ((uint64_t)(0x40))))));
    r_storeValue(s, addOffset(s->sp, 104), s->x[10], 8);
    r_storeValue(s, ((addOffset(s->sp, 104)) + 8), s->x[14], 8);
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0x539a))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[20])))) + ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    r_storeValue(s, addOffset(s->sp, 124), ((uint64_t)(((uint32_t)(s->x[9])))), 4);
    r_storeValue(s, ((addOffset(s->sp, 124)) + 4), ((uint64_t)(((uint32_t)(s->x[8])))), 4);
    __auto_type value27 = r_load(s, s->x[23], 4);
    s->x[8] = ((uint64_t)(((uint32_t)(value27))));
    __auto_type value28 = r_load(s, s->x[11], 4);
    s->x[9] = ((uint64_t)(((uint32_t)(value28))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) ^ ((uint64_t)(((uint32_t)(s->x[15]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) * ((uint64_t)(((uint32_t)(s->x[16]))))))))));
    __auto_type value32a = r_load(s, addOffset(s->sp, 16), 8);
    __auto_type value32b = r_load(s, ((addOffset(s->sp, 16)) + 8), 8);
    s->x[10] = ((uint64_t)(value32a));
    s->x[9] = ((uint64_t)(value32b));
    s->x[9] = ((uint64_t)(((s->x[9] + ((uint64_t)(((uint8_t)(((uint64_t)(((uint32_t)(s->x[8]))))))))))));
    __auto_type value34 = r_load(s, s->x[9], 1);
    s->x[9] = ((uint64_t)(((uint32_t)(value34))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(0x10))))))));
    __auto_type value36 = r_load(s, ((s->x[10] + ((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[9])))))))))), 1);
    s->x[9] = ((uint64_t)(((uint32_t)(value36))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0xcfaa))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) + ((uint64_t)(((uint8_t)(((uint64_t)(((uint32_t)(s->x[8]))))))))))))));
    __auto_type value40 = r_load(s, ((s->x[24] + shiftLeft(((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[8])))))))), 3, 64))), 8);
    s->x[8] = ((uint64_t)(value40));
    s->x[0] = ((uint64_t)(((s->sp + ((uint64_t)(0x68))))));
    s->x[17] = ((uint64_t)(((uint64_t)(0x425b))));
    s->x[30] = 0x1000136fc;
    next = s->x[8];
    return next;
}

uint64_t r_bb_1000136fc(RState *s) {
    uint64_t next = 0;
    s->x[3] = ((uint64_t)(((uint32_t)(((uint64_t)(0xd4cf))))));
    s->x[3] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[3])))), 0xa5c, 16, 16, 32)))));
    s->x[2] = ((uint64_t)(((uint32_t)(((uint64_t)(0xa6))))));
    s->x[1] = ((uint64_t)(((s->sp + ((uint64_t)(0x54))))));
    s->x[0] = ((uint64_t)(((s->sp + ((uint64_t)(0x68))))));
    __auto_type value5a = r_load(s, addOffset(s->sp, 48), 8);
    __auto_type value5b = r_load(s, ((addOffset(s->sp, 48)) + 8), 8);
    s->x[16] = ((uint64_t)(value5a));
    s->x[15] = ((uint64_t)(value5b));
    __auto_type value6 = r_load(s, addOffset(s->sp, 120), 4);
    s->x[8] = ((uint64_t)(((uint32_t)(value6))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x4982))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0xce75, 16, 16, 32)))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[22])))) + ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[8])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[9])))))));
    s->x[8] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "eq"))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x2025))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) * ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) ^ ((uint64_t)(((uint32_t)(s->x[20]))))))))));
    __auto_type value15 = r_load(s, ((s->x[24] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[8]))))))), 3, 64))), 8);
    s->x[8] = ((uint64_t)(value15));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0x2018))))));
    s->x[10] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[10])))), 0x318a, 16, 16, 32)))));
    s->x[17] = ((uint64_t)(((uint64_t)(0xfbca))));
    next = s->x[8];
    return next;
}

uint64_t r_bb_100013948(RState *s) {
    uint64_t next = 0;
    r_storeValue(s, addOffset(s->sp, 104), s->x[12], 8);
    s->x[13] = ((uint64_t)(((uint32_t)(((uint64_t)(0x5402))))));
    s->x[16] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[3])))) + ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    __auto_type value3 = r_load(s, addOffset(s->x[29], (-128)), 8);
    s->x[8] = ((uint64_t)(value3));
    __auto_type value4 = r_load(s, ((s->x[8] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[16]))))))), 3, 64))), 8);
    s->x[25] = ((uint64_t)(value4));
    s->x[13] = ((uint64_t)(((uint32_t)(((uint64_t)(0x42cd))))));
    s->x[17] = ((uint64_t)(((uint64_t)(0xffffffffffff862c))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[3])))) + ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    r_storeValue(s, addOffset(s->x[29], (-160)), s->x[8], 8);
    s->x[0] = ((uint64_t)(((s->x[8] + s->x[17]))));
    s->x[1] = ((uint64_t)(((uint32_t)(((uint64_t)(0xf))))));
    s->x[3] = ((uint64_t)(((uint32_t)(((uint64_t)(0xa6))))));
    s->x[4] = ((uint64_t)(((uint32_t)(((uint64_t)(0xd4cf))))));
    s->x[4] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[4])))), 0xa5c, 16, 16, 32)))));
    s->x[5] = ((uint64_t)(((uint32_t)(((uint64_t)(0xb5))))));
    s->x[6] = ((uint64_t)(((uint64_t)(0xffffffffffff20e1))));
    s->x[6] = ((uint64_t)(insertBits(s->x[6], 0xacde, 16, 16, 64)));
    s->x[7] = ((uint64_t)(((uint32_t)(((uint64_t)(0x28))))));
    s->x[19] = ((uint64_t)(((uint64_t)(0xffffffffffffa21e))));
    s->x[19] = ((uint64_t)(insertBits(s->x[19], 0xf82b, 16, 16, 64)));
    __auto_type value20 = r_load(s, addOffset(s->x[10], 6904), 8);
    s->x[17] = ((uint64_t)(value20));
    s->x[20] = ((uint64_t)(((uint64_t)(0xffffffffffff4862))));
    s->x[20] = ((uint64_t)(insertBits(s->x[20], 0xcd11, 16, 16, 64)));
    s->x[12] = ((uint64_t)(((s->x[17] + s->x[20]))));
    s->x[20] = ((uint64_t)(((uint32_t)(((uint64_t)(0xb1))))));
    __auto_type value25 = r_load(s, addOffset(s->x[10], 10840), 8);
    s->x[17] = ((uint64_t)(value25));
    s->x[21] = ((uint64_t)(((uint64_t)(0xffffffffffff614e))));
    s->x[21] = ((uint64_t)(insertBits(s->x[21], 0xe5b0, 16, 16, 64)));
    s->x[2] = ((uint64_t)(((s->x[17] + s->x[21]))));
    s->x[21] = ((uint64_t)(((uint64_t)(0xffffffffffffc1ae))));
    s->x[21] = ((uint64_t)(insertBits(s->x[21], 0xcfc4, 16, 16, 64)));
    s->x[22] = ((uint64_t)(((uint32_t)(((uint64_t)(0x7b))))));
    s->x[23] = ((uint64_t)(((uint32_t)(((uint64_t)(0xb))))));
    s->x[24] = ((uint64_t)(((uint32_t)(((uint64_t)(0x41b6))))));
    s->x[15] = ((uint64_t)(0x101072000));
    s->x[11] = ((uint64_t)(s->x[26]));
    __auto_type value36 = r_load(s, addOffset(s->x[29], (-152)), 8);
    s->x[8] = ((uint64_t)(value36));
    __auto_type value37a = r_load(s, addOffset(s->sp, 120), 8);
    __auto_type value37b = r_load(s, ((addOffset(s->sp, 120)) + 8), 8);
    s->x[13] = ((uint64_t)(value37a));
    s->x[9] = ((uint64_t)(value37b));
    s->x[17] = ((uint64_t)(((uint64_t)(0xf5d3))));
    next = s->x[25];
    return next;
}

uint64_t r_bb_100013c84(RState *s) {
    uint64_t next = 0;
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0xcb0d))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0xc3))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) * ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0xffff5107))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((uint64_t)(0xdbd2))))));
    s->x[13] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[13])))), 0x42a, 16, 16, 32)))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) + ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[9])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[13])))))));
    s->x[13] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "ge"))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((uint64_t)(0x1c54))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) + ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) ^ ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) * ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) ^ ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    __auto_type value15 = r_load(s, ((s->x[8] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[10]))))))), 3, 64))), 8);
    s->x[10] = ((uint64_t)(value15));
    s->x[17] = ((uint64_t)(((uint64_t)(0xce14))));
    next = s->x[10];
    return next;
}

uint64_t r_bb_100013d20(RState *s) {
    uint64_t next = 0;
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0x3fbf))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0xa21, 16, 16, 32)))));
    s->x[16] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) + ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0xffff6c36))))));
    s->x[1] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[1])))) + ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0x498d))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[1])))) ^ ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    __auto_type value7 = r_load(s, ((s->x[28] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[17]))))))), 3, 64))), 8);
    s->x[2] = ((uint64_t)(value7));
    s->x[0] = ((uint64_t)(s->x[22]));
    s->x[17] = ((uint64_t)(((uint64_t)(0xdcab))));
    next = s->x[2];
    return next;
}

uint64_t r_bb_1000144a4(RState *s) {
    uint64_t next = 0;
    __auto_type value0 = r_load(s, addOffset(s->x[29], (-156)), 4);
    s->x[10] = ((uint64_t)(((uint32_t)(value0))));
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0xffff61c8))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) + ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    __auto_type value3 = r_load(s, addOffset(s->sp, 28), 4);
    s->x[8] = ((uint64_t)(((uint32_t)(value3))));
    __auto_type value4 = r_load(s, ((s->x[28] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[8]))))))), 3, 64))), 8);
    s->x[11] = ((uint64_t)(value4));
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0x6964))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0x6775, 16, 16, 32)))));
    r_storeValue(s, addOffset(s->sp, 96), ((uint64_t)(((uint32_t)(s->x[8])))), 4);
    s->x[8] = ((uint64_t)(s->x[16]));
    s->x[17] = ((uint64_t)(((uint64_t)(0x2b23))));
    next = s->x[11];
    return next;
}

uint64_t r_bb_100014628(RState *s) {
    uint64_t next = 0;
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0x24ba))))));
    s->x[11] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[11])))), 0xfbd5, 16, 16, 32)))));
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0x6e92))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) + ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) + ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0x353a))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) | ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0x488e))))));
    s->x[12] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[12])))), 0x42a, 16, 16, 32)))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[9])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[12])))))));
    s->x[9] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "eq"))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0x6f))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) * ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    __auto_type value15 = r_load(s, ((s->x[8] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[9]))))))), 3, 64))), 8);
    s->x[12] = ((uint64_t)(value15));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x2))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0x6a))))));
    s->x[17] = ((uint64_t)(((uint64_t)(0xd9f8))));
    next = s->x[12];
    return next;
}

uint64_t r_bb_100016b74(RState *s) {
    uint64_t next = 0;
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0xffff9a19))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[1])))) + ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0x1242))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) | ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) - ((uint64_t)(0x215))))))));
    __auto_type value5 = r_load(s, ((s->x[28] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[16]))))))), 3, 64))), 8);
    s->x[9] = ((uint64_t)(value5));
    r_storeValue(s, addOffset(s->sp, 136), s->x[9], 8);
    __auto_type value7 = r_load(s, addOffset(s->x[25], 40), 4);
    s->x[9] = ((uint64_t)(((uint32_t)(value7))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0x1051))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[14])))) ^ ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    r_test32(s, ((uint32_t)((((uint64_t)(((uint32_t)(s->x[9])))) & ((uint64_t)(((uint32_t)(s->x[10]))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "eq"))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0x15))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) * ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[1]))))))))));
    __auto_type value15 = r_load(s, ((s->x[28] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[9]))))))), 3, 64))), 8);
    s->x[9] = ((uint64_t)(value15));
    __auto_type value16 = r_load(s, s->x[2], 4);
    s->x[10] = ((uint64_t)(((uint32_t)(value16))));
    __auto_type value17 = r_load(s, addOffset(s->x[0], 2880), 4);
    s->x[11] = ((uint64_t)(((uint32_t)(value17))));
    s->x[1] = ((uint64_t)(((uint32_t)(((uint64_t)(0xa6))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[1]))))))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) ^ ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) * ((uint64_t)(((uint32_t)(s->x[21]))))))))));
    s->x[16] = ((uint64_t)(((s->x[24] + ((uint64_t)(((uint8_t)(((uint64_t)(((uint32_t)(s->x[15]))))))))))));
    __auto_type value23 = r_load(s, s->x[16], 1);
    s->x[16] = ((uint64_t)(((uint32_t)(value23))));
    s->x[17] = ((uint64_t)(((uint32_t)(((uint64_t)(0x5d))))));
    s->x[16] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[16])))) ^ ((uint64_t)(((uint32_t)(s->x[17]))))))))));
    __auto_type value26 = r_load(s, ((s->x[27] + ((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[16])))))))))), 1);
    s->x[16] = ((uint64_t)(((uint32_t)(value26))));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) ^ ((uint64_t)(((uint32_t)(s->x[16]))))))))));
    s->x[16] = ((uint64_t)(((uint32_t)(((uint64_t)(0x1154))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[16])))) + ((uint64_t)(((uint8_t)(((uint64_t)(((uint32_t)(s->x[15]))))))))))))));
    __auto_type value30 = r_load(s, ((s->x[23] + shiftLeft(((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[15])))))))), 3, 64))), 8);
    s->x[15] = ((uint64_t)(value30));
    s->x[16] = ((uint64_t)(((uint64_t)(0xffffffffffff8aea))));
    s->x[16] = ((uint64_t)(insertBits(s->x[16], 0xf150, 16, 16, 64)));
    s->x[15] = ((uint64_t)(((s->x[15] + s->x[16]))));
    r_storeValue(s, addOffset(s->sp, 152), s->x[15], 8);
    return 0x100016c00;
}

uint64_t r_bb_100016c00(RState *s) {
    uint64_t next = 0;
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) - ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[1]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) * ((uint64_t)(((uint32_t)(s->x[21]))))))))));
    __auto_type value3 = r_load(s, addOffset(s->x[29], (-144)), 8);
    s->x[11] = ((uint64_t)(value3));
    s->x[11] = ((uint64_t)(((s->x[11] + ((uint64_t)(((uint8_t)(((uint64_t)(((uint32_t)(s->x[10]))))))))))));
    __auto_type value5 = r_load(s, s->x[11], 1);
    s->x[11] = ((uint64_t)(((uint32_t)(value5))));
    s->x[15] = ((uint64_t)(((uint32_t)(((uint64_t)(0xb5))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) ^ ((uint64_t)(((uint32_t)(s->x[15]))))))))));
    __auto_type value8 = r_load(s, ((s->x[5] + ((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[11])))))))))), 1);
    s->x[11] = ((uint64_t)(((uint32_t)(value8))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) ^ ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) & ((uint64_t)(0xff))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) + ((uint64_t)(0xb98))))))));
    __auto_type value12 = r_load(s, ((s->x[23] + shiftLeft(((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[10])))))))), 3, 64))), 8);
    s->x[10] = ((uint64_t)(value12));
    s->x[11] = ((uint64_t)(((uint64_t)(0xffffffffffffe8c5))));
    s->x[11] = ((uint64_t)(insertBits(s->x[11], 0xaf39, 16, 16, 64)));
    s->x[10] = ((uint64_t)(((s->x[10] + s->x[11]))));
    r_storeValue(s, addOffset(s->sp, 144), s->x[10], 8);
    s->x[17] = ((uint64_t)(((uint64_t)(0x934))));
    next = s->x[9];
    return next;
}

uint64_t r_bb_1000171ec(RState *s) {
    uint64_t next = 0;
    r_compare64(s, ((uint64_t)(s->x[21])), ((uint64_t)(s->x[4])));
    s->x[11] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "lo"))))));
    s->x[12] = ((uint64_t)(((s->x[8] + ((uint64_t)(0x1))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) + ((uint64_t)(((uint32_t)(s->x[30]))))))))));
    s->x[13] = ((uint64_t)(((uint64_t)(0xffffffffffff5841))));
    s->x[13] = ((uint64_t)(insertBits(s->x[13], 0xf38a, 16, 16, 64)));
    s->x[13] = ((uint64_t)(((s->x[10] + s->x[13]))));
    r_compare64(s, ((uint64_t)(s->x[12])), ((uint64_t)(s->x[13])));
    s->x[13] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "hi"))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) ^ ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((uint64_t)(0x6d0b))))));
    s->x[17] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[17])))), 0xc75, 16, 16, 32)))));
    s->x[8] = ((uint64_t)(((s->x[8] + s->x[17]))));
    r_compare64(s, ((uint64_t)(s->x[8])), ((uint64_t)(s->x[21])));
    s->x[8] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "lo"))))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[13])))))), ((uint32_t)(((uint64_t)(0x0)))));
    s->x[8] = ((uint64_t)(((uint32_t)(selectValue(r_condition(s, "ne"), ((uint64_t)(((uint32_t)(s->x[11])))), ((uint64_t)(((uint32_t)(s->x[8])))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) + ((uint64_t)(((uint32_t)(s->x[22]))))))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((uint64_t)(0x33be))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) ^ ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) * ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    __auto_type value22 = r_load(s, ((s->x[24] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[8]))))))), 3, 64))), 8);
    s->x[9] = ((uint64_t)(value22));
    s->x[8] = ((uint64_t)(s->x[12]));
    s->x[17] = ((uint64_t)(((uint64_t)(0x9cde))));
    next = s->x[9];
    return next;
}

uint64_t r_bb_10001b350(RState *s) {
    uint64_t next = 0;
    __auto_type value0 = r_load(s, addOffset(s->sp, 24), 8);
    s->x[8] = ((uint64_t)(value0));
    r_storeValue(s, addOffset(s->x[8], 60), ((uint64_t)(((uint32_t)(s->x[19])))), 4);
    __auto_type value2 = r_load(s, addOffset(s->x[29], (-96)), 8);
    s->x[8] = ((uint64_t)(value2));
    s->x[9] = ((uint64_t)(0x10106d000));
    __auto_type value4 = r_load(s, addOffset(s->x[9], 1032), 8);
    s->x[9] = ((uint64_t)(value4));
    __auto_type value5 = r_load(s, s->x[9], 8);
    s->x[9] = ((uint64_t)(value5));
    r_compare64(s, ((uint64_t)(s->x[9])), ((uint64_t)(s->x[8])));
    if (r_condition(s, "ne"))
    {
        next = 0x10001b390;
    }
    else
    {
        next = 0x10001b370;
    }
    return next;
}

uint64_t r_bb_10001b370(RState *s) {
    uint64_t next = 0;
    __auto_type value0a = r_load(s, addOffset(s->sp, 432), 8);
    __auto_type value0b = r_load(s, ((addOffset(s->sp, 432)) + 8), 8);
    s->x[29] = ((uint64_t)(value0a));
    s->x[30] = ((uint64_t)(value0b));
    __auto_type value1a = r_load(s, addOffset(s->sp, 416), 8);
    __auto_type value1b = r_load(s, ((addOffset(s->sp, 416)) + 8), 8);
    s->x[20] = ((uint64_t)(value1a));
    s->x[19] = ((uint64_t)(value1b));
    __auto_type value2a = r_load(s, addOffset(s->sp, 400), 8);
    __auto_type value2b = r_load(s, ((addOffset(s->sp, 400)) + 8), 8);
    s->x[22] = ((uint64_t)(value2a));
    s->x[21] = ((uint64_t)(value2b));
    __auto_type value3a = r_load(s, addOffset(s->sp, 384), 8);
    __auto_type value3b = r_load(s, ((addOffset(s->sp, 384)) + 8), 8);
    s->x[24] = ((uint64_t)(value3a));
    s->x[23] = ((uint64_t)(value3b));
    __auto_type value4a = r_load(s, addOffset(s->sp, 368), 8);
    __auto_type value4b = r_load(s, ((addOffset(s->sp, 368)) + 8), 8);
    s->x[26] = ((uint64_t)(value4a));
    s->x[25] = ((uint64_t)(value4b));
    __auto_type value5a = r_load(s, addOffset(s->sp, 352), 8);
    __auto_type value5b = r_load(s, ((addOffset(s->sp, 352)) + 8), 8);
    s->x[28] = ((uint64_t)(value5a));
    s->x[27] = ((uint64_t)(value5b));
    s->sp = ((uint64_t)(((s->sp + ((uint64_t)(0x1c0))))));
    next = s->x[30];
    return next;
}

uint64_t r_bb_10001bb98(RState *s) {
    uint64_t next = 0;
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x7e65))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[19])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0x8e1))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) * ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0x98ef))))));
    s->x[10] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[10])))), 0x5d42, 16, 16, 32)))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[8])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[10])))))));
    s->x[10] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "ne"))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0x239c))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) * ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[19]))))))))));
    __auto_type value12 = r_load(s, ((s->x[28] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[9]))))))), 3, 64))), 8);
    s->x[10] = ((uint64_t)(value12));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x5b3))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0x3adb, 16, 16, 32)))));
    s->x[17] = ((uint64_t)(((uint64_t)(0xbb9c))));
    next = s->x[10];
    return next;
}

uint64_t r_bb_10001bbdc(RState *s) {
    uint64_t next = 0;
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) & ((uint64_t)(0xfffffffe))))))));
    r_test32(s, ((uint32_t)((((uint64_t)(((uint32_t)(s->x[13])))) & ((uint64_t)(0x1))))));
    __auto_type value2 = r_load(s, s->x[21], 4);
    s->x[20] = ((uint64_t)(((uint32_t)(value2))));
    s->x[27] = ((uint64_t)(s->x[21]));
    s->x[21] = ((uint64_t)(((uint32_t)(selectValue(r_condition(s, "ne"), ((uint64_t)(((uint32_t)(s->x[9])))), ((uint64_t)(0)))))));
    s->x[28] = ((uint64_t)(s->x[22]));
    __auto_type value6 = r_load(s, s->x[22], 4);
    s->x[22] = ((uint64_t)(((uint32_t)(value6))));
    s->x[20] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[20])))) ^ ((uint64_t)(((uint32_t)(s->x[22]))))))))));
    s->x[20] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[20])))) ^ ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    return 0x10001bc00;
}

uint64_t r_bb_10001bc00(RState *s) {
    uint64_t next = 0;
    s->x[20] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[20])))) * ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[22] = ((uint64_t)(((s->x[14] + ((uint64_t)(((uint8_t)(((uint64_t)(((uint32_t)(s->x[20]))))))))))));
    r_test32(s, ((uint32_t)((((uint64_t)(((uint32_t)(s->x[9])))) & ((uint64_t)(0x1))))));
    __auto_type value3 = r_load(s, s->x[22], 1);
    s->x[22] = ((uint64_t)(((uint32_t)(value3))));
    s->x[22] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[22])))) ^ ((uint64_t)(0xf0))))))));
    __auto_type value5 = r_load(s, ((s->x[10] + ((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[22])))))))))), 1);
    s->x[22] = ((uint64_t)(((uint32_t)(value5))));
    s->x[20] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[22])))) ^ ((uint64_t)(((uint32_t)(s->x[20]))))))))));
    s->x[22] = ((uint64_t)(((uint32_t)(selectValue(r_condition(s, "ne"), ((uint64_t)(((uint32_t)(s->x[2])))), ((uint64_t)(0)))))));
    s->x[20] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[5])))) + ((uint64_t)(((uint8_t)(((uint64_t)(((uint32_t)(s->x[20]))))))))))))));
    __auto_type value9 = r_load(s, ((s->x[26] + shiftLeft(((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[20])))))))), 3, 64))), 8);
    s->x[20] = ((uint64_t)(value9));
    s->x[25] = ((uint64_t)(s->x[26]));
    s->x[26] = ((uint64_t)(((s->x[4] + s->x[6]))));
    s->x[20] = ((uint64_t)(((s->x[20] + s->x[26]))));
    s->x[17] = ((uint64_t)(((uint32_t)((((((uint64_t)(((uint32_t)(s->x[17])))) * ((uint64_t)(((uint32_t)(s->x[1]))))) + ((uint64_t)(((uint32_t)(s->x[21]))))))))));
    __auto_type value14 = r_load(s, s->x[20], 4);
    s->x[20] = ((uint64_t)(((uint32_t)(value14))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[20])))) * ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) + ((uint64_t)(((uint32_t)(s->x[22]))))))))));
    s->x[20] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) & ((uint64_t)(((uint32_t)(s->x[7]))))))))));
    s->x[21] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) & ((uint64_t)(((uint32_t)(s->x[23]))))))))));
    s->x[22] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) & ((uint64_t)(((uint32_t)(s->x[24]))))))))));
    s->x[26] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) & ((uint64_t)(((uint32_t)(s->x[24]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) & ((uint64_t)(((uint32_t)(s->x[0]))))))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) & ((uint64_t)(((uint32_t)(s->x[0]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) & ((uint64_t)(((uint32_t)(s->x[15]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) - ((uint64_t)(((uint32_t)(s->x[15]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) + ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[26])))) + ((uint64_t)(((uint32_t)(s->x[20]))))))))));
    s->x[26] = ((uint64_t)(s->x[25]));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) + ((uint64_t)(((uint32_t)(s->x[21]))))))))));
    s->x[20] = ((uint64_t)(((s->x[16] | s->x[3]))));
    s->x[20] = ((uint64_t)(shiftRight(s->x[20], ((int64_t)(((uint64_t)(0x3f)))), 64)));
    s->x[20] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[20])))) ^ ((uint64_t)(0x1))))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) + ((uint64_t)(((uint32_t)(s->x[22]))))))))));
    s->x[22] = ((uint64_t)(s->x[28]));
    s->x[21] = ((uint64_t)(((uint32_t)(shiftLeft(((uint64_t)(((uint32_t)(s->x[20])))), ((int64_t)(((uint64_t)(0x6)))), 32)))));
    s->x[20] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[21])))) - ((uint64_t)(((uint32_t)(s->x[20]))))))))));
    s->x[21] = ((uint64_t)(s->x[27]));
    s->x[20] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[30])))) ^ ((uint64_t)(((uint32_t)(s->x[20]))))))))));
    __auto_type value38 = r_load(s, ((s->x[19] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[20]))))))), 3, 64))), 8);
    s->x[20] = ((uint64_t)(value38));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) & ((uint64_t)(((uint32_t)(s->x[0]))))))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) + shiftLeft(((uint64_t)(((uint32_t)(s->x[9])))), 1, 32)))))));
    s->x[3] = ((uint64_t)(((s->x[3] + ((uint64_t)(0x1))))));
    s->x[16] = ((uint64_t)(((s->x[16] - ((uint64_t)(0x1))))));
    s->x[4] = ((uint64_t)(((s->x[4] - ((uint64_t)(0x4))))));
    s->x[9] = ((uint64_t)(s->x[17]));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) + ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0xa6))))));
    s->x[17] = ((uint64_t)(((uint64_t)(0xab9))));
    next = s->x[20];
    return next;
}

uint64_t r_bb_10001bd54(RState *s) {
    uint64_t next = 0;
    s->x[23] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) + ((uint64_t)(((uint32_t)(s->x[27]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) ^ ((uint64_t)(((uint32_t)(s->x[5]))))))))));
    s->x[10] = ((uint64_t)(((s->x[1] + s->x[8]))));
    __auto_type value3 = r_load(s, ((s->x[26] + s->x[8])), 1);
    s->x[12] = ((uint64_t)(((uint32_t)(value3))));
    __auto_type value4 = r_load(s, s->x[10], 1);
    s->x[10] = ((uint64_t)(((uint32_t)(value4))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) - ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) + ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[6])))) & shiftLeft(((uint64_t)(((uint32_t)(s->x[10])))), 1, 32)))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) - ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[10])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[7])))))));
    s->x[10] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "eq"))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) + ((uint64_t)(((uint32_t)(s->x[20]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) * ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    __auto_type value14 = r_load(s, ((s->x[24] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[10]))))))), 3, 64))), 8);
    s->x[10] = ((uint64_t)(value14));
    s->x[17] = ((uint64_t)(((uint64_t)(0x1602))));
    next = s->x[10];
    return next;
}

uint64_t r_bb_10001f724(RState *s) {
    uint64_t next = 0;
    r_storeValue(s, s->sp, s->x[0], 8);
    s->x[14] = ((uint64_t)(((uint64_t)(0x0))));
    __auto_type value2 = r_load(s, s->x[20], 4);
    s->x[8] = ((uint64_t)(((uint32_t)(value2))));
    s->x[11] = ((uint64_t)(0x101075000));
    __auto_type value4 = r_load(s, addOffset(s->x[11], 2880), 4);
    s->x[11] = ((uint64_t)(((uint32_t)(value4))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) + ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) ^ ((uint64_t)(((uint32_t)(s->x[26]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) * ((uint64_t)(((uint32_t)(s->x[23]))))))))));
    __auto_type value8 = r_load(s, addOffset(s->x[28], 24096), 8);
    s->x[8] = ((uint64_t)(value8));
    s->x[12] = ((uint64_t)(((s->x[11] & ((uint64_t)(0xff))))));
    s->x[8] = ((uint64_t)(((s->x[8] - shiftLeft(((uint64_t)(0x9fd)), 12, 64)))));
    s->x[8] = ((uint64_t)(((s->x[8] - ((uint64_t)(0xcfb))))));
    s->x[8] = ((uint64_t)(((s->x[8] + s->x[12]))));
    __auto_type value13 = r_load(s, s->x[8], 1);
    s->x[8] = ((uint64_t)(((uint32_t)(value13))));
    s->x[13] = ((uint64_t)(((uint32_t)(((uint64_t)(0xfb))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) ^ ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((uint64_t)(0x9898))))));
    s->x[13] = ((uint64_t)(((s->x[28] + s->x[13]))));
    __auto_type value18 = r_load(s, s->x[13], 8);
    s->x[13] = ((uint64_t)(value18));
    s->x[15] = ((uint64_t)(((uint64_t)(0xffffffffffffc916))));
    s->x[15] = ((uint64_t)(insertBits(s->x[15], 0xf3e6, 16, 16, 64)));
    s->x[13] = ((uint64_t)(((s->x[13] + s->x[15]))));
    s->x[8] = ((uint64_t)(((s->x[13] + s->x[8]))));
    __auto_type value23 = r_load(s, s->x[8], 1);
    s->x[8] = ((uint64_t)(((uint32_t)(value23))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) ^ ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) & ((uint64_t)(0xff))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) + ((uint64_t)(0xbab))))))));
    __auto_type value27 = r_load(s, ((s->x[28] + shiftLeft(((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[8])))))))), 3, 64))), 8);
    s->x[8] = ((uint64_t)(value27));
    s->x[13] = ((uint64_t)(((uint64_t)(0xffffffffffffe8c5))));
    s->x[13] = ((uint64_t)(insertBits(s->x[13], 0xaf39, 16, 16, 64)));
    s->x[8] = ((uint64_t)(((s->x[8] + s->x[13]))));
    __auto_type value31 = r_load(s, s->x[8], 4);
    s->x[13] = ((uint64_t)(signExtend32(((uint32_t)(value31)))));
    s->x[10] = ((uint64_t)(((s->x[10] + s->x[12]))));
    __auto_type value33 = r_load(s, s->x[10], 1);
    s->x[10] = ((uint64_t)(((uint32_t)(value33))));
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0x2a))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    __auto_type value36 = r_load(s, ((s->x[9] + ((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[10])))))))))), 1);
    s->x[9] = ((uint64_t)(((uint32_t)(value36))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0x10ec))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) + ((uint64_t)(((uint8_t)(((uint64_t)(((uint32_t)(s->x[9]))))))))))))));
    __auto_type value40 = r_load(s, ((s->x[28] + shiftLeft(((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[9])))))))), 3, 64))), 8);
    s->x[9] = ((uint64_t)(value40));
    s->x[10] = ((uint64_t)(((uint64_t)(0xffffffffffff8aea))));
    s->x[10] = ((uint64_t)(insertBits(s->x[10], 0xf150, 16, 16, 64)));
    s->x[9] = ((uint64_t)(((s->x[9] + s->x[10]))));
    __auto_type value44 = r_load(s, s->x[9], 8);
    s->x[10] = ((uint64_t)(value44));
    s->x[11] = ((uint64_t)(((uint64_t)(0xffffffffffff9280))));
    s->x[11] = ((uint64_t)(insertBits(s->x[11], 0xc654, 16, 16, 64)));
    s->x[11] = ((uint64_t)(((s->x[13] & s->x[11]))));
    __auto_type value48 = r_load(s, ((s->x[25] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[24]))))))), 3, 64))), 8);
    s->x[12] = ((uint64_t)(value48));
    s->x[13] = ((uint64_t)(((uint32_t)(((uint64_t)(0x4308))))));
    s->x[13] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[13])))), 0x1, 16, 16, 32)))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) ^ shiftLeft(((uint64_t)(((uint32_t)(s->x[24])))), 3, 32)))))));
    s->x[15] = ((uint64_t)(((s->x[10] + s->x[11]))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0xacb7))))));
    s->x[10] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[10])))), 0xbf5a, 16, 16, 32)))));
    return 0x10001f800;
}

uint64_t r_bb_10001f800(RState *s) {
    uint64_t next = 0;
    s->x[16] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) + ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[0] = ((uint64_t)(s->x[22]));
    __auto_type value2a = r_load(s, addOffset(s->sp, 72), 8);
    __auto_type value2b = r_load(s, ((addOffset(s->sp, 72)) + 8), 8);
    s->x[4] = ((uint64_t)(value2a));
    s->x[3] = ((uint64_t)(value2b));
    __auto_type value3a = r_load(s, addOffset(s->sp, 24), 8);
    __auto_type value3b = r_load(s, ((addOffset(s->sp, 24)) + 8), 8);
    s->x[6] = ((uint64_t)(value3a));
    s->x[21] = ((uint64_t)(value3b));
    __auto_type value4 = r_load(s, addOffset(s->sp, 16), 8);
    s->x[7] = ((uint64_t)(value4));
    s->x[17] = ((uint64_t)(((uint64_t)(0xa3d2))));
    next = s->x[12];
    return next;
}

uint64_t r_bb_10001f900(RState *s) {
    uint64_t next = 0;
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0x742))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) ^ ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(shiftLeft(((uint64_t)(((uint32_t)(s->x[10])))), ((int64_t)(((uint64_t)(0x3)))), 32)))));
    s->x[13] = ((uint64_t)(((uint32_t)(((uint64_t)(0x1f6e))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) ^ ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((uint64_t)(0x3b))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) * ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((uint64_t)(0xb702))))));
    s->x[14] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[14])))), 0xfbd5, 16, 16, 32)))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) ^ ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((uint64_t)(0xffff400e))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) - ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) + ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) + ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[9])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[12])))))));
    s->x[9] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "ls"))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0x6f))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) * ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    __auto_type value19 = r_load(s, ((s->x[8] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[9]))))))), 3, 64))), 8);
    s->x[12] = ((uint64_t)(value19));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x2))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0x6a))))));
    s->x[17] = ((uint64_t)(((uint64_t)(0xd9f8))));
    next = s->x[12];
    return next;
}

uint64_t r_bb_10001fc20(RState *s) {
    uint64_t next = 0;
    s->x[17] = ((uint64_t)(((uint32_t)(((uint64_t)(0x7db0))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((uint64_t)(0x352c))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) ^ ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((uint64_t)(0x23c5))))));
    s->x[2] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) * ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    s->x[13] = ((uint64_t)(((s->x[15] + shiftLeft(s->x[15], 1, 64)))));
    s->x[13] = ((uint64_t)(((s->x[0] + shiftLeft(s->x[13], 1, 64)))));
    __auto_type value7 = r_load(s, addOffset(s->x[13], 2), 2);
    s->x[1] = ((uint64_t)(((uint32_t)(value7))));
    s->x[14] = ((uint64_t)(((s->x[16] + shiftLeft(s->x[16], 1, 64)))));
    s->x[14] = ((uint64_t)(((s->x[0] + shiftLeft(s->x[14], 1, 64)))));
    __auto_type value10 = r_load(s, addOffset(s->x[14], 2), 2);
    s->x[16] = ((uint64_t)(((uint32_t)(value10))));
    s->x[15] = ((uint64_t)(((uint32_t)(((uint64_t)(0x4da0))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[2])))) ^ ((uint64_t)(((uint32_t)(s->x[15]))))))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) + ((uint64_t)(((uint32_t)(s->x[1]))))))))));
    s->x[0] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) & ((uint64_t)(0xffff))))))));
    s->x[3] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[16])))) - ((uint64_t)(0x87))))))));
    s->x[15] = ((uint64_t)(((uint32_t)((((((uint64_t)(((uint32_t)(s->x[15])))) >> 3)) & bitMask(13, 32))))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[15])))))), ((uint32_t)(((uint64_t)(0xf51)))));
    s->x[15] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "lo"))))));
    s->x[4] = ((uint64_t)(((uint32_t)((((((uint64_t)(((uint32_t)(s->x[3])))) >> 3)) & bitMask(13, 32))))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[4])))))), ((uint32_t)(((uint64_t)(0xf51)))));
    s->x[4] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "lo"))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[4])))) ^ ((uint64_t)(((uint32_t)(s->x[15]))))))))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[0])))))), ((uint32_t)(((uint64_t)(((uint16_t)(((uint64_t)(((uint32_t)(s->x[3])))))))))));
    s->x[0] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "lo"))))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[15])))))), ((uint32_t)(((uint64_t)(0x0)))));
    s->x[15] = ((uint64_t)(((uint32_t)(selectValue(r_condition(s, "ne"), ((uint64_t)(((uint32_t)(s->x[4])))), ((uint64_t)(((uint32_t)(s->x[0])))))))));
    s->x[0] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) + ((uint64_t)(((uint32_t)(s->x[17]))))))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[0])))) ^ ((uint64_t)(((uint32_t)(s->x[15]))))))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) & ((uint64_t)(0x1))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((uint64_t)(0x17))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) * ((uint64_t)(((uint32_t)(s->x[17]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) ^ ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    __auto_type value33 = r_load(s, ((s->x[10] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[12]))))))), 3, 64))), 8);
    s->x[12] = ((uint64_t)(value33));
    s->x[17] = ((uint64_t)(((uint64_t)(0x5326))));
    next = s->x[12];
    return next;
}

uint64_t r_bb_1000200e8(RState *s) {
    uint64_t next = 0;
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0xb3d5))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) ^ ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((uint64_t)(0xffff47e0))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) + ((uint64_t)(0x8))))))));
    s->x[1] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[19])))) & ((uint64_t)(0xff))))))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[1])))))), ((uint32_t)(((uint64_t)(((uint8_t)(((uint64_t)(((uint32_t)(s->x[17])))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "lo"))))));
    s->x[1] = ((uint64_t)(((uint32_t)(((uint64_t)(0x363b))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) * ((uint64_t)(((uint32_t)(s->x[1]))))))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) + ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) ^ ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    __auto_type value11 = r_load(s, ((s->x[20] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[14]))))))), 3, 64))), 8);
    s->x[14] = ((uint64_t)(value11));
    s->x[3] = ((uint64_t)(((uint32_t)(((uint64_t)(0x7bc5))))));
    s->x[3] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[3])))), 0xce75, 16, 16, 32)))));
    __auto_type value14 = r_load(s, addOffset(s->sp, 152), 8);
    s->x[26] = ((uint64_t)(value14));
    s->x[17] = ((uint64_t)(((uint64_t)(0x2b0f))));
    next = s->x[14];
    return next;
}

uint64_t r_bb_1000208c8(RState *s) {
    uint64_t next = 0;
    s->x[15] = ((uint64_t)(((uint32_t)(((uint64_t)(0x8aca))))));
    s->x[15] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[15])))), 0x1fb6, 16, 16, 32)))));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[14])))) ^ ((uint64_t)(((uint32_t)(s->x[15]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((uint64_t)(0x799))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) * ((uint64_t)(((uint32_t)(s->x[17]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((uint64_t)(0xafe8))))));
    s->x[17] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[17])))), 0x10e, 16, 16, 32)))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) ^ shiftRight(((uint64_t)(((uint32_t)(s->x[10])))), 2, 32)))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((uint64_t)(0x560b))))));
    s->x[17] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[17])))), 0xe194, 16, 16, 32)))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[14])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[17])))))));
    s->x[17] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "hi"))))));
    s->x[1] = ((uint64_t)(((uint32_t)(((uint64_t)(0xffff8c84))))));
    s->x[1] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) + ((uint64_t)(((uint32_t)(s->x[1]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[1])))) * ((uint64_t)(((uint32_t)(s->x[17]))))))))));
    s->x[1] = ((uint64_t)(((uint32_t)(((uint64_t)(0xaea6))))));
    s->x[1] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[1])))), 0xe049, 16, 16, 32)))));
    s->x[14] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[14])))) + ((uint64_t)(((uint32_t)(s->x[1]))))))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) ^ ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    __auto_type value19 = r_load(s, ((s->x[20] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[14]))))))), 3, 64))), 8);
    s->x[14] = ((uint64_t)(value19));
    s->x[17] = ((uint64_t)(((uint64_t)(0x9d8d))));
    next = s->x[14];
    return next;
}

uint64_t r_bb_100020b00(RState *s) {
    uint64_t next = 0;
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0xa3d4))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) ^ ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0xebc2))))));
    s->x[12] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[12])))), 0x42a, 16, 16, 32)))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) ^ ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[9])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[12])))))));
    s->x[9] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "eq"))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0x6f))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) * ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    __auto_type value10 = r_load(s, ((s->x[8] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[9]))))))), 3, 64))), 8);
    s->x[12] = ((uint64_t)(value10));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x2))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0x6a))))));
    s->x[17] = ((uint64_t)(((uint64_t)(0xd9f8))));
    next = s->x[12];
    return next;
}

uint64_t r_bb_100020bb0(RState *s) {
    uint64_t next = 0;
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0x2dfb))))));
    s->x[10] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[10])))), 0xc695, 16, 16, 32)))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) ^ ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) + shiftLeft(((uint64_t)(((uint32_t)(s->x[10])))), 1, 32)))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0x8dc9))))));
    s->x[12] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[12])))), 0xc695, 16, 16, 32)))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) ^ ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((uint64_t)(0xb05))))));
    s->x[13] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[13])))), 0x65bc, 16, 16, 32)))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) + ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[9])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[13])))))));
    s->x[13] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "lt"))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((uint64_t)(0xffffb59b))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) + ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) * ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((uint64_t)(0xe1b4))))));
    s->x[14] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[14])))), 0x396a, 16, 16, 32)))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) + ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) ^ ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    __auto_type value19 = r_load(s, ((s->x[8] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[11]))))))), 3, 64))), 8);
    s->x[11] = ((uint64_t)(value19));
    return 0x100020c00;
}

uint64_t r_bb_100020c00(RState *s) {
    uint64_t next = 0;
    s->x[17] = ((uint64_t)(((uint64_t)(0x497f))));
    next = s->x[11];
    return next;
}

uint64_t r_bb_100022238(RState *s) {
    uint64_t next = 0;
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0xffff4a37))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0x603))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[14])))) + ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) | ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0xf2d1))))));
    s->x[10] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[10])))), 0x1447, 16, 16, 32)))));
    s->x[15] = ((uint64_t)(((uint32_t)(((uint64_t)(0x20))))));
    s->x[15] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[15])))), 0x4311, 16, 16, 32)))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[14])))) + ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[3] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) | ((uint64_t)(((uint32_t)(s->x[15]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0x72ad))))));
    s->x[10] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[10])))), 0xcca2, 16, 16, 32)))));
    s->x[15] = ((uint64_t)(((uint32_t)(((uint64_t)(0x7833))))));
    s->x[15] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[15])))), 0xa796, 16, 16, 32)))));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[15]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) + ((uint64_t)(((uint32_t)(s->x[3]))))))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) + ((uint64_t)(((uint32_t)(s->x[15]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((uint64_t)(0x26fa))))));
    s->x[17] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[17])))), 0xfef0, 16, 16, 32)))));
    r_storeValue(s, addOffset(s->sp, 52), ((uint64_t)(((uint32_t)(s->x[8])))), 4);
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) + ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[10])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[17])))))));
    s->x[17] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "lo"))))));
    s->x[2] = ((uint64_t)(((uint32_t)(((uint64_t)(0xd905))))));
    s->x[2] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[2])))), 0x10f, 16, 16, 32)))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[13])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[2])))))));
    s->x[2] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "hi"))))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[10])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[15])))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0xffff81b8))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[2])))) ^ ((uint64_t)(((uint32_t)(s->x[17]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "lo"))))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[15])))))), ((uint32_t)(((uint64_t)(0x0)))));
    s->x[15] = ((uint64_t)(((uint32_t)(selectValue(r_condition(s, "ne"), ((uint64_t)(((uint32_t)(s->x[2])))), ((uint64_t)(((uint32_t)(s->x[17])))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((uint64_t)(0x6d29))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) * ((uint64_t)(((uint32_t)(s->x[17]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[14])))) + ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) ^ ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    __auto_type value37 = r_load(s, ((s->x[20] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[10]))))))), 3, 64))), 8);
    s->x[10] = ((uint64_t)(value37));
    s->x[17] = ((uint64_t)(((uint64_t)(0x2e5))));
    next = s->x[10];
    return next;
}

uint64_t r_bb_100022378(RState *s) {
    uint64_t next = 0;
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0xab15))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0x13e5, 16, 16, 32)))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0x201d))))));
    s->x[10] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[10])))), 0x318a, 16, 16, 32)))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0x7bc5))))));
    s->x[11] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[11])))), 0xce75, 16, 16, 32)))));
    __auto_type value6 = r_load(s, addOffset(s->x[29], (-200)), 4);
    s->x[8] = ((uint64_t)(((uint32_t)(value6))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[8])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[9])))))));
    s->x[8] = ((uint64_t)(((uint32_t)(selectValue(r_condition(s, "eq"), ((uint64_t)(((uint32_t)(s->x[11])))), ((uint64_t)(((uint32_t)(s->x[10])))))))));
    __auto_type value9 = r_load(s, addOffset(s->sp, 696), 8);
    s->x[9] = ((uint64_t)(value9));
    r_storeValue(s, addOffset(s->x[9], 8), ((uint64_t)(((uint32_t)(s->x[8])))), 4);
    __auto_type value11 = r_load(s, addOffset(s->x[29], (-96)), 8);
    s->x[8] = ((uint64_t)(value11));
    s->x[9] = ((uint64_t)(0x10106d000));
    __auto_type value13 = r_load(s, addOffset(s->x[9], 1032), 8);
    s->x[9] = ((uint64_t)(value13));
    __auto_type value14 = r_load(s, s->x[9], 8);
    s->x[9] = ((uint64_t)(value14));
    r_compare64(s, ((uint64_t)(s->x[9])), ((uint64_t)(s->x[8])));
    if (r_condition(s, "ne"))
    {
        next = 0x1000223dc;
    }
    else
    {
        next = 0x1000223bc;
    }
    return next;
}

uint64_t r_bb_1000223bc(RState *s) {
    uint64_t next = 0;
    s->sp = ((uint64_t)(((s->sp + ((uint64_t)(0x580))))));
    __auto_type value1a = r_load(s, addOffset(s->sp, 80), 8);
    __auto_type value1b = r_load(s, ((addOffset(s->sp, 80)) + 8), 8);
    s->x[29] = ((uint64_t)(value1a));
    s->x[30] = ((uint64_t)(value1b));
    __auto_type value2a = r_load(s, addOffset(s->sp, 64), 8);
    __auto_type value2b = r_load(s, ((addOffset(s->sp, 64)) + 8), 8);
    s->x[20] = ((uint64_t)(value2a));
    s->x[19] = ((uint64_t)(value2b));
    __auto_type value3a = r_load(s, addOffset(s->sp, 48), 8);
    __auto_type value3b = r_load(s, ((addOffset(s->sp, 48)) + 8), 8);
    s->x[22] = ((uint64_t)(value3a));
    s->x[21] = ((uint64_t)(value3b));
    __auto_type value4a = r_load(s, addOffset(s->sp, 32), 8);
    __auto_type value4b = r_load(s, ((addOffset(s->sp, 32)) + 8), 8);
    s->x[24] = ((uint64_t)(value4a));
    s->x[23] = ((uint64_t)(value4b));
    __auto_type value5a = r_load(s, addOffset(s->sp, 16), 8);
    __auto_type value5b = r_load(s, ((addOffset(s->sp, 16)) + 8), 8);
    s->x[26] = ((uint64_t)(value5a));
    s->x[25] = ((uint64_t)(value5b));
    __auto_type value6a = r_load(s, s->sp, 8);
    __auto_type value6b = r_load(s, ((s->sp) + 8), 8);
    s->x[28] = ((uint64_t)(value6a));
    s->x[27] = ((uint64_t)(value6b));
    s->sp = ((uint64_t)(((s->sp + ((uint64_t)(0x60))))));
    next = s->x[30];
    return next;
}

uint64_t r_bb_1000224f4(RState *s) {
    uint64_t next = 0;
    r_storeValue(s, addOffset(s->x[0], 8), ((uint64_t)(((uint32_t)(s->x[11])))), 4);
    s->sp = ((uint64_t)(((s->sp + ((uint64_t)(0x10))))));
    next = s->x[30];
    return next;
}

uint64_t r_bb_1000228b0(RState *s) {
    uint64_t next = 0;
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0x4931))))));
    s->x[10] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[10])))), 0x396b, 16, 16, 32)))));
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0xc570))))));
    s->x[12] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[12])))), 0x65bc, 16, 16, 32)))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[9])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[12])))))));
    s->x[12] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "lt"))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) | shiftLeft(((uint64_t)(((uint32_t)(s->x[12])))), 3, 32)))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) + ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    __auto_type value9 = r_load(s, ((s->x[8] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[10]))))))), 3, 64))), 8);
    s->x[10] = ((uint64_t)(value9));
    s->x[17] = ((uint64_t)(((uint64_t)(0x9828))));
    next = s->x[10];
    return next;
}

uint64_t r_bb_10002585c(RState *s) {
    uint64_t next = 0;
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0xffff7e17))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[25])))) ^ ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    __auto_type value2 = r_load(s, addOffset(s->x[24], 8), 8);
    s->x[11] = ((uint64_t)(value2));
    r_compare64(s, ((uint64_t)(s->x[11])), ((uint64_t)(((uint64_t)(0x0)))));
    s->x[11] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "eq"))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0x7f9b))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) + ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) + ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) * ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    __auto_type value10 = r_load(s, ((s->x[27] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[9]))))))), 3, 64))), 8);
    s->x[9] = ((uint64_t)(value10));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0x201c))))));
    s->x[10] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[10])))), 0x318a, 16, 16, 32)))));
    s->x[17] = ((uint64_t)(((uint64_t)(0x65ff))));
    next = s->x[9];
    return next;
}

uint64_t r_bb_100026574(RState *s) {
    uint64_t next = 0;
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) * ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)((((((uint64_t)(((uint32_t)(s->x[12])))) * ((uint64_t)(((uint32_t)(s->x[12]))))) + ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)((((((uint64_t)(((uint32_t)(s->x[14])))) * ((uint64_t)(((uint32_t)(s->x[14]))))) + ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0x5))))));
    s->x[12] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[12])))), 0x2, 16, 16, 32)))));
    s->x[12] = ((uint64_t)((((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[11])))))))) * ((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[12])))))))))));
    s->x[12] = ((uint64_t)(shiftRight(s->x[12], ((int64_t)(((uint64_t)(0x20)))), 64)));
    s->x[14] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) - ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) + shiftRight(((uint64_t)(((uint32_t)(s->x[14])))), 1, 32)))))));
    s->x[12] = ((uint64_t)(((uint32_t)(shiftRight(((uint64_t)(((uint32_t)(s->x[12])))), ((int64_t)(((uint64_t)(0xe)))), 32)))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) - shiftLeft(((uint64_t)(((uint32_t)(s->x[12])))), 15, 32)))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) + ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(shiftLeft(((uint64_t)(((uint32_t)(s->x[11])))), ((int64_t)(((uint64_t)(0x1)))), 32)))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) & ((uint64_t)(0x78))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) - ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) + ((uint64_t)(0x3c))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0xe7d7))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) ^ ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((uint64_t)(0x1829))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) + ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((uint64_t)(0x1feb))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) ^ ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((uint64_t)(0xffffe015))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[14])))) + ((uint64_t)(((uint32_t)(s->x[15]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) ^ ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) ^ ((uint64_t)(0xf800))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) + ((uint64_t)(0x800))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) ^ ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[12] = ((uint64_t)(((s->sp + ((uint64_t)(0x8))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((uint64_t)(0x9670))))));
    s->x[14] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[14])))), 0x3e4c, 16, 16, 32)))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) ^ ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((uint64_t)(0x9c00))))));
    s->x[14] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[14])))), 0x1ab3, 16, 16, 32)))));
    s->x[14] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[14])))) | shiftLeft(((uint64_t)(((uint32_t)(s->x[12])))), 1, 32)))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((uint64_t)(0x3200))))));
    s->x[15] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[15])))), 0x72a6, 16, 16, 32)))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[14])))) - ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) + ((uint64_t)(((uint32_t)(s->x[15]))))))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((uint64_t)(0xf4fa))))));
    s->x[14] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[14])))), 0x2b6b, 16, 16, 32)))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) ^ ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((uint64_t)(0x29c1))))));
    s->x[14] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[14])))), 0x316f, 16, 16, 32)))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) * ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((uint64_t)(0x34b8))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) + ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[14])))) + ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    r_storeValue(s, addOffset(s->sp, 16), ((uint64_t)(((uint32_t)(s->x[13])))), 4);
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) - ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) + ((uint64_t)(0x535))))))));
    r_storeValue(s, addOffset(s->sp, 12), ((uint64_t)(((uint32_t)(s->x[11])))), 2);
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0xffffa90e))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) - ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    r_storeValue(s, addOffset(s->sp, 20), ((uint64_t)(((uint32_t)(s->x[11])))), 2);
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0x2468))))));
    s->x[11] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[11])))), 0x690c, 16, 16, 32)))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) + ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    r_storeValue(s, addOffset(s->sp, 8), ((uint64_t)(((uint32_t)(s->x[11])))), 4);
    __auto_type value59 = r_load(s, s->x[8], 4);
    s->x[8] = ((uint64_t)(((uint32_t)(value59))));
    __auto_type value60 = r_load(s, s->x[9], 4);
    s->x[9] = ((uint64_t)(((uint32_t)(value60))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0xa6))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) + ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) ^ ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0xd4cf))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0xa5c, 16, 16, 32)))));
    s->x[11] = ((uint64_t)(0x10105e000));
    s->x[11] = ((uint64_t)(((s->x[11] + ((uint64_t)(0x4e0))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) * ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    __auto_type value69 = r_load(s, addOffset(s->x[11], 10192), 8);
    s->x[9] = ((uint64_t)(value69));
    s->x[9] = ((uint64_t)(((s->x[9] + ((uint64_t)(((uint8_t)(((uint64_t)(((uint32_t)(s->x[8]))))))))))));
    s->x[12] = ((uint64_t)(((uint64_t)(0xffffffffffffa2f9))));
    s->x[12] = ((uint64_t)(insertBits(s->x[12], 0xc10d, 16, 16, 64)));
    s->x[9] = ((uint64_t)(((s->x[9] + s->x[12]))));
    __auto_type value74 = r_load(s, s->x[9], 1);
    s->x[9] = ((uint64_t)(((uint32_t)(value74))));
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0x35))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    __auto_type value77 = r_load(s, s->x[11], 8);
    s->x[11] = ((uint64_t)(value77));
    s->x[12] = ((uint64_t)(((uint64_t)(0xfffffffffffffd81))));
    s->x[12] = ((uint64_t)(insertBits(s->x[12], 0x9f79, 16, 16, 64)));
    s->x[11] = ((uint64_t)(((s->x[11] + s->x[12]))));
    s->x[9] = ((uint64_t)(((s->x[11] + s->x[9]))));
    __auto_type value82 = r_load(s, s->x[9], 1);
    s->x[9] = ((uint64_t)(((uint32_t)(value82))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0xcf36))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) + ((uint64_t)(((uint8_t)(((uint64_t)(((uint32_t)(s->x[8]))))))))))))));
    __auto_type value86 = r_load(s, ((s->x[10] + shiftLeft(((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[8])))))))), 3, 64))), 8);
    s->x[8] = ((uint64_t)(value86));
    s->x[0] = ((uint64_t)(((s->sp + ((uint64_t)(0x8))))));
    s->x[17] = ((uint64_t)(((uint64_t)(0xb7e3))));
    s->x[30] = 0x1000266dc;
    next = s->x[8];
    return next;
}

uint64_t r_bb_1000266dc(RState *s) {
    uint64_t next = 0;
    __auto_type value0 = r_load(s, addOffset(s->sp, 14), 2);
    s->x[8] = ((uint64_t)(((uint32_t)(value0))));
    r_storeValue(s, addOffset(s->x[19], 12), ((uint64_t)(((uint32_t)(s->x[8])))), 2);
    __auto_type value2 = r_load(s, addOffset(s->sp, 24), 8);
    s->x[8] = ((uint64_t)(value2));
    s->x[9] = ((uint64_t)(0x10106d000));
    __auto_type value4 = r_load(s, addOffset(s->x[9], 1032), 8);
    s->x[9] = ((uint64_t)(value4));
    __auto_type value5 = r_load(s, s->x[9], 8);
    s->x[9] = ((uint64_t)(value5));
    r_compare64(s, ((uint64_t)(s->x[9])), ((uint64_t)(s->x[8])));
    if (r_condition(s, "ne"))
    {
        next = 0x10002670c;
    }
    else
    {
        next = 0x1000266fc;
    }
    return next;
}

uint64_t r_bb_1000266fc(RState *s) {
    uint64_t next = 0;
    __auto_type value0a = r_load(s, addOffset(s->sp, 48), 8);
    __auto_type value0b = r_load(s, ((addOffset(s->sp, 48)) + 8), 8);
    s->x[29] = ((uint64_t)(value0a));
    s->x[30] = ((uint64_t)(value0b));
    __auto_type value1a = r_load(s, addOffset(s->sp, 32), 8);
    __auto_type value1b = r_load(s, ((addOffset(s->sp, 32)) + 8), 8);
    s->x[20] = ((uint64_t)(value1a));
    s->x[19] = ((uint64_t)(value1b));
    s->sp = ((uint64_t)(((s->sp + ((uint64_t)(0x40))))));
    next = s->x[30];
    return next;
}

uint64_t r_bb_100026b8c(RState *s) {
    uint64_t next = 0;
    s->sp = ((uint64_t)(((s->sp + ((uint64_t)(0x10))))));
    next = s->x[30];
    return next;
}

uint64_t r_bb_100029a00(RState *s) {
    uint64_t next = 0;
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0x7bc5))))));
    s->x[11] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[11])))), 0xce75, 16, 16, 32)))));
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0x3f29))))));
    s->x[12] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[12])))), 0xd7ea, 16, 16, 32)))));
    r_storeValue(s, s->x[8], ((uint64_t)(((uint32_t)(s->x[11])))), 4);
    r_storeValue(s, ((s->x[8]) + 4), ((uint64_t)(((uint32_t)(s->x[12])))), 4);
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0x5503))))));
    s->x[12] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[12])))), 0xfbda, 16, 16, 32)))));
    s->x[13] = ((uint64_t)(((uint32_t)(((uint64_t)(0x56a5))))));
    s->x[13] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[13])))), 0xd8bc, 16, 16, 32)))));
    r_storeValue(s, addOffset(s->x[8], 8), ((uint64_t)(((uint32_t)(s->x[12])))), 4);
    r_storeValue(s, ((addOffset(s->x[8], 8)) + 4), ((uint64_t)(((uint32_t)(s->x[13])))), 4);
    s->x[12] = ((uint64_t)(((uint64_t)(0x6d5))));
    s->x[12] = ((uint64_t)(insertBits(s->x[12], 0x59c6, 16, 16, 64)));
    s->x[12] = ((uint64_t)(insertBits(s->x[12], 0xd406, 32, 16, 64)));
    s->x[12] = ((uint64_t)(insertBits(s->x[12], 0x41a5, 48, 16, 64)));
    r_storeValue(s, addOffset(s->x[8], 32), s->x[12], 8);
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0x1b8b))))));
    s->x[12] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[12])))), 0x1003, 16, 16, 32)))));
    r_storeValue(s, addOffset(s->x[8], 16), ((uint64_t)(((uint32_t)(s->x[11])))), 4);
    r_storeValue(s, ((addOffset(s->x[8], 16)) + 4), ((uint64_t)(((uint32_t)(s->x[11])))), 4);
    r_storeValue(s, addOffset(s->x[8], 24), ((uint64_t)(((uint32_t)(s->x[11])))), 4);
    r_storeValue(s, addOffset(s->x[8], 40), ((uint64_t)(((uint32_t)(s->x[11])))), 4);
    r_storeValue(s, ((addOffset(s->x[8], 40)) + 4), ((uint64_t)(((uint32_t)(s->x[11])))), 4);
    r_storeValue(s, addOffset(s->x[8], 48), ((uint64_t)(((uint32_t)(s->x[11])))), 4);
    r_storeValue(s, ((addOffset(s->x[8], 48)) + 4), ((uint64_t)(((uint32_t)(s->x[11])))), 4);
    r_storeValue(s, addOffset(s->x[8], 56), ((uint64_t)(0)), 8);
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0xff21))))));
    s->x[11] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[11])))), 0xa7b1, 16, 16, 32)))));
    r_storeValue(s, addOffset(s->x[8], 64), ((uint64_t)(((uint32_t)(s->x[12])))), 4);
    r_storeValue(s, ((addOffset(s->x[8], 64)) + 4), ((uint64_t)(((uint32_t)(s->x[11])))), 4);
    __auto_type value25 = r_load(s, ((s->x[10] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[9]))))))), 3, 64))), 8);
    s->x[8] = ((uint64_t)(value25));
    s->x[17] = ((uint64_t)(((uint64_t)(0xb24))));
    next = s->x[8];
    return next;
}

uint64_t r_bb_100029bf8(RState *s) {
    uint64_t next = 0;
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0xb8ec))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    return 0x100029c00;
}

uint64_t r_bb_100029c00(RState *s) {
    uint64_t next = 0;
    __auto_type value0 = r_load(s, addOffset(s->x[1], 40), 1);
    s->x[9] = ((uint64_t)(((uint32_t)(value0))));
    r_test32(s, ((uint32_t)((((uint64_t)(((uint32_t)(s->x[9])))) & ((uint64_t)(0x4))))));
    s->x[9] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "eq"))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) & ((uint64_t)(0x1))))))));
    s->x[13] = ((uint64_t)(((uint32_t)(shiftLeft(((uint64_t)(((uint32_t)(s->x[9])))), ((int64_t)(((uint64_t)(0x4)))), 32)))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) - ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    __auto_type value8 = r_load(s, ((s->x[22] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[9]))))))), 3, 64))), 8);
    s->x[9] = ((uint64_t)(value8));
    s->x[17] = ((uint64_t)(((uint64_t)(0xcff0))));
    next = s->x[9];
    return next;
}

uint64_t r_bb_10002a424(RState *s) {
    uint64_t next = 0;
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0xc277))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0x13c, 16, 16, 32)))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0xf6fd))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0xfec2, 16, 16, 32)))));
    __auto_type value4a = r_load(s, addOffset(s->sp, 136), 4);
    __auto_type value4b = r_load(s, ((addOffset(s->sp, 136)) + 4), 4);
    s->x[10] = ((uint64_t)(((uint32_t)(value4a))));
    s->x[12] = ((uint64_t)(((uint32_t)(value4b))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) + ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) & ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0xcef8))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0xfb5c, 16, 16, 32)))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((uint64_t)(0x90d0))))));
    s->x[13] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[13])))), 0xf6b8, 16, 16, 32)))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) & shiftLeft(((uint64_t)(((uint32_t)(s->x[10])))), 1, 32)))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((uint64_t)(0xfb98))))));
    s->x[15] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[15])))), 0x7dbf, 16, 16, 32)))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) + ((uint64_t)(((uint32_t)(s->x[15]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) + ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    r_storeValue(s, addOffset(s->x[29], (-160)), ((uint64_t)(((uint32_t)(s->x[8])))), 4);
    s->x[13] = ((uint64_t)(((uint32_t)(((uint64_t)(0xffff827e))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) + ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    __auto_type value20 = r_load(s, addOffset(s->sp, 8), 8);
    s->x[15] = ((uint64_t)(value20));
    s->x[13] = ((uint64_t)(((uint32_t)(shiftLeft(((uint64_t)(((uint32_t)(s->x[15])))), ((int64_t)(((uint64_t)(((uint32_t)(s->x[13])))))), 32)))));
    s->x[15] = ((uint64_t)(((uint32_t)(((uint64_t)(0x62cc))))));
    s->x[15] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[15])))), 0x8d5f, 16, 16, 32)))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) & ((uint64_t)(((uint32_t)(s->x[15]))))))))));
    __auto_type value25 = r_load(s, addOffset(s->sp, 28), 4);
    s->x[15] = ((uint64_t)(((uint32_t)(value25))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) + ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) - ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((uint64_t)(0x697e))))));
    s->x[15] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[15])))), 0x3351, 16, 16, 32)))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0xb166))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0x46af, 16, 16, 32)))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) + ((uint64_t)(((uint32_t)(s->x[15]))))))))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[13])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[9])))))));
    s->x[15] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "ne"))))));
    s->x[16] = ((uint64_t)(((uint32_t)(((uint64_t)(0x2d))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) * ((uint64_t)(((uint32_t)(s->x[16]))))))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) ^ ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    __auto_type value38 = r_load(s, addOffset(s->x[29], (-128)), 8);
    s->x[16] = ((uint64_t)(value38));
    __auto_type value39 = r_load(s, ((s->x[16] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[15]))))))), 3, 64))), 8);
    s->x[15] = ((uint64_t)(value39));
    s->x[27] = ((uint64_t)(0x101072000));
    __auto_type value41 = r_load(s, addOffset(s->sp, 112), 8);
    s->x[10] = ((uint64_t)(value41));
    s->x[17] = ((uint64_t)(((uint64_t)(0x7da2))));
    next = s->x[15];
    return next;
}

uint64_t r_bb_10002aba8(RState *s) {
    uint64_t next = 0;
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0x8c40))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((uint64_t)(0x814))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[1])))) + ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[23] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) | ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    __auto_type value4 = r_load(s, s->x[2], 8);
    s->x[13] = ((uint64_t)(value4));
    __auto_type value5 = r_load(s, s->sp, 8);
    s->x[28] = ((uint64_t)(value5));
    __auto_type value6 = r_load(s, addOffset(s->x[28], 2), 1);
    s->x[11] = ((uint64_t)(((uint32_t)(value6))));
    __auto_type value7 = r_load(s, s->x[3], 8);
    s->x[15] = ((uint64_t)(value7));
    s->x[9] = ((uint64_t)(((s->x[15] + s->x[9]))));
    __auto_type value9 = r_load(s, s->x[9], 1);
    s->x[9] = ((uint64_t)(((uint32_t)(value9))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) + ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((uint64_t)(0x203))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) * ((uint64_t)(((uint32_t)(s->x[15]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(shiftRight(((uint64_t)(((uint32_t)(s->x[17])))), ((int64_t)(((uint64_t)(0x11)))), 32)))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) - shiftLeft(((uint64_t)(((uint32_t)(s->x[17])))), 8, 32)))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) + ((uint64_t)(((uint32_t)(s->x[17]))))))))));
    s->x[11] = ((uint64_t)(((s->x[13] + ((uint64_t)(((uint16_t)(((uint64_t)(((uint32_t)(s->x[11]))))))))))));
    __auto_type value17 = r_load(s, s->x[11], 1);
    s->x[11] = ((uint64_t)(((uint32_t)(value17))));
    s->x[17] = ((uint64_t)(((uint32_t)(((uint64_t)(0xffffffda))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) & ((uint64_t)(((uint32_t)(s->x[17]))))))))));
    s->x[21] = ((uint64_t)(((uint32_t)(((uint64_t)(0xffffffa3))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) ^ ((uint64_t)(((uint32_t)(s->x[21]))))))))));
    return 0x10002ac00;
}
