// Fixed native recovery blocks; generated from the verified 26A428 path.
#include "native-runtime.h"
uint64_t r_bb_1007f7e88(RState *s) {
    uint64_t next = 0;
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x11e0))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0x4c4b, 16, 16, 32)))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0xdfbe))))));
    s->x[11] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[11])))), 0xb3b4, 16, 16, 32)))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) + ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) & ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0x1303))))));
    s->x[11] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[11])))), 0xe3d7, 16, 16, 32)))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[8])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[11])))))));
    s->x[11] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "lt"))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0xffff60a8))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) + ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) * ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) ^ ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    __auto_type value14 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[12] = ((uint64_t)(value14));
    __auto_type value15 = r_load(s, ((s->x[12] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[11]))))))), 3, 64))), 8);
    s->x[11] = ((uint64_t)(value15));
    s->x[17] = ((uint64_t)(((uint64_t)(0xf1cc))));
    next = s->x[11];
    return next;
}

uint64_t r_bb_1007fc2f0(RState *s) {
    uint64_t next = 0;
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0x261f))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) ^ ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x27))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) * ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) - ((uint64_t)(0x5d7))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x8080))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) | ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    __auto_type value7 = r_load(s, addOffset(s->x[19], 11), 1);
    s->x[9] = ((uint64_t)(((uint32_t)(value7))));
    __auto_type value8 = r_load(s, addOffset(s->x[24], 11), 1);
    s->x[10] = ((uint64_t)(((uint32_t)(value8))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) + ((uint64_t)(0x53))))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[14])))) ^ ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[11])))))), ((uint32_t)(((uint64_t)(((uint8_t)(((uint64_t)(((uint32_t)(s->x[14])))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "eq"))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((uint64_t)(0xb7b1))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) * ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) ^ ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    __auto_type value17 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[12] = ((uint64_t)(value17));
    __auto_type value18 = r_load(s, ((s->x[12] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[11]))))))), 3, 64))), 8);
    s->x[12] = ((uint64_t)(value18));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0xb))))));
    s->x[17] = ((uint64_t)(((uint64_t)(0xd55f))));
    next = s->x[12];
    return next;
}

uint64_t r_bb_1007fcb5c(RState *s) {
    uint64_t next = 0;
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0x108))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) | ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0x17a9))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) ^ ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((uint64_t)(0x3939))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) * ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((uint64_t)(0x4ba9))))));
    s->x[14] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[14])))), 0x5053, 16, 16, 32)))));
    s->x[14] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[19])))) ^ ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((uint64_t)(0x1ffc))))));
    s->x[15] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[15])))), 0xafac, 16, 16, 32)))));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) ^ ((uint64_t)(((uint32_t)(s->x[15]))))))))));
    s->x[16] = ((uint64_t)(((uint32_t)(((uint64_t)(0xc230))))));
    s->x[16] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[16])))), 0x8e91, 16, 16, 32)))));
    s->x[16] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[19])))) ^ ((uint64_t)(((uint32_t)(s->x[16]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((uint64_t)(0x3dd0))))));
    s->x[17] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[17])))), 0x716e, 16, 16, 32)))));
    s->x[16] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[16])))) + ((uint64_t)(((uint32_t)(s->x[17]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((uint64_t)(0xf25c))))));
    s->x[17] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[17])))), 0x10b7, 16, 16, 32)))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[19])))) ^ ((uint64_t)(((uint32_t)(s->x[17]))))))))));
    s->x[0] = ((uint64_t)(((uint32_t)(((uint64_t)(0xda4))))));
    s->x[0] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[0])))), 0xef48, 16, 16, 32)))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) + ((uint64_t)(((uint32_t)(s->x[0]))))))))));
    s->x[16] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) ^ ((uint64_t)(((uint32_t)(s->x[16]))))))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) + ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[16])))) ^ ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    __auto_type value27 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[15] = ((uint64_t)(value27));
    __auto_type value28 = r_load(s, ((s->x[15] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[13]))))))), 3, 64))), 8);
    s->x[13] = ((uint64_t)(value28));
    s->x[17] = ((uint64_t)(((uint64_t)(0xc048))));
    next = s->x[13];
    return next;
}

uint64_t r_bb_1007fd000(RState *s) {
    uint64_t next = 0;
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0x65e0))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0x710b, 16, 16, 32)))));
    s->x[25] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[22])))) + ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0xd41e))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0x710b, 16, 16, 32)))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[22])))) + ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    __auto_type value6 = r_load(s, addOffset(s->sp, 24344), 8);
    s->x[20] = ((uint64_t)(value6));
    __auto_type value7 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[9] = ((uint64_t)(value7));
    __auto_type value8 = r_load(s, ((s->x[9] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[8]))))))), 3, 64))), 8);
    s->x[8] = ((uint64_t)(value8));
    s->x[17] = ((uint64_t)(((uint64_t)(0x9514))));
    next = s->x[8];
    return next;
}

uint64_t r_bb_1007fd3e0(RState *s) {
    uint64_t next = 0;
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0xa6f0))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0x8ef4, 16, 16, 32)))));
    __auto_type value2 = r_load(s, addOffset(s->sp, 3544), 4);
    s->x[12] = ((uint64_t)(((uint32_t)(value2))));
    s->x[25] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) ^ ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0x88ee))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0x8ef4, 16, 16, 32)))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) ^ ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0xfcd7))))));
    return 0x1007fd400;
}

uint64_t r_bb_1007fd400(RState *s) {
    uint64_t next = 0;
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0x710b, 16, 16, 32)))));
    r_storeValue(s, addOffset(s->sp, 10424), s->x[20], 8);
    r_compare64(s, ((uint64_t)(s->x[20])), ((uint64_t)(((uint64_t)(0x0)))));
    s->x[10] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "eq"))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) & ((uint64_t)(0x1))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0xffffd69a))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) + ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) * ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) + ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    __auto_type value11 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[10] = ((uint64_t)(value11));
    __auto_type value12 = r_load(s, ((s->x[10] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[9]))))))), 3, 64))), 8);
    s->x[10] = ((uint64_t)(value12));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x2011))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0x318a, 16, 16, 32)))));
    s->x[17] = ((uint64_t)(((uint64_t)(0xe8b7))));
    next = s->x[10];
    return next;
}

uint64_t r_bb_1007fd600(RState *s) {
    uint64_t next = 0;
    s->x[20] = ((uint64_t)(((uint64_t)(0x0))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x1e1))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    __auto_type value3 = r_load(s, addOffset(s->sp, 2776), 8);
    s->x[10] = ((uint64_t)(value3));
    __auto_type value4 = r_load(s, s->x[10], 1);
    s->x[10] = ((uint64_t)(((uint32_t)(value4))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) + ((uint64_t)(0x1))))))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[10])))))), ((uint32_t)(((uint64_t)(((uint8_t)(((uint64_t)(((uint32_t)(s->x[11])))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "eq"))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0xd852))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) * ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    __auto_type value11 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[10] = ((uint64_t)(value11));
    __auto_type value12 = r_load(s, ((s->x[10] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[8]))))))), 3, 64))), 8);
    s->x[8] = ((uint64_t)(value12));
    s->x[17] = ((uint64_t)(((uint64_t)(0x377c))));
    next = s->x[8];
    return next;
}

uint64_t r_bb_1007fd6fc(RState *s) {
    uint64_t next = 0;
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0xf82a))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0xebf, 16, 16, 32)))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x2140))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0x8034, 16, 16, 32)))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) + ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) | ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x9609))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0x710b, 16, 16, 32)))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0x7bc5))))));
    s->x[10] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[10])))), 0xce75, 16, 16, 32)))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[14])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[10])))))));
    s->x[10] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "eq"))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) + ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) ^ ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0x1))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) & ~(((uint64_t)(((uint32_t)(s->x[9])))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) | shiftLeft(((uint64_t)(((uint32_t)(s->x[9])))), 3, 32)))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    __auto_type value18 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[10] = ((uint64_t)(value18));
    __auto_type value19 = r_load(s, ((s->x[10] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[9]))))))), 3, 64))), 8);
    s->x[9] = ((uint64_t)(value19));
    s->x[17] = ((uint64_t)(((uint64_t)(0x57ac))));
    next = s->x[9];
    return next;
}

uint64_t r_bb_1007fda90(RState *s) {
    uint64_t next = 0;
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0xa169))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0x8ef4, 16, 16, 32)))));
    __auto_type value2 = r_load(s, addOffset(s->sp, 3544), 4);
    s->x[12] = ((uint64_t)(((uint32_t)(value2))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) ^ ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x8eb))))));
    s->x[23] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) * ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0x87a7))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0x710b, 16, 16, 32)))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x8031))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0x710b, 16, 16, 32)))));
    r_storeValue(s, addOffset(s->sp, 10336), ((uint64_t)(((uint32_t)(s->x[21])))), 4);
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0xa02b))))));
    s->x[10] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[10])))), 0x5d42, 16, 16, 32)))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) + ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) ^ ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[23]))))))))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[21])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[10])))))));
    s->x[10] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "eq"))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0x56))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) * ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) + ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    __auto_type value22 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[10] = ((uint64_t)(value22));
    __auto_type value23 = r_load(s, ((s->x[10] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[9]))))))), 3, 64))), 8);
    s->x[9] = ((uint64_t)(value23));
    s->x[17] = ((uint64_t)(((uint64_t)(0xd09f))));
    next = s->x[9];
    return next;
}

uint64_t r_bb_1007fdcb8(RState *s) {
    uint64_t next = 0;
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0x9ce2))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0x8ef4, 16, 16, 32)))));
    s->x[25] = ((uint64_t)(((s->sp + shiftLeft(((uint64_t)(0x2)), 12, 64)))));
    s->x[25] = ((uint64_t)(((s->x[25] + ((uint64_t)(0x3ec))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0xb932))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0x8ef4, 16, 16, 32)))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[21])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[22] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[21])))) + ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[22]))))))))));
    __auto_type value9 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[9] = ((uint64_t)(value9));
    __auto_type value10 = r_load(s, ((s->x[9] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[8]))))))), 3, 64))), 8);
    s->x[9] = ((uint64_t)(value10));
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0x8e34))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0x340, 16, 16, 32)))));
    s->x[17] = ((uint64_t)(((uint64_t)(0x86a3))));
    next = s->x[9];
    return next;
}

uint64_t r_bb_1007fdef0(RState *s) {
    uint64_t next = 0;
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0xbb0b))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0x710b, 16, 16, 32)))));
    __auto_type value2 = r_load(s, addOffset(s->sp, 3296), 8);
    s->x[9] = ((uint64_t)(value2));
    __auto_type value3 = r_load(s, s->x[9], 4);
    s->x[9] = ((uint64_t)(((uint32_t)(value3))));
    __auto_type value4 = r_load(s, addOffset(s->sp, 3288), 8);
    s->x[10] = ((uint64_t)(value4));
    __auto_type value5 = r_load(s, s->x[10], 8);
    s->x[10] = ((uint64_t)(value5));
    s->x[9] = ((uint64_t)(((uint32_t)(shiftRight(((uint64_t)(((uint32_t)(s->x[9])))), ((int64_t)(((uint64_t)(0x2)))), 32)))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0x6838))))));
    s->x[11] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[11])))), 0xb928, 16, 16, 32)))));
    s->x[12] = ((uint64_t)(((uint32_t)(unsignedDivide(((uint64_t)(((uint32_t)(s->x[11])))), ((uint64_t)(((uint32_t)(s->x[9])))), 32)))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) - (((uint64_t)(((uint32_t)(s->x[12])))) * ((uint64_t)(((uint32_t)(s->x[9])))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) & ((uint64_t)(0x3ffffffc))))))));
    __auto_type value12 = r_load(s, ((s->x[10] + shiftLeft(((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[11])))))))), 2, 64))), 4);
    s->x[11] = ((uint64_t)(((uint32_t)(value12))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) - ((uint64_t)(0x1))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) & ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) & ((uint64_t)(0xffff))))))));
    s->x[9] = ((uint64_t)(((((s->x[9]) & bitMask(32, 64))) << 2)));
    __auto_type value17 = r_load(s, ((s->x[10] + s->x[9])), 2);
    s->x[9] = ((uint64_t)(((uint32_t)(value17))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0x149e))))));
    s->x[10] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[10])))), 0x710c, 16, 16, 32)))));
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0x5c66))))));
    __auto_type value21 = r_load(s, addOffset(s->sp, 3544), 4);
    s->x[13] = ((uint64_t)(((uint32_t)(value21))));
    s->x[19] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) + ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[19])))) ^ ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(shiftRight(((uint64_t)(((uint32_t)(s->x[11])))), ((int64_t)(((uint64_t)(((uint32_t)(s->x[8])))))), 32)))));
    s->x[8] = ((uint64_t)(((uint32_t)((~(((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) & ~(((uint64_t)(((uint32_t)(s->x[9])))))))))));
    __auto_type value27 = r_load(s, addOffset(s->sp, 2416), 8);
    s->x[16] = ((uint64_t)(value27));
    __auto_type value28 = r_load(s, s->x[16], 4);
    s->x[9] = ((uint64_t)(((uint32_t)(value28))));
    __auto_type value29 = r_load(s, addOffset(s->sp, 2432), 8);
    s->x[15] = ((uint64_t)(value29));
    __auto_type value30 = r_load(s, ((s->x[15] + shiftLeft(s->x[9], 2, 64))), 4);
    s->x[11] = ((uint64_t)(((uint32_t)(value30))));
    __auto_type result31 = ((uint32_t)((((uint64_t)(((uint32_t)(s->x[8])))) & ((uint64_t)(0xffff)))));
    s->x[8] = ((uint64_t)(((uint32_t)(result31))));
    r_test32(s, result31);
    s->x[8] = ((uint64_t)(((uint32_t)((((((uint64_t)(((uint32_t)(s->x[8])))) * ((uint64_t)(((uint32_t)(s->x[11]))))) + ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(selectValue(r_condition(s, "eq"), ((uint64_t)(((uint32_t)(s->x[11])))), ((uint64_t)(0)))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) + ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) * ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    r_storeValue(s, ((s->x[15] + shiftLeft(s->x[9], 2, 64))), ((uint64_t)(((uint32_t)(s->x[8])))), 4);
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) + ((uint64_t)(0x1))))))));
    __auto_type value38 = r_load(s, addOffset(s->sp, 2424), 8);
    s->x[8] = ((uint64_t)(value38));
    __auto_type value39 = r_load(s, s->x[8], 1);
    s->x[11] = ((uint64_t)(((uint32_t)(value39))));
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0x2042))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0x318a, 16, 16, 32)))));
    s->x[8] = ((uint64_t)(((uint32_t)(selectValue(r_condition(s, "eq"), ((uint64_t)(((uint32_t)(s->x[14])))), ((uint64_t)(((uint32_t)(s->x[8])))))))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[11])))))), ((uint32_t)(((uint64_t)(0x0)))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0x6))))));
    s->x[11] = ((uint64_t)(((uint32_t)(selectValue(r_condition(s, "ne"), ((((uint64_t)(((uint32_t)(s->x[11])))) + 1)), ((uint64_t)(((uint32_t)(s->x[11])))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(unsignedDivide(((uint64_t)(((uint32_t)(s->x[9])))), ((uint64_t)(((uint32_t)(s->x[11])))), 32)))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) - (((uint64_t)(((uint32_t)(s->x[12])))) * ((uint64_t)(((uint32_t)(s->x[11])))))))))));
    r_storeValue(s, s->x[16], ((uint64_t)(((uint32_t)(s->x[9])))), 4);
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x7bc5))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0xce75, 16, 16, 32)))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[8])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[9])))))));
    s->x[9] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "eq"))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0x4a))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) * ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) + ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    __auto_type value57 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[10] = ((uint64_t)(value57));
    __auto_type value58 = r_load(s, ((s->x[10] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[9]))))))), 3, 64))), 8);
    s->x[9] = ((uint64_t)(value58));
    s->x[17] = ((uint64_t)(((uint64_t)(0xfd63))));
    next = s->x[9];
    return next;
}

uint64_t r_bb_1007fe4d4(RState *s) {
    uint64_t next = 0;
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x5e7c))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0x7003, 16, 16, 32)))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0xbf47))))));
    s->x[10] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[10])))), 0xfef7, 16, 16, 32)))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[25])))) + ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0x7b1a))))));
    s->x[11] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[11])))), 0xcf7d, 16, 16, 32)))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) & ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0x4004))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) ^ ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[8])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[11])))))));
    s->x[11] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "lt"))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0xd))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) * ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0x103a))))));
    s->x[12] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[12])))), 0x710c, 16, 16, 32)))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[25])))) + ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) ^ ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    __auto_type value20 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[12] = ((uint64_t)(value20));
    __auto_type value21 = r_load(s, ((s->x[12] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[11]))))))), 3, 64))), 8);
    s->x[11] = ((uint64_t)(value21));
    s->x[17] = ((uint64_t)(((uint64_t)(0xb968))));
    next = s->x[11];
    return next;
}

uint64_t r_bb_1007fea30(RState *s) {
    uint64_t next = 0;
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0xc8))))));
    __auto_type value1 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[13] = ((uint64_t)(value1));
    __auto_type value2 = r_load(s, ((s->x[13] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[19]))))))), 3, 64))), 8);
    s->x[9] = ((uint64_t)(value2));
    r_storeValue(s, addOffset(s->x[14], 7416), s->x[9], 8);
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0xe25c))))));
    s->x[12] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[12])))), 0x1311, 16, 16, 32)))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[8])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[12])))))));
    if (r_condition(s, "eq"))
    {
        r_compare64(s, ((uint64_t)(s->x[20])), ((uint64_t)(((uint64_t)(0x0)))));
    }
    else
    {
        r_setNZCV(s, 0x4);
    }
    s->x[8] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "eq"))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) * ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) ^ ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    __auto_type value11 = r_load(s, ((s->x[13] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[8]))))))), 3, 64))), 8);
    s->x[8] = ((uint64_t)(value11));
    s->x[22] = ((uint64_t)(((uint32_t)(((uint64_t)(0x98fb))))));
    s->x[22] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[22])))), 0x5d42, 16, 16, 32)))));
    s->x[17] = ((uint64_t)(((uint64_t)(0xea9d))));
    next = s->x[8];
    return next;
}

uint64_t r_bb_1007fea70(RState *s) {
    uint64_t next = 0;
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0x1b25))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0x8e30, 16, 16, 32)))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x47ed))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0xdff7, 16, 16, 32)))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0xf37f))))));
    s->x[10] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[10])))), 0xaefc, 16, 16, 32)))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[23])))) + ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[19] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) & ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x2048))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0xc4, 16, 16, 32)))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[23])))) + ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) | ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    __auto_type value12 = r_load(s, addOffset(s->sp, 32616), 8);
    s->x[0] = ((uint64_t)(value12));
    r_compare64(s, ((uint64_t)(s->x[0])), ((uint64_t)(((uint64_t)(0x0)))));
    s->x[9] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "eq"))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) & ((uint64_t)(0x1))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0x628b))))));
    s->x[10] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[10])))), 0x710b, 16, 16, 32)))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[19])))) + ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) * ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[23]))))))))));
    __auto_type value22 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[10] = ((uint64_t)(value22));
    __auto_type value23 = r_load(s, ((s->x[10] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[9]))))))), 3, 64))), 8);
    s->x[9] = ((uint64_t)(value23));
    s->x[17] = ((uint64_t)(((uint64_t)(0x2bd2))));
    next = s->x[9];
    return next;
}

uint64_t r_bb_1007ff534(RState *s) {
    uint64_t next = 0;
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0xffffdb84))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) + ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) | ((uint64_t)(0x2))))))));
    __auto_type value3 = r_load(s, addOffset(s->sp, 18088), 8);
    s->x[10] = ((uint64_t)(value3));
    s->x[13] = ((uint64_t)(((uint64_t)(0x70ac))));
    s->x[13] = ((uint64_t)(insertBits(s->x[13], 0xaed8, 16, 16, 64)));
    s->x[13] = ((uint64_t)(insertBits(s->x[13], 0x6e6f, 32, 16, 64)));
    s->x[13] = ((uint64_t)(insertBits(s->x[13], 0xa7e5, 48, 16, 64)));
    s->x[10] = ((uint64_t)(((s->x[10] + s->x[13]))));
    __auto_type value9 = r_load(s, s->x[10], 8);
    s->x[10] = ((uint64_t)(value9));
    s->x[13] = ((uint64_t)(((uint64_t)(0x6d5))));
    s->x[13] = ((uint64_t)(insertBits(s->x[13], 0x59c6, 16, 16, 64)));
    s->x[13] = ((uint64_t)(insertBits(s->x[13], 0xd406, 32, 16, 64)));
    s->x[13] = ((uint64_t)(insertBits(s->x[13], 0x41a5, 48, 16, 64)));
    r_compare64(s, ((uint64_t)(s->x[10])), ((uint64_t)(s->x[13])));
    s->x[13] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "eq"))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((uint64_t)(0xd44))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) ^ ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) * ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) ^ ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    __auto_type value20 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[14] = ((uint64_t)(value20));
    __auto_type value21 = r_load(s, ((s->x[14] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[13]))))))), 3, 64))), 8);
    s->x[13] = ((uint64_t)(value21));
    s->x[17] = ((uint64_t)(((uint64_t)(0x17d))));
    next = s->x[13];
    return next;
}

uint64_t r_bb_1007ffe84(RState *s) {
    uint64_t next = 0;
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0xffffddb0))))));
    s->x[22] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) + ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0x3111))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0x830d, 16, 16, 32)))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0xcef7))))));
    s->x[10] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[10])))), 0x7cf2, 16, 16, 32)))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) + ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[20] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) & ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[19] = ((uint64_t)(((s->x[28] + ((uint64_t)(0x60))))));
    r_storeValue(s, addOffset(s->sp, 8192), s->x[19], 8);
    __auto_type value10 = r_load(s, addOffset(s->x[28], 96), 8);
    s->x[8] = ((uint64_t)(value10));
    s->x[23] = ((uint64_t)(((uint64_t)(0x2749))));
    s->x[23] = ((uint64_t)(insertBits(s->x[23], 0xbae, 16, 16, 64)));
    s->x[23] = ((uint64_t)(insertBits(s->x[23], 0xb635, 32, 16, 64)));
    s->x[23] = ((uint64_t)(insertBits(s->x[23], 0x3373, 48, 16, 64)));
    r_compare64(s, ((uint64_t)(s->x[8])), ((uint64_t)(s->x[23])));
    s->x[10] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "eq"))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0x8cdd))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[20])))) ^ ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) * ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    __auto_type value21 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[10] = ((uint64_t)(value21));
    __auto_type value22 = r_load(s, ((s->x[10] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[9]))))))), 3, 64))), 8);
    s->x[9] = ((uint64_t)(value22));
    s->x[17] = ((uint64_t)(((uint64_t)(0xe078))));
    next = s->x[9];
    return next;
}

uint64_t r_bb_1007fffdc(RState *s) {
    uint64_t next = 0;
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0xb3e3))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0xe6eb, 16, 16, 32)))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0xedc9))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0x1914, 16, 16, 32)))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) + ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) & ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    __auto_type value6 = r_load(s, addOffset(s->x[19], 8), 1);
    s->x[9] = ((uint64_t)(((uint32_t)(value6))));
    __auto_type value7 = r_load(s, addOffset(s->x[24], 8), 1);
    s->x[10] = ((uint64_t)(((uint32_t)(value7))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    return 0x100800000;
}

uint64_t r_bb_100800000(RState *s) {
    uint64_t next = 0;
    s->x[14] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) - ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) - ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[14])))) | ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) ^ shiftRight(((uint64_t)(((uint32_t)(s->x[12])))), 7, 32)))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0x2704))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) | ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((uint64_t)(0x1))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) & ~(((uint64_t)(((uint32_t)(s->x[11])))))))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((uint64_t)(0x66cc))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) * ((uint64_t)(((uint32_t)(s->x[15]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) ^ ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    __auto_type value11 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[14] = ((uint64_t)(value11));
    __auto_type value12 = r_load(s, ((s->x[14] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[11]))))))), 3, 64))), 8);
    s->x[14] = ((uint64_t)(value12));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0x8))))));
    s->x[17] = ((uint64_t)(((uint64_t)(0xd55f))));
    next = s->x[14];
    return next;
}

uint64_t r_bb_100800f30(RState *s) {
    uint64_t next = 0;
    s->x[13] = ((uint64_t)(((uint32_t)(((uint64_t)(0x5d96))))));
    __auto_type value1 = r_load(s, s->x[16], 4);
    if ((((uint32_t)(value1)) == ((uint32_t)(((uint64_t)(((uint32_t)(s->x[13]))))))))
    {
        r_storeValue(s, s->x[16], ((uint64_t)(((uint32_t)(s->x[10])))), 4);
    }
    s->x[13] = ((uint64_t)(((uint32_t)(value1))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[13])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[11])))))));
    s->x[13] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "eq"))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) * ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) ^ ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    __auto_type value6 = r_load(s, ((s->x[14] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[13]))))))), 3, 64))), 8);
    s->x[13] = ((uint64_t)(value6));
    s->x[17] = ((uint64_t)(((uint64_t)(0xc9d2))));
    next = s->x[13];
    return next;
}

uint64_t r_bb_1008011c4(RState *s) {
    uint64_t next = 0;
    __auto_type value0 = r_load(s, addOffset(s->sp, 7928), 8);
    s->x[8] = ((uint64_t)(value0));
    s->x[17] = ((uint64_t)(((uint64_t)(0x1dcc))));
    next = s->x[8];
    return next;
}

uint64_t r_bb_100801630(RState *s) {
    uint64_t next = 0;
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0x46a8))))));
    s->x[12] = ((uint64_t)(((s->sp + shiftLeft(((uint64_t)(0x8)), 12, 64)))));
    r_storeValue(s, addOffset(s->x[12], 2876), ((uint64_t)(((uint32_t)(s->x[9])))), 4);
    __auto_type value3 = r_load(s, addOffset(s->sp, 11008), 8);
    s->x[19] = ((uint64_t)(value3));
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0x7d2f))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) + ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) + ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    __auto_type value8 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[12] = ((uint64_t)(value8));
    __auto_type value9 = r_load(s, ((s->x[12] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[11]))))))), 3, 64))), 8);
    s->x[11] = ((uint64_t)(value9));
    s->x[17] = ((uint64_t)(((uint64_t)(0x9e63))));
    next = s->x[11];
    return next;
}

uint64_t r_bb_100802ad0(RState *s) {
    uint64_t next = 0;
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0xf56b))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0x710b, 16, 16, 32)))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x698d))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0x710b, 16, 16, 32)))));
    __auto_type value4 = r_load(s, addOffset(s->sp, 3544), 4);
    s->x[14] = ((uint64_t)(((uint32_t)(value4))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[14])))) + ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x5a8d))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0xfd7, 16, 16, 32)))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[19])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0xa573))))));
    s->x[11] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[11])))), 0xf028, 16, 16, 32)))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) + ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0x7017))))));
    s->x[11] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[11])))), 0x11a5, 16, 16, 32)))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[19])))) ^ ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0x8fe9))))));
    s->x[12] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[12])))), 0xee5a, 16, 16, 32)))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) + ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0x515f))))));
    s->x[11] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[11])))), 0xd007, 16, 16, 32)))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[19])))) ^ ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((uint64_t)(0x3877))))));
    s->x[13] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[13])))), 0x2ff8, 16, 16, 32)))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[14])))) + ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) ^ ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) + ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x7bb1))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0xce75, 16, 16, 32)))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) + ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[9] = ((uint64_t)(((s->sp + shiftLeft(((uint64_t)(0x7)), 12, 64)))));
    r_storeValue(s, addOffset(s->x[9], 3868), ((uint64_t)(((uint32_t)(s->x[8])))), 4);
    __auto_type value33 = r_load(s, addOffset(s->sp, 17632), 8);
    s->x[20] = ((uint64_t)(value33));
    __auto_type value34 = r_load(s, addOffset(s->sp, 6556), 4);
    s->x[8] = ((uint64_t)(((uint32_t)(value34))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x8166))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0x710b, 16, 16, 32)))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[14])))) + ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    __auto_type value38 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[11] = ((uint64_t)(value38));
    __auto_type value39 = r_load(s, ((s->x[11] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[9]))))))), 3, 64))), 8);
    s->x[9] = ((uint64_t)(value39));
    s->x[17] = ((uint64_t)(((uint64_t)(0xd034))));
    next = s->x[9];
    return next;
}

uint64_t r_bb_100803318(RState *s) {
    uint64_t next = 0;
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0xd8ee))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0xacb0, 16, 16, 32)))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x2c01))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) + ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) | ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    __auto_type value5 = r_load(s, addOffset(s->sp, 16076), 4);
    s->x[12] = ((uint64_t)(((uint32_t)(value5))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) + ((uint64_t)(0x14))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0x400e))))));
    s->x[11] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[11])))), 0x7752, 16, 16, 32)))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[10])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[11])))))));
    s->x[11] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "hi"))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((uint64_t)(0x90e6))))));
    s->x[13] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[13])))), 0x1, 16, 16, 32)))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) * ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((uint64_t)(0x55d1))))));
    s->x[13] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[13])))), 0xacb1, 16, 16, 32)))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) + ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) ^ ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    __auto_type value19 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[11] = ((uint64_t)(value19));
    __auto_type value20 = r_load(s, ((s->x[11] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[10]))))))), 3, 64))), 8);
    s->x[10] = ((uint64_t)(value20));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0x1))))));
    s->x[14] = ((uint64_t)(((s->sp + shiftLeft(((uint64_t)(0x7)), 12, 64)))));
    s->x[17] = ((uint64_t)(((uint64_t)(0x5c01))));
    next = s->x[10];
    return next;
}

uint64_t r_bb_1008033d0(RState *s) {
    uint64_t next = 0;
    __auto_type value0 = r_load(s, addOffset(s->sp, 17224), 8);
    s->x[8] = ((uint64_t)(value0));
    s->x[17] = ((uint64_t)(((uint64_t)(0x2362))));
    next = s->x[8];
    return next;
}

uint64_t r_bb_100803454(RState *s) {
    uint64_t next = 0;
    s->x[0] = ((uint64_t)(((s->x[11] & ((uint64_t)(0xff))))));
    __auto_type value1 = r_load(s, ((s->x[10] + shiftLeft(s->x[0], 2, 64))), 4);
    s->x[11] = ((uint64_t)(((uint32_t)(value1))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) - ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[11])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[14])))))));
    s->x[11] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "eq"))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) & ((uint64_t)(0x1))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) + ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[1] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) ^ ((uint64_t)(((uint32_t)(s->x[15]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) * ((uint64_t)(((uint32_t)(s->x[1]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    __auto_type value11 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[1] = ((uint64_t)(value11));
    __auto_type value12 = r_load(s, ((s->x[1] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[17]))))))), 3, 64))), 8);
    s->x[1] = ((uint64_t)(value12));
    s->x[17] = ((uint64_t)(((uint64_t)(0xe3da))));
    next = s->x[1];
    return next;
}

uint64_t r_bb_100804fd8(RState *s) {
    uint64_t next = 0;
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[14])))) + ((uint64_t)(((uint32_t)(s->x[22]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) & ((uint64_t)(((uint32_t)(s->x[23]))))))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[14])))) + ((uint64_t)(((uint32_t)(s->x[24]))))))))));
    s->x[7] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) & ((uint64_t)(((uint32_t)(s->x[26]))))))))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[10])))))), ((uint32_t)(((uint64_t)(0x0)))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[7])))) + ((uint64_t)(((uint32_t)(s->x[27]))))))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) ^ ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    if (r_condition(s, "ne"))
    {
        r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[21])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[13])))))));
    }
    else
    {
        r_setNZCV(s, 0x0);
    }
    s->x[15] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "eq"))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) * ((uint64_t)(((uint32_t)(s->x[28]))))))))));
    return 0x100805000;
}

uint64_t r_bb_100805000(RState *s) {
    uint64_t next = 0;
    s->x[14] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) ^ ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    __auto_type value1 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[15] = ((uint64_t)(value1));
    __auto_type value2 = r_load(s, ((s->x[15] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[14]))))))), 3, 64))), 8);
    s->x[14] = ((uint64_t)(value2));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) + ((uint64_t)(0x1))))))));
    s->x[20] = ((uint64_t)(s->x[11]));
    s->x[17] = ((uint64_t)(((uint64_t)(0xe3a9))));
    next = s->x[14];
    return next;
}

uint64_t r_bb_100806200(RState *s) {
    uint64_t next = 0;
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0x4e48))))));
    s->x[10] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[10])))), 0xc5a9, 16, 16, 32)))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0x7fff))))));
    s->x[11] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[11])))), 0x3a56, 16, 16, 32)))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) + ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) & ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0x4b02))))));
    s->x[11] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[11])))), 0xd237, 16, 16, 32)))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) + ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[8])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[11])))))));
    s->x[11] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "ge"))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0x7d))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) * ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    __auto_type value14 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[11] = ((uint64_t)(value14));
    __auto_type value15 = r_load(s, ((s->x[11] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[9]))))))), 3, 64))), 8);
    s->x[9] = ((uint64_t)(value15));
    s->x[17] = ((uint64_t)(((uint64_t)(0x72ba))));
    next = s->x[9];
    return next;
}

uint64_t r_bb_100806a24(RState *s) {
    uint64_t next = 0;
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0xc096))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0x2db9, 16, 16, 32)))));
    s->x[14] = ((uint64_t)(((uint32_t)(((uint64_t)(0xbbf7))))));
    s->x[14] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[14])))), 0x3c8b, 16, 16, 32)))));
    __auto_type value4 = r_load(s, addOffset(s->sp, 3520), 4);
    s->x[17] = ((uint64_t)(((uint32_t)(value4))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) + ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) & ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    s->x[8] = ((uint64_t)(((s->sp + shiftLeft(((uint64_t)(0xa)), 12, 64)))));
    __auto_type value8 = r_load(s, addOffset(s->x[8], 2888), 8);
    s->x[0] = ((uint64_t)(value8));
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0xd837))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0x69b, 16, 16, 32)))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) ^ ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[17])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[8])))))));
    s->x[8] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "ne"))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((uint64_t)(0x1b26))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) * ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((uint64_t)(0xb98c))))));
    s->x[14] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[14])))), 0x15bb, 16, 16, 32)))));
    s->x[14] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) ^ ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[14])))) ^ ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    __auto_type value20 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[14] = ((uint64_t)(value20));
    __auto_type value21 = r_load(s, ((s->x[14] + shiftLeft(((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[8])))))))), 3, 64))), 8);
    s->x[8] = ((uint64_t)(value21));
    s->x[1] = ((uint64_t)(((uint64_t)(0x20))));
    s->x[1] = ((uint64_t)(insertBits(s->x[1], 0x1, 32, 16, 64)));
    s->x[3] = ((uint64_t)(((uint32_t)(((uint64_t)(0x21))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((uint64_t)(0x1bae))))));
    s->x[14] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[14])))), 0x8ef4, 16, 16, 32)))));
    s->x[2] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) ^ ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    s->x[20] = ((uint64_t)(((uint32_t)(((uint64_t)(0x37830000))))));
    s->x[30] = ((uint64_t)(((uint32_t)(((uint64_t)(0xb6d0))))));
    s->x[30] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[30])))), 0x7eb7, 16, 16, 32)))));
    s->x[4] = ((uint64_t)(((uint32_t)(((uint64_t)(0xa10f))))));
    s->x[4] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[4])))), 0x7c1b, 16, 16, 32)))));
    s->x[5] = ((uint64_t)(((uint32_t)(((uint64_t)(0x790e))))));
    s->x[5] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[5])))), 0xc63f, 16, 16, 32)))));
    s->x[6] = ((uint64_t)(((uint32_t)(((uint64_t)(0x55a4))))));
    s->x[6] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[6])))), 0x493b, 16, 16, 32)))));
    s->x[19] = ((uint64_t)(((uint32_t)(((uint64_t)(0xd54f))))));
    s->x[19] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[19])))), 0x92c1, 16, 16, 32)))));
    s->x[21] = ((uint64_t)(((uint32_t)(((uint64_t)(0xf9e3))))));
    s->x[21] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[21])))), 0x1dc5, 16, 16, 32)))));
    s->x[22] = ((uint64_t)(((uint32_t)(((uint64_t)(0xb0ec))))));
    s->x[22] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[22])))), 0xdbfa, 16, 16, 32)))));
    s->x[23] = ((uint64_t)(((uint32_t)(((uint64_t)(0x9c42))))));
    s->x[23] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[23])))), 0x54fe, 16, 16, 32)))));
    s->x[24] = ((uint64_t)(((uint32_t)(((uint64_t)(0xe353))))));
    s->x[24] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[24])))), 0x70fb, 16, 16, 32)))));
    s->x[25] = ((uint64_t)(((uint32_t)(((uint64_t)(0x1eef))))));
    s->x[25] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[25])))), 0x7be4, 16, 16, 32)))));
    s->x[28] = ((uint64_t)(((uint32_t)(((uint64_t)(0xe589))))));
    s->x[28] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[28])))), 0xe81b, 16, 16, 32)))));
    s->x[17] = ((uint64_t)(((uint64_t)(0x4a25))));
    next = s->x[8];
    return next;
}

uint64_t r_bb_100807b6c(RState *s) {
    uint64_t next = 0;
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0xffff9798))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x25))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[19])))) + ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[22] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) | ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    r_storeValue(s, addOffset(s->x[20], 272), ((uint64_t)(0)), 1);
    r_storeValue(s, addOffset(s->x[20], 296), s->x[0], 8);
    r_storeValue(s, ((addOffset(s->x[20], 296)) + 8), ((uint64_t)(0)), 8);
    r_storeValue(s, addOffset(s->x[20], 312), ((uint64_t)(((uint32_t)(s->x[21])))), 4);
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0xf3e8))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0x3db8, 16, 16, 32)))));
    r_storeValue(s, addOffset(s->x[20], 316), ((uint64_t)(((uint32_t)(s->x[8])))), 4);
    __auto_type value10 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[8] = ((uint64_t)(value10));
    __auto_type value11 = r_load(s, ((s->x[8] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[19]))))))), 3, 64))), 8);
    s->x[8] = ((uint64_t)(value11));
    s->x[12] = ((uint64_t)(((s->sp + shiftLeft(((uint64_t)(0x7)), 12, 64)))));
    s->x[12] = ((uint64_t)(((s->x[12] + ((uint64_t)(0x3cc))))));
    s->x[17] = ((uint64_t)(((uint64_t)(0xeca))));
    next = s->x[8];
    return next;
}

uint64_t r_bb_100807c8c(RState *s) {
    uint64_t next = 0;
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x2213))))));
    s->x[11] = ((uint64_t)(((s->sp + shiftLeft(((uint64_t)(0x7)), 12, 64)))));
    __auto_type value2 = r_load(s, addOffset(s->x[11], 1388), 4);
    s->x[11] = ((uint64_t)(((uint32_t)(value2))));
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0xa99))))));
    s->x[12] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[12])))), 0x23c0, 16, 16, 32)))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) ^ ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((uint64_t)(0xf567))))));
    s->x[13] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[13])))), 0xdc3f, 16, 16, 32)))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) + ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((uint64_t)(0x2d32))))));
    s->x[13] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[13])))), 0x1e6c, 16, 16, 32)))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) ^ ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((uint64_t)(0xd2ce))))));
    s->x[14] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[14])))), 0xe193, 16, 16, 32)))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) + ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) ^ ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((uint64_t)(0x5c6e))))));
    s->x[13] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[13])))), 0xf3d9, 16, 16, 32)))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) ^ ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((uint64_t)(0xa392))))));
    s->x[13] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[13])))), 0xc26, 16, 16, 32)))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) + ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) ^ ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0x3bac))))));
    s->x[12] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[12])))), 0xce75, 16, 16, 32)))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) + ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) + ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((uint64_t)(0x5))))));
    s->x[13] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[13])))), 0x7, 16, 16, 32)))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) + ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[11])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[13])))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0x1e))))));
    s->x[11] = ((uint64_t)(((uint32_t)(selectValue(r_condition(s, "lo"), ((((uint64_t)(((uint32_t)(s->x[11])))) + 1)), ((uint64_t)(((uint32_t)(s->x[11])))))))));
    r_storeValue(s, s->x[8], ((uint64_t)(((uint32_t)(s->x[11])))), 1);
    __auto_type value34 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[8] = ((uint64_t)(value34));
    __auto_type value35 = r_load(s, ((s->x[8] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[10]))))))), 3, 64))), 8);
    s->x[8] = ((uint64_t)(value35));
    s->x[17] = ((uint64_t)(((uint64_t)(0x40fc))));
    next = s->x[8];
    return next;
}

uint64_t r_bb_100807e98(RState *s) {
    uint64_t next = 0;
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0x9fb5))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0xcef4, 16, 16, 32)))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0xf3ef))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0xbfff, 16, 16, 32)))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[26])))) + ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[19] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) & ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0xaeef))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0xb328, 16, 16, 32)))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[26])))) ^ ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0xb88d))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0x970c, 16, 16, 32)))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[19])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[8])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[9])))))));
    s->x[8] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "hi"))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x1141))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) * ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x9e))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[26])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    __auto_type value19 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[9] = ((uint64_t)(value19));
    __auto_type value20 = r_load(s, ((s->x[9] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[8]))))))), 3, 64))), 8);
    s->x[9] = ((uint64_t)(value20));
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0x5c19))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0xa89, 16, 16, 32)))));
    s->x[17] = ((uint64_t)(((uint64_t)(0xb083))));
    next = s->x[9];
    return next;
}

uint64_t r_bb_100808348(RState *s) {
    uint64_t next = 0;
    s->x[20] = ((uint64_t)(((s->sp + shiftLeft(((uint64_t)(0x1)), 12, 64)))));
    s->x[20] = ((uint64_t)(((s->x[20] + ((uint64_t)(0x540))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0x99e0))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0x8ef4, 16, 16, 32)))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x9d83))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0x6031, 16, 16, 32)))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) + ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[10] = ((uint64_t)(((s->sp + shiftLeft(((uint64_t)(0x7)), 12, 64)))));
    r_storeValue(s, addOffset(s->x[10], 2000), ((uint64_t)(((uint32_t)(s->x[9])))), 4);
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0xb351))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0x8ef4, 16, 16, 32)))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[25])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[25])))) + ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    __auto_type value14 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[9] = ((uint64_t)(value14));
    __auto_type value15 = r_load(s, ((s->x[9] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[8]))))))), 3, 64))), 8);
    s->x[9] = ((uint64_t)(value15));
    s->x[8] = ((uint64_t)(((uint64_t)(0xb524))));
    s->x[8] = ((uint64_t)(insertBits(s->x[8], 0x1f4, 16, 16, 64)));
    s->x[8] = ((uint64_t)(insertBits(s->x[8], 0xa39f, 32, 16, 64)));
    s->x[8] = ((uint64_t)(insertBits(s->x[8], 0x353e, 48, 16, 64)));
    s->x[24] = ((uint64_t)(s->x[10]));
    s->x[17] = ((uint64_t)(((uint64_t)(0x750b))));
    next = s->x[9];
    return next;
}

uint64_t r_bb_100808724(RState *s) {
    uint64_t next = 0;
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0xf079))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0x63eb, 16, 16, 32)))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x7fbf))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0xd1f, 16, 16, 32)))));
    __auto_type value4 = r_load(s, addOffset(s->sp, 3544), 4);
    s->x[11] = ((uint64_t)(((uint32_t)(value4))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) + ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[23] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) & ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0x7624))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0x710b, 16, 16, 32)))));
    s->x[19] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) + ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0x9ea7))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0x710b, 16, 16, 32)))));
    s->x[12] = ((uint64_t)(((s->sp + shiftLeft(((uint64_t)(0x7)), 12, 64)))));
    s->x[12] = ((uint64_t)(((s->x[12] + ((uint64_t)(0x3cc))))));
    r_storeValue(s, addOffset(s->x[12], 2104), ((uint64_t)(((uint32_t)(s->x[21])))), 4);
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0xf784))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0xce4d, 16, 16, 32)))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) + ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[21])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[9])))))));
    s->x[9] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "eq"))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0x11f8))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[23])))) ^ ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) * ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) + ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    __auto_type value25 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[9] = ((uint64_t)(value25));
    __auto_type value26 = r_load(s, ((s->x[9] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[8]))))))), 3, 64))), 8);
    s->x[8] = ((uint64_t)(value26));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x2029))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0x318a, 16, 16, 32)))));
    s->x[17] = ((uint64_t)(((uint64_t)(0xf4cc))));
    next = s->x[8];
    return next;
}

uint64_t r_bb_1008097b0(RState *s) {
    uint64_t next = 0;
    __auto_type value0 = r_load(s, addOffset(s->x[19], 13), 1);
    s->x[9] = ((uint64_t)(((uint32_t)(value0))));
    __auto_type value1 = r_load(s, addOffset(s->x[24], 13), 1);
    s->x[10] = ((uint64_t)(((uint32_t)(value1))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[11])))))), ((uint32_t)(((uint64_t)(0x1b)))));
    s->x[11] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "eq"))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((uint64_t)(0x81fb))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) + ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) * ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) ^ ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    __auto_type value9 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[13] = ((uint64_t)(value9));
    __auto_type value10 = r_load(s, ((s->x[13] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[11]))))))), 3, 64))), 8);
    s->x[13] = ((uint64_t)(value10));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0xd))))));
    s->x[17] = ((uint64_t)(((uint64_t)(0xd55f))));
    next = s->x[13];
    return next;
}

uint64_t r_bb_1008097e8(RState *s) {
    uint64_t next = 0;
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0x950a))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0x8ef4, 16, 16, 32)))));
    s->x[9] = ((uint64_t)(((s->sp + shiftLeft(((uint64_t)(0x8)), 12, 64)))));
    __auto_type value3 = r_load(s, addOffset(s->x[9], 1088), 8);
    s->x[9] = ((uint64_t)(value3));
    s->x[10] = ((uint64_t)(((s->x[9] + ((uint64_t)(0x68))))));
    r_storeValue(s, addOffset(s->sp, 18224), s->x[10], 8);
    return 0x100809800;
}

uint64_t r_bb_100809800(RState *s) {
    uint64_t next = 0;
    __auto_type value0 = r_load(s, addOffset(s->x[9], 104), 8);
    s->x[19] = ((uint64_t)(value0));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x8305))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0x8ef4, 16, 16, 32)))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[20])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[20])))) + ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    __auto_type value6 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[10] = ((uint64_t)(value6));
    __auto_type value7 = r_load(s, ((s->x[10] + shiftLeft(((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[8])))))))), 3, 64))), 8);
    s->x[8] = ((uint64_t)(value7));
    s->x[17] = ((uint64_t)(((uint64_t)(0x17ae))));
    next = s->x[8];
    return next;
}

uint64_t r_bb_100809ecc(RState *s) {
    uint64_t next = 0;
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x60d1))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0x710b, 16, 16, 32)))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0x4582))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) + ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) | ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0xc6ff))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0x710b, 16, 16, 32)))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) + ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    __auto_type value8 = r_load(s, addOffset(s->x[12], 4052), 4);
    s->x[5] = ((uint64_t)(((uint32_t)(value8))));
    __auto_type value9 = r_load(s, addOffset(s->sp, 6960), 8);
    s->x[8] = ((uint64_t)(value9));
    __auto_type value10 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[12] = ((uint64_t)(value10));
    __auto_type value11 = r_load(s, ((s->x[12] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[9]))))))), 3, 64))), 8);
    s->x[9] = ((uint64_t)(value11));
    s->x[17] = ((uint64_t)(((uint64_t)(0x4d9a))));
    next = s->x[9];
    return next;
}

uint64_t r_bb_10080ab40(RState *s) {
    uint64_t next = 0;
    __auto_type value0 = r_load(s, addOffset(s->sp, 3544), 4);
    s->x[12] = ((uint64_t)(((uint32_t)(value0))));
    s->x[8] = ((uint64_t)(((uint32_t)(shiftLeft(((uint64_t)(((uint32_t)(s->x[12])))), ((int64_t)(((uint64_t)(0x2)))), 32)))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0xa16e))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0x8ef4, 16, 16, 32)))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0x2f1))))));
    s->x[23] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) * ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x9fc6))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0x710b, 16, 16, 32)))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0xf96))))));
    s->x[10] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[10])))), 0x6690, 16, 16, 32)))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) ^ ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) + ((uint64_t)(((uint32_t)(s->x[23]))))))))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[21])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[10])))))));
    s->x[10] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "eq"))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0xd))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) * ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) + ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    __auto_type value19 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[10] = ((uint64_t)(value19));
    __auto_type value20 = r_load(s, ((s->x[10] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[9]))))))), 3, 64))), 8);
    s->x[9] = ((uint64_t)(value20));
    s->x[17] = ((uint64_t)(((uint64_t)(0x399d))));
    next = s->x[9];
    return next;
}

uint64_t r_bb_10080ab9c(RState *s) {
    uint64_t next = 0;
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[23])))) + ((uint64_t)(0xf25))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0x4202))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) | ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    __auto_type value3 = r_load(s, addOffset(s->x[8], 6), 1);
    s->x[10] = ((uint64_t)(((uint32_t)(value3))));
    __auto_type value4 = r_load(s, addOffset(s->x[22], 6), 1);
    s->x[11] = ((uint64_t)(((uint32_t)(value4))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) ^ ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(0x3c))))))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[12])))))), ((uint32_t)(((uint64_t)(((uint8_t)(((uint64_t)(((uint32_t)(s->x[13])))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "eq"))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((uint64_t)(0x4380))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) * ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) ^ ((uint64_t)(((uint32_t)(s->x[23]))))))))));
    __auto_type value12 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[13] = ((uint64_t)(value12));
    __auto_type value13 = r_load(s, ((s->x[13] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[12]))))))), 3, 64))), 8);
    s->x[13] = ((uint64_t)(value13));
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0x6))))));
    s->x[17] = ((uint64_t)(((uint64_t)(0x3c3c))));
    next = s->x[13];
    return next;
}

uint64_t r_bb_10080b158(RState *s) {
    uint64_t next = 0;
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0x65b3))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) + ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) | ((uint64_t)(0x1000))))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((uint64_t)(0xf9da))))));
    s->x[14] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[14])))), 0x82a3, 16, 16, 32)))));
    s->x[16] = ((uint64_t)(((uint32_t)(((uint64_t)(0x8043))))));
    s->x[16] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[16])))), 0xc50, 16, 16, 32)))));
    s->x[14] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[15])))) + ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[14])))) | ((uint64_t)(((uint32_t)(s->x[16]))))))))));
    s->x[16] = ((uint64_t)(((uint32_t)(((uint64_t)(0x834d))))));
    s->x[16] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[16])))), 0x299a, 16, 16, 32)))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) ^ ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[14])))) + ((uint64_t)(((uint32_t)(s->x[16]))))))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) ^ ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    s->x[16] = ((uint64_t)(((uint32_t)(((uint64_t)(0x4647))))));
    s->x[16] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[16])))), 0x4770, 16, 16, 32)))));
    s->x[17] = ((uint64_t)(((uint32_t)(((uint64_t)(0xae5b))))));
    s->x[17] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[17])))), 0xd975, 16, 16, 32)))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) ^ ((uint64_t)(((uint32_t)(s->x[17]))))))))));
    s->x[0] = ((uint64_t)(((uint32_t)(((uint64_t)(0x51a5))))));
    s->x[0] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[0])))), 0x268a, 16, 16, 32)))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) + ((uint64_t)(((uint32_t)(s->x[0]))))))))));
    s->x[0] = ((uint64_t)(((uint32_t)(((uint64_t)(0x6c27))))));
    s->x[0] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[0])))), 0xaf8f, 16, 16, 32)))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) ^ ((uint64_t)(((uint32_t)(s->x[0]))))))))));
    s->x[0] = ((uint64_t)(((uint32_t)(((uint64_t)(0x93d9))))));
    s->x[0] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[0])))), 0x5070, 16, 16, 32)))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) + ((uint64_t)(((uint32_t)(s->x[0]))))))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) ^ ((uint64_t)(((uint32_t)(s->x[17]))))))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[14])))) + ((uint64_t)(((uint32_t)(s->x[16]))))))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) ^ ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((uint64_t)(0x9a13))))));
    s->x[14] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[14])))), 0x25b6, 16, 16, 32)))));
    s->x[14] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) ^ ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    s->x[16] = ((uint64_t)(((uint32_t)(((uint64_t)(0x65ed))))));
    s->x[16] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[16])))), 0xda49, 16, 16, 32)))));
    s->x[14] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[14])))) + ((uint64_t)(((uint32_t)(s->x[16]))))))))));
    s->x[16] = ((uint64_t)(((uint32_t)(((uint64_t)(0xaeb))))));
    s->x[16] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[16])))), 0x66b, 16, 16, 32)))));
    s->x[16] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) ^ ((uint64_t)(((uint32_t)(s->x[16]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((uint64_t)(0xf515))))));
    s->x[17] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[17])))), 0xf994, 16, 16, 32)))));
    s->x[16] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[16])))) + ((uint64_t)(((uint32_t)(s->x[17]))))))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[14])))) ^ ((uint64_t)(((uint32_t)(s->x[16]))))))))));
    s->x[16] = ((uint64_t)(((uint32_t)(((uint64_t)(0x1c27))))));
    s->x[16] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[16])))), 0x2285, 16, 16, 32)))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) ^ ((uint64_t)(((uint32_t)(s->x[16]))))))))));
    s->x[16] = ((uint64_t)(((uint32_t)(((uint64_t)(0xe3d9))))));
    s->x[16] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[16])))), 0xdd7a, 16, 16, 32)))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) + ((uint64_t)(((uint32_t)(s->x[16]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[14])))) ^ ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((uint64_t)(0x80a4))))));
    s->x[14] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[14])))), 0x875d, 16, 16, 32)))));
    s->x[16] = ((uint64_t)(((uint32_t)(((uint64_t)(0x91be))))));
    s->x[16] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[16])))), 0xba40, 16, 16, 32)))));
    s->x[17] = ((uint64_t)(((uint32_t)(((uint64_t)(0x4df))))));
    s->x[17] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[17])))), 0xb8e8, 16, 16, 32)))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) + ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[13])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[17])))))));
    s->x[14] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "lo"))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) + ((uint64_t)(((uint32_t)(s->x[16]))))))))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[11])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[17])))))));
    s->x[16] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "lo"))))));
    s->x[16] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[16])))) ^ ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[13])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[11])))))));
    s->x[11] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "hi"))))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[16])))))), ((uint32_t)(((uint64_t)(0x0)))));
    s->x[11] = ((uint64_t)(((uint32_t)(selectValue(r_condition(s, "ne"), ((uint64_t)(((uint32_t)(s->x[14])))), ((uint64_t)(((uint32_t)(s->x[11])))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) ^ ((uint64_t)(0x1))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) | shiftLeft(((uint64_t)(((uint32_t)(s->x[11])))), 4, 32)))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) ^ ((uint64_t)(((uint32_t)(s->x[15]))))))))));
    __auto_type value71 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[13] = ((uint64_t)(value71));
    __auto_type value72 = r_load(s, ((s->x[13] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[11]))))))), 3, 64))), 8);
    s->x[11] = ((uint64_t)(value72));
    s->x[15] = ((uint64_t)(((uint32_t)(((uint64_t)(0xffff5bd4))))));
    s->x[17] = ((uint64_t)(((uint64_t)(0xb998))));
    next = s->x[11];
    return next;
}

uint64_t r_bb_10080d8b4(RState *s) {
    uint64_t next = 0;
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0x8ce2))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0x710b, 16, 16, 32)))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[22])))) + ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    __auto_type value3 = r_load(s, addOffset(s->x[11], 2608), 4);
    s->x[4] = ((uint64_t)(((uint32_t)(value3))));
    __auto_type value4 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[9] = ((uint64_t)(value4));
    __auto_type value5 = r_load(s, ((s->x[9] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[8]))))))), 3, 64))), 8);
    s->x[8] = ((uint64_t)(value5));
    s->x[17] = ((uint64_t)(((uint64_t)(0x8d36))));
    next = s->x[8];
    return next;
}

uint64_t r_bb_10080dda4(RState *s) {
    uint64_t next = 0;
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0xc637))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0x710b, 16, 16, 32)))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[22])))) + ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[10] = ((uint64_t)(((s->sp + shiftLeft(((uint64_t)(0x6)), 12, 64)))));
    s->x[10] = ((uint64_t)(((s->x[10] + ((uint64_t)(0xe78))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0x3d50))))));
    s->x[11] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[11])))), 0x9f8d, 16, 16, 32)))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) & shiftLeft(((uint64_t)(((uint32_t)(s->x[10])))), 1, 32)))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0x9eaf))))));
    s->x[12] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[12])))), 0x4fc6, 16, 16, 32)))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) - ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) + ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0xcccd))))));
    s->x[11] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[11])))), 0xcccc, 16, 16, 32)))));
    s->x[11] = ((uint64_t)((((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[10])))))))) * ((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[11])))))))))));
    s->x[11] = ((uint64_t)(shiftRight(s->x[11], ((int64_t)(((uint64_t)(0x24)))), 64)));
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0x14))))));
    s->x[28] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) - (((uint64_t)(((uint32_t)(s->x[11])))) * ((uint64_t)(((uint32_t)(s->x[12])))))))))));
    s->x[12] = ((uint64_t)(((uint64_t)(0x27e4))));
    s->x[12] = ((uint64_t)(insertBits(s->x[12], 0x66f3, 16, 16, 64)));
    s->x[12] = ((uint64_t)(insertBits(s->x[12], 0x63b3, 32, 16, 64)));
    s->x[12] = ((uint64_t)(insertBits(s->x[12], 0xc00e, 48, 16, 64)));
    s->x[10] = ((uint64_t)(((s->sp + ((uint64_t)(0xdf8))))));
    __auto_type value24 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[11] = ((uint64_t)(value24));
    __auto_type value25 = r_load(s, ((s->x[11] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[9]))))))), 3, 64))), 8);
    s->x[9] = ((uint64_t)(value25));
    r_storeValue(s, addOffset(s->sp, 3520), s->x[12], 8);
    s->x[27] = ((uint64_t)(((s->x[10] ^ s->x[12]))));
    s->x[20] = ((uint64_t)(((uint32_t)(((uint64_t)(0x71cc))))));
    s->x[20] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[20])))), 0xfcbf, 16, 16, 32)))));
    s->x[26] = ((uint64_t)(((uint32_t)(((uint64_t)(0x1b))))));
    s->x[3] = ((uint64_t)(((uint32_t)(((uint64_t)(0x71cd))))));
    s->x[3] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[3])))), 0xfcbf, 16, 16, 32)))));
    s->x[4] = ((uint64_t)(((uint32_t)(((uint64_t)(0x71ce))))));
    s->x[4] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[4])))), 0xfcbf, 16, 16, 32)))));
    s->x[5] = ((uint64_t)(((uint32_t)(((uint64_t)(0x71cf))))));
    s->x[5] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[5])))), 0xfcbf, 16, 16, 32)))));
    s->x[6] = ((uint64_t)(((uint32_t)(((uint64_t)(0x7bd5))))));
    s->x[6] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[6])))), 0x4e75, 16, 16, 32)))));
    s->x[7] = ((uint64_t)(((uint32_t)(((uint64_t)(0x7bc5))))));
    s->x[7] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[7])))), 0xce75, 16, 16, 32)))));
    s->x[23] = ((uint64_t)(((uint32_t)(((uint64_t)(0xa6))))));
    s->x[30] = ((uint64_t)(((uint32_t)(((uint64_t)(0xd4cf))))));
    s->x[30] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[30])))), 0xa5c, 16, 16, 32)))));
    s->x[0] = ((uint64_t)(((uint32_t)(((uint64_t)(0xb5))))));
    s->x[1] = ((uint64_t)(((uint64_t)(0xffffffffffff2881))));
    s->x[1] = ((uint64_t)(insertBits(s->x[1], 0x9874, 16, 16, 64)));
    s->x[17] = ((uint64_t)(((uint64_t)(0xed02))));
    next = s->x[9];
    return next;
}

uint64_t r_bb_100811258(RState *s) {
    uint64_t next = 0;
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0xffffc044))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x684a))))));
    s->x[19] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[19])))) + ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[21] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[19])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0x11db))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0xb218, 16, 16, 32)))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[20])))) ^ ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0xee25))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0x4de7, 16, 16, 32)))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) + ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0xef2a))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0x5f61, 16, 16, 32)))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[19])))) + ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[20]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0x7f2c))))));
    s->x[10] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[10])))), 0xa09d, 16, 16, 32)))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[21])))) + ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) + ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0x61fa))))));
    s->x[10] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[10])))), 0x230f, 16, 16, 32)))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[20])))) ^ ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0x9e06))))));
    s->x[11] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[11])))), 0xdcf0, 16, 16, 32)))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) + ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[9] = ((uint64_t)(((s->sp + shiftLeft(((uint64_t)(0x11)), 12, 64)))));
    s->x[9] = ((uint64_t)(((s->x[9] + ((uint64_t)(0x148))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0xc7a0))))));
    s->x[10] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[10])))), 0x9c66, 16, 16, 32)))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) | shiftLeft(((uint64_t)(((uint32_t)(s->x[9])))), 1, 32)))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0x9c30))))));
    s->x[11] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[11])))), 0x31cc, 16, 16, 32)))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) - ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) + ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0xe830))))));
    s->x[10] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[10])))), 0xb2c1, 16, 16, 32)))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0x8153))))));
    s->x[10] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[10])))), 0x8391, 16, 16, 32)))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) * ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0x1d35))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[19])))) - ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) + ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0x53a2))))));
    s->x[11] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[11])))), 0xcfe4, 16, 16, 32)))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) + ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) + ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[26] = ((uint64_t)(((s->sp + shiftLeft(((uint64_t)(0x11)), 12, 64)))));
    r_storeValue(s, addOffset(s->x[26], 328), ((uint64_t)(((uint32_t)(s->x[10])))), 4);
    r_storeValue(s, addOffset(s->x[26], 332), ((uint64_t)(((uint32_t)(s->x[8])))), 4);
    __auto_type value51 = r_load(s, addOffset(s->sp, 3560), 8);
    s->x[8] = ((uint64_t)(value51));
    __auto_type value52 = r_load(s, s->x[8], 4);
    s->x[8] = ((uint64_t)(((uint32_t)(value52))));
    __auto_type value53 = r_load(s, addOffset(s->sp, 3552), 8);
    s->x[9] = ((uint64_t)(value53));
    __auto_type value54 = r_load(s, s->x[9], 4);
    s->x[9] = ((uint64_t)(((uint32_t)(value54))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) + ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) ^ ((uint64_t)(((uint32_t)(s->x[22]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) * ((uint64_t)(((uint32_t)(s->x[23]))))))))));
    __auto_type value58 = r_load(s, addOffset(s->sp, 3536), 8);
    s->x[25] = ((uint64_t)(value58));
    s->x[9] = ((uint64_t)(((s->x[25] + ((uint64_t)(((uint8_t)(((uint64_t)(((uint32_t)(s->x[8]))))))))))));
    __auto_type value60 = r_load(s, s->x[9], 1);
    s->x[9] = ((uint64_t)(((uint32_t)(value60))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[24]))))))))));
    __auto_type value62 = r_load(s, addOffset(s->sp, 3528), 8);
    s->x[23] = ((uint64_t)(value62));
    __auto_type value63 = r_load(s, ((s->x[23] + ((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[9])))))))))), 1);
    s->x[9] = ((uint64_t)(((uint32_t)(value63))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0xcfba))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) + ((uint64_t)(((uint8_t)(((uint64_t)(((uint32_t)(s->x[8]))))))))))))));
    __auto_type value67 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[22] = ((uint64_t)(value67));
    __auto_type value68 = r_load(s, ((s->x[22] + shiftLeft(((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[8])))))))), 3, 64))), 8);
    s->x[8] = ((uint64_t)(value68));
    s->x[0] = ((uint64_t)(((s->sp + shiftLeft(((uint64_t)(0x11)), 12, 64)))));
    s->x[0] = ((uint64_t)(((s->x[0] + ((uint64_t)(0x148))))));
    s->x[17] = ((uint64_t)(((uint64_t)(0x3f6))));
    s->x[30] = 0x10081137c;
    next = s->x[8];
    return next;
}

uint64_t r_bb_10081137c(RState *s) {
    uint64_t next = 0;
    __auto_type value0 = r_load(s, addOffset(s->x[26], 336), 1);
    s->x[8] = ((uint64_t)(((uint32_t)(value0))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[8])))))), ((uint32_t)(((uint64_t)(0x2e)))));
    s->x[8] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "ne"))))));
    s->x[9] = ((uint64_t)(((uint32_t)(shiftLeft(((uint64_t)(((uint32_t)(s->x[8])))), ((int64_t)(((uint64_t)(0x7)))), 32)))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) - ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) ^ ((uint64_t)(((uint32_t)(s->x[19]))))))))));
    __auto_type value6 = r_load(s, ((s->x[22] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[8]))))))), 3, 64))), 8);
    s->x[8] = ((uint64_t)(value6));
    s->x[17] = ((uint64_t)(((uint64_t)(0x17f2))));
    next = s->x[8];
    return next;
}

uint64_t r_bb_100811a20(RState *s) {
    uint64_t next = 0;
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0xa401))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0xa372, 16, 16, 32)))));
    s->x[13] = ((uint64_t)(((uint32_t)(((uint64_t)(0x78f6))))));
    s->x[13] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[13])))), 0x1ed4, 16, 16, 32)))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) + ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[23] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) & ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x908b))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0x8ef4, 16, 16, 32)))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) - ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) - ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) | ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    s->x[13] = ((uint64_t)(((uint32_t)((~(((uint64_t)(((uint32_t)(s->x[13]))))))))));
    s->x[13] = ((uint64_t)(((uint32_t)(shiftRight(((uint64_t)(((uint32_t)(s->x[13])))), ((int64_t)(((uint64_t)(0x1f)))), 32)))));
    s->x[14] = ((uint64_t)(((uint32_t)(((uint64_t)(0x3ac7))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) * ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[23])))) + ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((uint64_t)(0x999))))));
    s->x[14] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[14])))), 0xb34c, 16, 16, 32)))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) ^ ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) ^ ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    __auto_type value21 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[13] = ((uint64_t)(value21));
    __auto_type value22 = r_load(s, ((s->x[13] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[12]))))))), 3, 64))), 8);
    s->x[12] = ((uint64_t)(value22));
    s->x[17] = ((uint64_t)(((uint64_t)(0x6723))));
    next = s->x[12];
    return next;
}

uint64_t r_bb_100812a5c(RState *s) {
    uint64_t next = 0;
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0xcd22))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0x710b, 16, 16, 32)))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[24])))) + ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    __auto_type value3 = r_load(s, addOffset(s->sp, 11644), 4);
    s->x[8] = ((uint64_t)(((uint32_t)(value3))));
    __auto_type value4 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[10] = ((uint64_t)(value4));
    __auto_type value5 = r_load(s, ((s->x[10] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[9]))))))), 3, 64))), 8);
    s->x[9] = ((uint64_t)(value5));
    s->x[17] = ((uint64_t)(((uint64_t)(0x647))));
    next = s->x[9];
    return next;
}

uint64_t r_bb_100812a7c(RState *s) {
    uint64_t next = 0;
    s->x[13] = ((uint64_t)(((uint32_t)(((uint64_t)(0x1b1d))))));
    s->x[13] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[13])))), 0x710c, 16, 16, 32)))));
    __auto_type value2 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[15] = ((uint64_t)(value2));
    __auto_type value3 = r_load(s, ((s->x[15] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[12]))))))), 3, 64))), 8);
    s->x[12] = ((uint64_t)(value3));
    s->x[14] = ((uint64_t)(((s->sp + shiftLeft(((uint64_t)(0x8)), 12, 64)))));
    r_storeValue(s, addOffset(s->x[14], 312), s->x[12], 8);
    r_storeValue(s, addOffset(s->sp, 27120), s->x[11], 8);
    r_storeValue(s, addOffset(s->sp, 3832), s->x[10], 8);
    s->x[12] = ((uint64_t)(((s->sp + shiftLeft(((uint64_t)(0x8)), 12, 64)))));
    r_storeValue(s, addOffset(s->x[12], 2600), ((uint64_t)(0)), 8);
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0x7bc5))))));
    s->x[12] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[12])))), 0xce75, 16, 16, 32)))));
    s->x[14] = ((uint64_t)(((s->sp + shiftLeft(((uint64_t)(0x4)), 12, 64)))));
    r_storeValue(s, addOffset(s->x[14], 4416), ((uint64_t)(((uint32_t)(s->x[12])))), 4);
    s->x[12] = ((uint64_t)(((uint64_t)(0x81b8))));
    s->x[12] = ((uint64_t)(insertBits(s->x[12], 0x7064, 16, 16, 64)));
    s->x[12] = ((uint64_t)(insertBits(s->x[12], 0xb281, 32, 16, 64)));
    s->x[12] = ((uint64_t)(insertBits(s->x[12], 0x1153, 48, 16, 64)));
    r_compare64(s, ((uint64_t)(s->x[21])), ((uint64_t)(s->x[12])));
    s->x[12] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "eq"))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((uint64_t)(0x26))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) * ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) + ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) | ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    __auto_type value24 = r_load(s, ((s->x[15] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[12]))))))), 3, 64))), 8);
    s->x[12] = ((uint64_t)(value24));
    s->x[5] = ((uint64_t)(((uint32_t)(((uint64_t)(0x207a))))));
    s->x[5] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[5])))), 0x318a, 16, 16, 32)))));
    s->x[17] = ((uint64_t)(((uint64_t)(0x5578))));
    next = s->x[12];
    return next;
}

uint64_t r_bb_100813f04(RState *s) {
    uint64_t next = 0;
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0x0))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0x6b))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[21])))) ^ ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    __auto_type value3 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[12] = ((uint64_t)(value3));
    __auto_type value4 = r_load(s, ((s->x[12] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[19]))))))), 3, 64))), 8);
    s->x[11] = ((uint64_t)(value4));
    s->x[13] = ((uint64_t)(((s->sp + shiftLeft(((uint64_t)(0x8)), 12, 64)))));
    r_storeValue(s, addOffset(s->x[13], 856), s->x[11], 8);
    s->x[11] = ((uint64_t)(((s->sp + shiftLeft(((uint64_t)(0xa)), 12, 64)))));
    r_storeValue(s, addOffset(s->x[11], 3840), s->x[27], 8);
    r_storeValue(s, addOffset(s->x[11], 3852), ((uint64_t)(((uint32_t)(s->x[22])))), 4);
    r_storeValue(s, addOffset(s->x[11], 3856), s->x[9], 8);
    r_compare64(s, ((uint64_t)(s->x[27])), ((uint64_t)(((uint64_t)(0x0)))));
    s->x[9] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "eq"))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0xffffcd1c))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) + ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) * ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[21]))))))))));
    __auto_type value17 = r_load(s, ((s->x[12] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[9]))))))), 3, 64))), 8);
    s->x[11] = ((uint64_t)(value17));
    s->x[4] = ((uint64_t)(((uint32_t)(((uint64_t)(0x201c))))));
    s->x[4] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[4])))), 0x318a, 16, 16, 32)))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x1))))));
    s->x[17] = ((uint64_t)(((uint64_t)(0x3835))));
    next = s->x[11];
    return next;
}

uint64_t r_bb_1008140dc(RState *s) {
    uint64_t next = 0;
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x6b5d))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0x710b, 16, 16, 32)))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0x3c13))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[21])))) + ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    __auto_type value5 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[11] = ((uint64_t)(value5));
    __auto_type value6 = r_load(s, ((s->x[11] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[10]))))))), 3, 64))), 8);
    s->x[10] = ((uint64_t)(value6));
    __auto_type value7 = r_load(s, addOffset(s->sp, 3496), 8);
    s->x[12] = ((uint64_t)(value7));
    s->x[17] = ((uint64_t)(((uint64_t)(0x3234))));
    next = s->x[10];
    return next;
}

uint64_t r_bb_1008149a4(RState *s) {
    uint64_t next = 0;
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0x7156))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0xc03, 16, 16, 32)))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0x8069))))));
    s->x[10] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[10])))), 0x82f0, 16, 16, 32)))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) + ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[20] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) | ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0xec7))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0x8ef4, 16, 16, 32)))));
    s->x[21] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[8] = ((uint64_t)(((s->sp + shiftLeft(((uint64_t)(0x9)), 12, 64)))));
    __auto_type value10 = r_load(s, addOffset(s->x[8], 755), 1);
    s->x[8] = ((uint64_t)(((uint32_t)(value10))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[20])))) - ((uint64_t)(0x4d))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) & ((uint64_t)(0xfe))))))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[8])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[10])))))));
    s->x[8] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "eq"))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[21])))) ^ ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) & ((uint64_t)(0x1))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0x6d))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) * ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    __auto_type value20 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[9] = ((uint64_t)(value20));
    __auto_type value21 = r_load(s, ((s->x[9] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[8]))))))), 3, 64))), 8);
    s->x[8] = ((uint64_t)(value21));
    s->x[17] = ((uint64_t)(((uint64_t)(0x6012))));
    next = s->x[8];
    return next;
}

uint64_t r_bb_100817660(RState *s) {
    uint64_t next = 0;
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0xdf6))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0x6553, 16, 16, 32)))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0x5cff))))));
    s->x[10] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[10])))), 0xbb8, 16, 16, 32)))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) + ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[20] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) & ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0xb26a))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0x710b, 16, 16, 32)))));
    __auto_type value8 = r_load(s, addOffset(s->sp, 15256), 8);
    s->x[10] = ((uint64_t)(value8));
    s->x[11] = ((uint64_t)(((uint64_t)(0x81b8))));
    s->x[11] = ((uint64_t)(insertBits(s->x[11], 0x7064, 16, 16, 64)));
    s->x[11] = ((uint64_t)(insertBits(s->x[11], 0xb281, 32, 16, 64)));
    s->x[11] = ((uint64_t)(insertBits(s->x[11], 0x1153, 48, 16, 64)));
    r_compare64(s, ((uint64_t)(s->x[10])), ((uint64_t)(s->x[11])));
    s->x[10] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "ne"))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0xc5a))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[20])))) ^ ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) * ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) + ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    __auto_type value20 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[10] = ((uint64_t)(value20));
    __auto_type value21 = r_load(s, ((s->x[10] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[9]))))))), 3, 64))), 8);
    s->x[9] = ((uint64_t)(value21));
    s->x[17] = ((uint64_t)(((uint64_t)(0x3282))));
    next = s->x[9];
    return next;
}

uint64_t r_bb_100817c5c(RState *s) {
    uint64_t next = 0;
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0x7027))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0x710b, 16, 16, 32)))));
    __auto_type value2 = r_load(s, addOffset(s->sp, 12880), 8);
    s->x[9] = ((uint64_t)(value2));
    s->x[10] = ((uint64_t)(((uint64_t)(0x7e58))));
    s->x[10] = ((uint64_t)(insertBits(s->x[10], 0x8f9b, 16, 16, 64)));
    s->x[10] = ((uint64_t)(insertBits(s->x[10], 0x4d7e, 32, 16, 64)));
    s->x[10] = ((uint64_t)(insertBits(s->x[10], 0xeeac, 48, 16, 64)));
    s->x[10] = ((uint64_t)(((s->x[9] + s->x[10]))));
    s->x[12] = ((uint64_t)(((s->sp + shiftLeft(((uint64_t)(0x8)), 12, 64)))));
    __auto_type value9 = r_load(s, addOffset(s->x[12], 3988), 4);
    s->x[11] = ((uint64_t)(((uint32_t)(value9))));
    r_storeValue(s, s->x[10], ((uint64_t)(((uint32_t)(s->x[11])))), 4);
    s->x[10] = ((uint64_t)(((uint64_t)(0x7e5c))));
    s->x[10] = ((uint64_t)(insertBits(s->x[10], 0x8f9b, 16, 16, 64)));
    s->x[10] = ((uint64_t)(insertBits(s->x[10], 0x4d7e, 32, 16, 64)));
    s->x[10] = ((uint64_t)(insertBits(s->x[10], 0xeeac, 48, 16, 64)));
    s->x[10] = ((uint64_t)(((s->x[9] + s->x[10]))));
    s->x[11] = ((uint64_t)(((s->sp + shiftLeft(((uint64_t)(0x8)), 12, 64)))));
    __auto_type value17 = r_load(s, addOffset(s->x[11], 1624), 4);
    s->x[11] = ((uint64_t)(((uint32_t)(value17))));
    r_storeValue(s, s->x[10], ((uint64_t)(((uint32_t)(s->x[11])))), 4);
    s->x[10] = ((uint64_t)(((s->sp + shiftLeft(((uint64_t)(0x7)), 12, 64)))));
    __auto_type value20 = r_load(s, addOffset(s->x[10], 1388), 4);
    s->x[10] = ((uint64_t)(((uint32_t)(value20))));
    s->x[11] = ((uint64_t)(((uint64_t)(0x7e50))));
    s->x[11] = ((uint64_t)(insertBits(s->x[11], 0x8f9b, 16, 16, 64)));
    s->x[11] = ((uint64_t)(insertBits(s->x[11], 0x4d7e, 32, 16, 64)));
    s->x[11] = ((uint64_t)(insertBits(s->x[11], 0xeeac, 48, 16, 64)));
    s->x[11] = ((uint64_t)(((s->x[9] + s->x[11]))));
    r_storeValue(s, s->x[11], ((uint64_t)(((uint32_t)(s->x[10])))), 4);
    s->x[10] = ((uint64_t)(((uint64_t)(0x7e54))));
    s->x[10] = ((uint64_t)(insertBits(s->x[10], 0x8f9b, 16, 16, 64)));
    s->x[10] = ((uint64_t)(insertBits(s->x[10], 0x4d7e, 32, 16, 64)));
    s->x[10] = ((uint64_t)(insertBits(s->x[10], 0xeeac, 48, 16, 64)));
    s->x[9] = ((uint64_t)(((s->x[9] + s->x[10]))));
    r_storeValue(s, s->x[9], ((uint64_t)(((uint32_t)(s->x[19])))), 4);
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0xb1a))))));
    __auto_type value34 = r_load(s, addOffset(s->sp, 3544), 4);
    s->x[10] = ((uint64_t)(((uint32_t)(value34))));
    s->x[23] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) + ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[23])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    __auto_type value37 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[9] = ((uint64_t)(value37));
    __auto_type value38 = r_load(s, ((s->x[9] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[8]))))))), 3, 64))), 8);
    s->x[9] = ((uint64_t)(value38));
    __auto_type value39 = r_load(s, addOffset(s->x[12], 4288), 8);
    s->x[20] = ((uint64_t)(value39));
    s->x[12] = ((uint64_t)(((s->sp + shiftLeft(((uint64_t)(0x7)), 12, 64)))));
    s->x[12] = ((uint64_t)(((s->x[12] + ((uint64_t)(0x3cc))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0x7273))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0x7665, 16, 16, 32)))));
    s->x[25] = ((uint64_t)(((uint32_t)(((uint64_t)(0x98ef))))));
    s->x[25] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[25])))), 0x5d42, 16, 16, 32)))));
    s->x[27] = ((uint64_t)(((uint32_t)(((uint64_t)(0x7bc4))))));
    s->x[27] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[27])))), 0xce75, 16, 16, 32)))));
    s->x[24] = ((uint64_t)(s->x[10]));
    s->x[17] = ((uint64_t)(((uint64_t)(0x5e04))));
    next = s->x[9];
    return next;
}

uint64_t r_bb_100818964(RState *s) {
    uint64_t next = 0;
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0xd33f))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0x7187, 16, 16, 32)))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x94ed))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0x8e77, 16, 16, 32)))));
    s->x[20] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[23])))) + ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[20])))) + ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x6102))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0x8bdc))))));
    s->x[10] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[10])))), 0xc29c, 16, 16, 32)))));
    s->x[11] = ((uint64_t)(((s->sp + shiftLeft(((uint64_t)(0x11)), 12, 64)))));
    s->x[11] = ((uint64_t)(((s->x[11] + ((uint64_t)(0x148))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0xc710))))));
    s->x[12] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[12])))), 0x692b, 16, 16, 32)))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) | ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((uint64_t)(0x38ef))))));
    s->x[13] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[13])))), 0x96d4, 16, 16, 32)))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) | ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) - ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) + ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0xbe1b))))));
    s->x[12] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[12])))), 0xb56b, 16, 16, 32)))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) ^ ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(0xa279))))));
    s->x[12] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[12])))), 0x5973, 16, 16, 32)))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) * ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[20])))) + ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[11] = ((uint64_t)(((s->sp + shiftLeft(((uint64_t)(0x11)), 12, 64)))));
    r_storeValue(s, addOffset(s->x[11], 332), ((uint64_t)(((uint32_t)(s->x[10])))), 4);
    __auto_type value29 = r_load(s, addOffset(s->sp, 3560), 8);
    s->x[10] = ((uint64_t)(value29));
    __auto_type value30 = r_load(s, s->x[10], 4);
    s->x[10] = ((uint64_t)(((uint32_t)(value30))));
    __auto_type value31 = r_load(s, addOffset(s->sp, 3552), 8);
    s->x[11] = ((uint64_t)(value31));
    __auto_type value32 = r_load(s, s->x[11], 4);
    s->x[11] = ((uint64_t)(((uint32_t)(value32))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0xa6))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0xd4cf))))));
    s->x[11] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[11])))), 0xa5c, 16, 16, 32)))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) * ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    __auto_type value39 = r_load(s, addOffset(s->sp, 3512), 8);
    s->x[11] = ((uint64_t)(value39));
    s->x[11] = ((uint64_t)(((s->x[11] + ((uint64_t)(((uint8_t)(((uint64_t)(((uint32_t)(s->x[10]))))))))))));
    __auto_type value41 = r_load(s, s->x[11], 1);
    s->x[11] = ((uint64_t)(((uint32_t)(value41))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) ^ ((uint64_t)(0x4))))))));
    __auto_type value43 = r_load(s, addOffset(s->sp, 3504), 8);
    s->x[12] = ((uint64_t)(value43));
    __auto_type value44 = r_load(s, ((s->x[12] + ((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[11])))))))))), 1);
    s->x[11] = ((uint64_t)(((uint32_t)(value44))));
    s->x[22] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) | ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0xcfe4))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) + ((uint64_t)(((uint8_t)(((uint64_t)(((uint32_t)(s->x[8]))))))))))))));
    __auto_type value49 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[21] = ((uint64_t)(value49));
    __auto_type value50 = r_load(s, ((s->x[21] + shiftLeft(((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[8])))))))), 3, 64))), 8);
    s->x[8] = ((uint64_t)(value50));
    s->x[0] = ((uint64_t)(((s->sp + shiftLeft(((uint64_t)(0x11)), 12, 64)))));
    s->x[0] = ((uint64_t)(((s->x[0] + ((uint64_t)(0x148))))));
    s->x[17] = ((uint64_t)(((uint64_t)(0x8e6e))));
    s->x[30] = 0x100818a40;
    next = s->x[8];
    return next;
}

uint64_t r_bb_100818a40(RState *s) {
    uint64_t next = 0;
    __auto_type value0 = r_load(s, addOffset(s->sp, 9088), 8);
    s->x[27] = ((uint64_t)(value0));
    s->x[8] = ((uint64_t)(((s->sp + shiftLeft(((uint64_t)(0x6)), 12, 64)))));
    __auto_type value2 = r_load(s, addOffset(s->x[8], 2972), 4);
    s->x[8] = ((uint64_t)(((uint32_t)(value2))));
    r_storeValue(s, addOffset(s->sp, 18400), s->x[19], 8);
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0x7bc4))))));
    s->x[10] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[10])))), 0xce75, 16, 16, 32)))));
    r_storeValue(s, addOffset(s->sp, 5708), ((uint64_t)(((uint32_t)(s->x[10])))), 4);
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0x655d))))));
    s->x[11] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[11])))), 0x1e3b, 16, 16, 32)))));
    s->x[9] = ((uint64_t)(((s->sp + shiftLeft(((uint64_t)(0x4)), 12, 64)))));
    r_storeValue(s, addOffset(s->x[9], 4084), ((uint64_t)(((uint32_t)(s->x[11])))), 4);
    r_storeValue(s, addOffset(s->sp, 28208), s->x[27], 8);
    r_storeValue(s, addOffset(s->sp, 6072), ((uint64_t)(((uint32_t)(s->x[8])))), 4);
    s->x[12] = ((uint64_t)(((s->sp + shiftLeft(((uint64_t)(0x3)), 12, 64)))));
    s->x[12] = ((uint64_t)(((s->x[12] + ((uint64_t)(0xb98))))));
    r_storeValue(s, addOffset(s->sp, 28656), s->x[12], 8);
    s->x[9] = ((uint64_t)(((s->sp + shiftLeft(((uint64_t)(0x9)), 12, 64)))));
    s->x[9] = ((uint64_t)(((s->x[9] + ((uint64_t)(0x2f3))))));
    r_storeValue(s, addOffset(s->sp, 18608), s->x[9], 8);
    s->x[13] = ((uint64_t)(((uint32_t)(((uint64_t)(0x9bd7))))));
    s->x[13] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[13])))), 0x61d8, 16, 16, 32)))));
    s->x[14] = ((uint64_t)(((s->sp + shiftLeft(((uint64_t)(0x8)), 12, 64)))));
    r_storeValue(s, addOffset(s->x[14], 2912), ((uint64_t)(((uint32_t)(s->x[13])))), 4);
    s->x[13] = ((uint64_t)(((uint32_t)(((uint64_t)(0x5869))))));
    s->x[13] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[13])))), 0x3430, 16, 16, 32)))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[20])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[13])))))));
    s->x[13] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "ne"))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((uint64_t)(0xffffcb9f))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[22])))) + ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[14])))) * ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((uint64_t)(0xf231))))));
    s->x[14] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[14])))), 0x7188, 16, 16, 32)))));
    s->x[14] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[20])))) ^ ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[14])))) ^ ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    __auto_type value34 = r_load(s, ((s->x[21] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[13]))))))), 3, 64))), 8);
    s->x[13] = ((uint64_t)(value34));
    s->x[17] = ((uint64_t)(((uint64_t)(0x727))));
    next = s->x[13];
    return next;
}

uint64_t r_bb_100818be0(RState *s) {
    uint64_t next = 0;
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) + ((uint64_t)(((uint32_t)(s->x[26]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) | ((uint64_t)(((uint32_t)(s->x[15]))))))))));
    __auto_type value2 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[14] = ((uint64_t)(value2));
    __auto_type value3 = r_load(s, ((s->x[14] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[30]))))))), 3, 64))), 8);
    s->x[11] = ((uint64_t)(value3));
    s->x[12] = ((uint64_t)(((s->sp + shiftLeft(((uint64_t)(0x8)), 12, 64)))));
    r_storeValue(s, addOffset(s->x[12], 5080), s->x[11], 8);
    s->x[12] = ((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[8]))))))));
    r_compare64(s, ((uint64_t)(s->x[12])), ((uint64_t)(s->x[0])));
    return 0x100818c00;
}

uint64_t r_bb_100818c00(RState *s) {
    uint64_t next = 0;
    s->x[8] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "eq"))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((uint64_t)(0x5f08))))));
    s->x[13] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[13])))), 0x710b, 16, 16, 32)))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) + ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) * ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    __auto_type value6 = r_load(s, ((s->x[14] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[8]))))))), 3, 64))), 8);
    s->x[8] = ((uint64_t)(value6));
    s->x[17] = ((uint64_t)(((uint64_t)(0x26d8))));
    next = s->x[8];
    return next;
}

uint64_t r_bb_1008197dc(RState *s) {
    uint64_t next = 0;
    __auto_type value0 = r_load(s, addOffset(s->sp, 3560), 8);
    s->x[17] = ((uint64_t)(value0));
    __auto_type value1 = r_load(s, s->x[17], 4);
    s->x[17] = ((uint64_t)(((uint32_t)(value1))));
    __auto_type value2 = r_load(s, addOffset(s->sp, 3552), 8);
    s->x[2] = ((uint64_t)(value2));
    __auto_type value3 = r_load(s, s->x[2], 4);
    s->x[2] = ((uint64_t)(((uint32_t)(value3))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[2])))) - ((uint64_t)(((uint32_t)(s->x[17]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) ^ ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) * ((uint64_t)(((uint32_t)(s->x[15]))))))))));
    s->x[2] = ((uint64_t)(((s->x[4] + ((uint64_t)(((uint8_t)(((uint64_t)(((uint32_t)(s->x[17]))))))))))));
    __auto_type value8 = r_load(s, s->x[2], 1);
    s->x[2] = ((uint64_t)(((uint32_t)(value8))));
    return 0x100819800;
}

uint64_t r_bb_100819800(RState *s) {
    uint64_t next = 0;
    s->x[2] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[2])))) ^ ((uint64_t)(((uint32_t)(s->x[16]))))))))));
    __auto_type value1 = r_load(s, ((s->x[3] + ((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[2])))))))))), 1);
    s->x[2] = ((uint64_t)(((uint32_t)(value1))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) ^ ((uint64_t)(((uint32_t)(s->x[2]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) & ((uint64_t)(0xff))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) + ((uint64_t)(0x1b9))))))));
    __auto_type value5 = r_load(s, ((s->x[5] + shiftLeft(((uint64_t)(((uint32_t)(((uint64_t)(((uint32_t)(s->x[17])))))))), 3, 64))), 8);
    s->x[17] = ((uint64_t)(value5));
    s->x[12] = ((uint64_t)(r_addWithCarry(s, s->x[13], s->x[12], false, 64)));
    s->x[17] = ((uint64_t)(((s->x[17] + s->x[0]))));
    __auto_type value8 = r_load(s, ((s->x[17] + shiftLeft(s->x[12], 2, 64))), 4);
    s->x[17] = ((uint64_t)(((uint32_t)(value8))));
    r_storeValue(s, ((s->x[11] + shiftLeft(s->x[12], 2, 64))), ((uint64_t)(((uint32_t)(s->x[17])))), 4);
    s->x[17] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "eq"))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) * ((uint64_t)(((uint32_t)(s->x[1]))))))))));
    s->x[17] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[17])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    __auto_type value13 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[2] = ((uint64_t)(value13));
    __auto_type value14 = r_load(s, ((s->x[2] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[17]))))))), 3, 64))), 8);
    s->x[2] = ((uint64_t)(value14));
    s->x[17] = ((uint64_t)(((uint64_t)(0x8085))));
    next = s->x[2];
    return next;
}

uint64_t r_bb_10081bc2c(RState *s) {
    uint64_t next = 0;
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0x2e90))))));
    s->x[8] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[8])))), 0x94dc, 16, 16, 32)))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0xf9d4))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0xdc2f, 16, 16, 32)))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[21])))) + ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) & ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0xf824))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0x710b, 16, 16, 32)))));
    __auto_type value8 = r_load(s, addOffset(s->sp, 15160), 4);
    s->x[10] = ((uint64_t)(((uint32_t)(value8))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) & ((uint64_t)(0x40))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0xffff3630))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) + ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    r_compare32(s, ((uint32_t)(((uint64_t)(((uint32_t)(s->x[10])))))), ((uint32_t)(((uint64_t)(((uint32_t)(s->x[11])))))));
    s->x[10] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "eq"))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0x1b))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) * ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[21])))) + ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[10])))) ^ ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    __auto_type value18 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[10] = ((uint64_t)(value18));
    __auto_type value19 = r_load(s, ((s->x[10] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[9]))))))), 3, 64))), 8);
    s->x[9] = ((uint64_t)(value19));
    s->x[17] = ((uint64_t)(((uint64_t)(0x1aaf))));
    next = s->x[9];
    return next;
}

uint64_t r_bb_10081c4f0(RState *s) {
    uint64_t next = 0;
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0xffffc71f))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0x2c))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) + ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) | ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    __auto_type value4a = r_load(s, addOffset(s->x[19], 64), 4);
    __auto_type value4b = r_load(s, ((addOffset(s->x[19], 64)) + 4), 4);
    s->x[12] = ((uint64_t)(((uint32_t)(value4a))));
    s->x[9] = ((uint64_t)(((uint32_t)(value4b))));
    s->x[13] = ((uint64_t)(((uint32_t)(shiftLeft(((uint64_t)(((uint32_t)(s->x[9])))), ((int64_t)(((uint64_t)(0x3)))), 32)))));
    s->x[14] = ((uint64_t)(((uint32_t)(((((((uint64_t)(((uint32_t)(s->x[9]))))) & bitMask(2, 32))) << 4)))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) - ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) + ((uint64_t)(0x1b))))))));
    r_storeValue(s, addOffset(s->x[19], 56), ((uint64_t)(((uint32_t)(s->x[13])))), 1);
    s->x[13] = ((uint64_t)(((uint32_t)(shiftRight(((uint64_t)(((uint32_t)(s->x[9])))), ((int64_t)(((uint64_t)(0x5)))), 32)))));
    s->x[14] = ((uint64_t)(((uint32_t)(((uint64_t)(0x43))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) ^ ((uint64_t)(((uint32_t)(s->x[14]))))))))));
    s->x[14] = ((uint64_t)(((uint32_t)(((uint64_t)(0xd3))))));
    s->x[11] = ((uint64_t)(((s->x[11] & s->x[14]))));
    s->x[11] = ((uint64_t)(((uint32_t)(shiftLeft(((uint64_t)(((uint32_t)(s->x[13])))), ((int64_t)(((uint64_t)(((uint32_t)(s->x[11])))))), 32)))));
    s->x[14] = ((uint64_t)(((uint32_t)(((uint64_t)(0xc9))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[14])))) | (~((uint64_t)(((uint32_t)(s->x[11])))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) + ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) + ((uint64_t)(0x1c))))))));
    r_storeValue(s, addOffset(s->x[19], 57), ((uint64_t)(((uint32_t)(s->x[11])))), 1);
    s->x[11] = ((uint64_t)(((uint32_t)(shiftRight(((uint64_t)(((uint32_t)(s->x[9])))), ((int64_t)(((uint64_t)(0xd)))), 32)))));
    s->x[13] = ((uint64_t)(((uint32_t)(((uint64_t)(0x36))))));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) & shiftRight(((uint64_t)(((uint32_t)(s->x[9])))), 12, 32)))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) - ((uint64_t)(((uint32_t)(s->x[15]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) + ((uint64_t)(0x1b))))))));
    r_storeValue(s, addOffset(s->x[19], 58), ((uint64_t)(((uint32_t)(s->x[11])))), 1);
    s->x[11] = ((uint64_t)(((uint32_t)(shiftRight(((uint64_t)(((uint32_t)(s->x[9])))), ((int64_t)(((uint64_t)(0x15)))), 32)))));
    s->x[15] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) & shiftRight(((uint64_t)(((uint32_t)(s->x[9])))), 20, 32)))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) - ((uint64_t)(((uint32_t)(s->x[15]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) + ((uint64_t)(0x1b))))))));
    r_storeValue(s, addOffset(s->x[19], 59), ((uint64_t)(((uint32_t)(s->x[11])))), 1);
    s->x[9] = ((uint64_t)(((uint32_t)(extractPair(((uint64_t)(((uint32_t)(s->x[12])))), ((uint64_t)(((uint32_t)(s->x[9])))), 29, 32)))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) & shiftLeft(((uint64_t)(((uint32_t)(s->x[9])))), 1, 32)))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) - ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) + ((uint64_t)(0x1b))))))));
    r_storeValue(s, addOffset(s->x[19], 60), ((uint64_t)(((uint32_t)(s->x[9])))), 1);
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[14])))) | (~shiftRight(((uint64_t)(((uint32_t)(s->x[12])))), 4, 32))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) + shiftRight(((uint64_t)(((uint32_t)(s->x[12])))), 5, 32)))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) + ((uint64_t)(0x1c))))))));
    r_storeValue(s, addOffset(s->x[19], 61), ((uint64_t)(((uint32_t)(s->x[9])))), 1);
    s->x[9] = ((uint64_t)(((uint32_t)(shiftRight(((uint64_t)(((uint32_t)(s->x[12])))), ((int64_t)(((uint64_t)(0xd)))), 32)))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) & shiftRight(((uint64_t)(((uint32_t)(s->x[12])))), 12, 32)))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) - ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) + ((uint64_t)(0x1b))))))));
    r_storeValue(s, addOffset(s->x[19], 62), ((uint64_t)(((uint32_t)(s->x[9])))), 1);
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[14])))) | (~shiftRight(((uint64_t)(((uint32_t)(s->x[12])))), 20, 32))))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) + shiftRight(((uint64_t)(((uint32_t)(s->x[12])))), 21, 32)))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) + ((uint64_t)(0x1c))))))));
    r_storeValue(s, addOffset(s->x[19], 63), ((uint64_t)(((uint32_t)(s->x[9])))), 1);
    __auto_type value50 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[9] = ((uint64_t)(value50));
    __auto_type value51 = r_load(s, ((s->x[9] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[8]))))))), 3, 64))), 8);
    s->x[8] = ((uint64_t)(value51));
    s->x[17] = ((uint64_t)(((uint64_t)(0xa924))));
    next = s->x[8];
    return next;
}

uint64_t r_bb_10081e5c0(RState *s) {
    uint64_t next = 0;
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x1a9))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0x8c90, 16, 16, 32)))));
    s->x[11] = ((uint64_t)(((uint32_t)(((uint64_t)(0xffffea1c))))));
    s->x[10] = ((uint64_t)(((uint32_t)(((uint64_t)(0x810a))))));
    s->x[10] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[10])))), 0x264, 16, 16, 32)))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) + ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) | ((uint64_t)(((uint32_t)(s->x[10]))))))))));
    r_storeValue(s, addOffset(s->sp, 7296), s->x[26], 8);
    s->x[10] = ((uint64_t)(((s->x[26] - ((uint64_t)(0x18))))));
    r_storeValue(s, addOffset(s->sp, 9960), s->x[10], 8);
    r_compare64(s, ((uint64_t)(s->x[26])), ((uint64_t)(((uint64_t)(0x0)))));
    s->x[13] = ((uint64_t)(((uint32_t)(boolValue(r_condition(s, "eq"))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) + ((uint64_t)(((uint32_t)(s->x[11]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[9])))) ^ ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((uint64_t)(0x1))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[13])))) & ~(((uint64_t)(((uint32_t)(s->x[11])))))))))));
    s->x[13] = ((uint64_t)(((uint32_t)(((uint64_t)(0x5eed))))));
    s->x[13] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[13])))), 0x710b, 16, 16, 32)))));
    s->x[12] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[12])))) + ((uint64_t)(((uint32_t)(s->x[13]))))))))));
    s->x[11] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) * ((uint64_t)(((uint32_t)(s->x[12]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[11])))) ^ ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    __auto_type value21 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[11] = ((uint64_t)(value21));
    __auto_type value22 = r_load(s, ((s->x[11] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[8]))))))), 3, 64))), 8);
    s->x[8] = ((uint64_t)(value22));
    s->x[17] = ((uint64_t)(((uint64_t)(0x85cd))));
    next = s->x[8];
    return next;
}

uint64_t r_bb_10081ea94(RState *s) {
    uint64_t next = 0;
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0xffff9f3d))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x915f))))));
    s->x[9] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[9])))), 0x8ef4, 16, 16, 32)))));
    s->x[25] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[23])))) + ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[21] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[25])))) + ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    s->x[8] = ((uint64_t)(((s->sp + shiftLeft(((uint64_t)(0x8)), 12, 64)))));
    __auto_type value6 = r_load(s, addOffset(s->x[8], 4776), 4);
    s->x[8] = ((uint64_t)(((uint32_t)(value6))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[21])))) ^ ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[10] = ((uint64_t)(((uint64_t)(0x6d46))));
    s->x[10] = ((uint64_t)(insertBits(s->x[10], 0x54, 16, 16, 64)));
    s->x[10] = ((uint64_t)(insertBits(s->x[10], 0x8573, 32, 16, 64)));
    s->x[10] = ((uint64_t)(insertBits(s->x[10], 0xe819, 48, 16, 64)));
    s->x[9] = ((uint64_t)(((s->x[9] ^ s->x[10]))));
    s->x[10] = ((uint64_t)(((uint64_t)(0x33d3))));
    s->x[10] = ((uint64_t)(insertBits(s->x[10], 0x715f, 16, 16, 64)));
    s->x[10] = ((uint64_t)(insertBits(s->x[10], 0x7a8c, 32, 16, 64)));
    s->x[10] = ((uint64_t)(insertBits(s->x[10], 0x17e6, 48, 16, 64)));
    s->x[11] = ((uint64_t)(((uint64_t)(0x2361))));
    s->x[11] = ((uint64_t)(insertBits(s->x[11], 0x888d, 16, 16, 64)));
    s->x[11] = ((uint64_t)(insertBits(s->x[11], 0x7c63, 32, 16, 64)));
    s->x[11] = ((uint64_t)(insertBits(s->x[11], 0xd44a, 48, 16, 64)));
    s->x[11] = ((uint64_t)(((s->x[8] ^ s->x[11]))));
    s->x[12] = ((uint64_t)(((uint64_t)(0xdc9f))));
    s->x[12] = ((uint64_t)(insertBits(s->x[12], 0x7772, 16, 16, 64)));
    s->x[12] = ((uint64_t)(insertBits(s->x[12], 0x839c, 32, 16, 64)));
    s->x[12] = ((uint64_t)(insertBits(s->x[12], 0x2bb5, 48, 16, 64)));
    s->x[11] = ((uint64_t)(((s->x[11] + s->x[12]))));
    s->x[12] = ((uint64_t)(((uint64_t)(0x9489))));
    s->x[12] = ((uint64_t)(insertBits(s->x[12], 0xc858, 16, 16, 64)));
    s->x[12] = ((uint64_t)(insertBits(s->x[12], 0xf910, 32, 16, 64)));
    s->x[12] = ((uint64_t)(insertBits(s->x[12], 0x3c53, 48, 16, 64)));
    s->x[8] = ((uint64_t)(((s->x[8] ^ s->x[12]))));
    s->x[12] = ((uint64_t)(((uint64_t)(0x6b77))));
    s->x[12] = ((uint64_t)(insertBits(s->x[12], 0x37a7, 16, 16, 64)));
    s->x[12] = ((uint64_t)(insertBits(s->x[12], 0x6ef, 32, 16, 64)));
    s->x[12] = ((uint64_t)(insertBits(s->x[12], 0xc3ac, 48, 16, 64)));
    s->x[8] = ((uint64_t)(((s->x[8] + s->x[12]))));
    s->x[8] = ((uint64_t)(((s->x[8] ^ s->x[11]))));
    s->x[9] = ((uint64_t)(((s->x[9] + s->x[10]))));
    s->x[8] = ((uint64_t)(((s->x[8] ^ s->x[9]))));
    s->x[9] = ((uint64_t)(((uint64_t)(0x30e5))));
    s->x[9] = ((uint64_t)(insertBits(s->x[9], 0xd06a, 16, 16, 64)));
    s->x[9] = ((uint64_t)(insertBits(s->x[9], 0xa39f, 32, 16, 64)));
    s->x[9] = ((uint64_t)(insertBits(s->x[9], 0x353e, 48, 16, 64)));
    s->x[8] = ((uint64_t)(((s->x[8] + s->x[9]))));
    s->x[9] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[25])))) + ((uint64_t)(0xa19))))))));
    __auto_type value46 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[10] = ((uint64_t)(value46));
    __auto_type value47 = r_load(s, ((s->x[10] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[9]))))))), 3, 64))), 8);
    s->x[9] = ((uint64_t)(value47));
    s->x[17] = ((uint64_t)(((uint64_t)(0x8ebb))));
    next = s->x[9];
    return next;
}

uint64_t r_bb_1008211b8(RState *s) {
    uint64_t next = 0;
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0x7324))))));
    s->x[9] = ((uint64_t)(((uint32_t)(((uint64_t)(0x1871))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[21])))) + ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[22] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) | ((uint64_t)(((uint32_t)(s->x[9]))))))))));
    __auto_type value4 = r_load(s, addOffset(s->sp, 23488), 8);
    s->x[8] = ((uint64_t)(value4));
    __auto_type value5 = r_load(s, addOffset(s->x[8], 36), 4);
    s->x[8] = ((uint64_t)(((uint32_t)(value5))));
    __auto_type value6 = r_load(s, addOffset(s->sp, 14080), 8);
    s->x[9] = ((uint64_t)(value6));
    s->x[20] = ((uint64_t)(((s->x[9] + s->x[8]))));
    s->x[8] = ((uint64_t)(((s->sp + shiftLeft(((uint64_t)(0x8)), 12, 64)))));
    __auto_type value9 = r_load(s, addOffset(s->x[8], 2848), 8);
    s->x[19] = ((uint64_t)(value9));
    s->x[8] = ((uint64_t)(((uint32_t)(((uint64_t)(0x9679))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[21])))) ^ ((uint64_t)(((uint32_t)(s->x[8]))))))))));
    s->x[8] = ((uint64_t)(((uint32_t)(((((uint64_t)(((uint32_t)(s->x[8])))) ^ ((uint64_t)(((uint32_t)(s->x[22]))))))))));
    __auto_type value13 = r_load(s, addOffset(s->sp, 3568), 8);
    s->x[9] = ((uint64_t)(value13));
    __auto_type value14 = r_load(s, ((s->x[9] + shiftLeft(signExtend32(((uint32_t)(((uint64_t)(((uint32_t)(s->x[8]))))))), 3, 64))), 8);
    s->x[8] = ((uint64_t)(value14));
    s->x[23] = ((uint64_t)(((uint32_t)(((uint64_t)(0x7bd5))))));
    s->x[23] = ((uint64_t)(((uint32_t)(insertBits(((uint64_t)(((uint32_t)(s->x[23])))), 0xce75, 16, 16, 32)))));
    s->x[17] = ((uint64_t)(((uint64_t)(0x18c8))));
    next = s->x[8];
    return next;
}
