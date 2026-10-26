#include "native-runtime.h"
#include "native-ops.inc"
uint64_t r_known_1_1000040a8(RState *s) {
    compactNoop(s, 0, 0, 0, 0, 0, 0);
    compactSubSPImm(s, 0, 0, 0, 0, 0, 64);
    compactPairStore64(s, 22, 31, 21, 0, 0, 16);
    compactPairStore64(s, 20, 31, 19, 0, 0, 32);
    compactPairStore64(s, 29, 31, 30, 0, 0, 48);
    compactAddSPShiftImm64(s, 29, 0, 0, 0, 0, 48);
    compactMov64(s, 19, 0, 0, 0, 0, 0);
    compactMovImm48(s, 21, 8, 1, 1, 0, 4096);
    compactLoadBaseImm8(s, 8, 21, 0, 0, 0, 1554);
    return (s->x[8] & (UINT64_C(1) << 0)) != 0 ? UINT64_C(0x100004228) : UINT64_C(0x1000040d0);
}
uint64_t r_known_1_1000040d0(RState *s) {
    compactMovFromSP(s, 1, 0, 0, 0, 0, 0);
    compactMovImm32(s, 0, 0, 0, 0, 0, 0);
    s->x[30] = UINT64_C(0x1000040dc); return UINT64_C(0x100d23af8);
}
uint64_t r_known_1_1000040dc(RState *s) {
    compactLoadSP32(s, 0, 0, 0, 0, 0, 0);
    compactMovImm48(s, 2, 254, 0, 1, 0, 40960);
    compactAddImm64(s, 2, 2, 0, 0, 0, 1818);
    compactMovImm32(s, 1, 0, 0, 0, 0, 0);
    s->x[30] = UINT64_C(0x1000040f0); return UINT64_C(0x100d23ad8);
}
uint64_t r_known_1_1000040f0(RState *s) {
    compactMov64(s, 1, 0, 0, 0, 0, 0);
    compactLoadSP32(s, 0, 0, 0, 0, 0, 0);
    compactAddSPShiftImm64(s, 2, 0, 0, 0, 0, 8);
    s->x[30] = UINT64_C(0x100004100); return UINT64_C(0x100d23b38);
}
uint64_t r_known_1_100004100(RState *s) {
    compactMov64(s, 8, 0, 0, 0, 0, 0);
    compactLoadSP32(s, 0, 0, 0, 0, 0, 8);
    return (uint32_t)s->x[8] == 0 ? UINT64_C(0x100004118) : UINT64_C(0x10000410c);
}
uint64_t r_known_1_100004118(RState *s) {
    compactMovFromSP(s, 2, 0, 0, 0, 0, 0);
    compactMovImm32(s, 1, 0, 0, 0, 0, 1);
    s->x[30] = UINT64_C(0x100004124); return UINT64_C(0x10000425c);
}
uint64_t r_known_1_100004124(RState *s) {
    compactMov64(s, 20, 0, 0, 0, 0, 0);
    compactLoadSP32(s, 0, 0, 0, 0, 0, 8);
    s->x[30] = UINT64_C(0x100004130); return UINT64_C(0x100d23b08);
}
uint64_t r_known_1_100004130(RState *s) {
    compactStoreSP32(s, 0, 31, 0, 0, 0, 8);
    return (uint32_t)s->x[20] == 0 ? UINT64_C(0x100004208) : UINT64_C(0x100004138);
}
uint64_t r_known_1_100004208(RState *s) {
    compactMovImm48(s, 8, 8, 1, 1, 0, 4096);
    compactAddImm64(s, 8, 8, 0, 0, 0, 1554);
    compactMovImm32(s, 9, 0, 0, 0, 0, 1);
    compactStoreBaseImm8(s, 9, 8, 0, 0, 0, 0);
    compactLoadSP32(s, 9, 0, 0, 0, 0, 0);
    compactStoreSignedOffset32(s, 9, 8, 0, 0, 0, 1);
    compactLoadSPHalf32(s, 9, 0, 0, 0, 0, 4);
    compactStoreSignedOffsetHalf32(s, 9, 8, 0, 0, 0, 5);
    return s->x[19] == 0 ? UINT64_C(0x100004244) : UINT64_C(0x10000422c);
}
uint64_t r_known_1_10000422c(RState *s) {
    compactMovImm48(s, 8, 8, 1, 1, 0, 4096);
    compactAddImm64(s, 8, 8, 0, 0, 0, 1555);
    compactLoadBase32(s, 9, 8, 0, 0, 0, 0);
    compactLoadSignedOffsetHalf32(s, 8, 8, 0, 0, 0, 4);
    compactStoreSignedOffsetHalf32(s, 8, 19, 0, 0, 0, 4);
    compactStoreBase32(s, 9, 19, 0, 0, 0, 0);
    compactLoadBaseImm8(s, 0, 21, 0, 0, 0, 1554);
    compactPairLoad64(s, 29, 31, 30, 0, 0, 48);
    compactPairLoad64(s, 20, 31, 19, 0, 0, 32);
    compactPairLoad64(s, 22, 31, 21, 0, 0, 16);
    compactAddSPImm(s, 0, 0, 0, 0, 0, 64);
    return s->x[30];
}
uint64_t r_known_1_10000425c(RState *s) {
    compactNoop(s, 0, 0, 0, 0, 0, 0);
    compactSubSPImm(s, 0, 0, 0, 0, 0, 96);
    compactPairStore64(s, 26, 31, 25, 0, 0, 16);
    compactPairStore64(s, 24, 31, 23, 0, 0, 32);
    compactPairStore64(s, 22, 31, 21, 0, 0, 48);
    compactPairStore64(s, 20, 31, 19, 0, 0, 64);
    compactPairStore64(s, 29, 31, 30, 0, 0, 80);
    compactAddSPShiftImm64(s, 29, 0, 0, 0, 0, 80);
    compactMov64(s, 20, 2, 0, 0, 0, 0);
    compactMov64(s, 23, 1, 0, 0, 0, 0);
    compactMov64(s, 22, 0, 0, 0, 0, 0);
    s->x[30] = UINT64_C(0x10000428c); return UINT64_C(0x100d23ae8);
}
uint64_t r_known_1_10000428c(RState *s) {
    return (uint32_t)s->x[0] == 0 ? UINT64_C(0x1000042f4) : UINT64_C(0x100004290);
}
uint64_t r_known_1_100004290(RState *s) {
    compactMov64(s, 19, 0, 0, 0, 0, 0);
    compactMovImm48(s, 8, 6, 1, 1, 0, 53248);
    compactLoadBaseImm64(s, 8, 8, 0, 0, 0, 944);
    compactLoadBase64(s, 21, 8, 0, 0, 0, 0);
    return (uint32_t)s->x[23] == 0 ? UINT64_C(0x1000042fc) : UINT64_C(0x1000042a4);
}
uint64_t r_known_1_1000042a4(RState *s) {
    compactMovImm48(s, 23, 6, 1, 1, 0, 49152);
    compactAddImm64(s, 23, 23, 0, 0, 0, 4072);
    compactMov64(s, 0, 19, 0, 0, 0, 0);
    compactMov64(s, 1, 23, 0, 0, 0, 0);
    compactMov64(s, 2, 21, 0, 0, 0, 0);
    compactMovImm32(s, 3, 0, 0, 0, 0, 0);
    s->x[30] = UINT64_C(0x1000042c0); return UINT64_C(0x100d23b18);
}
uint64_t r_known_1_1000042c0(RState *s) {
    return s->x[0] == 0 ? UINT64_C(0x100004328) : UINT64_C(0x1000042c4);
}
uint64_t r_known_1_1000042c4(RState *s) {
    compactMov64(s, 24, 0, 0, 0, 0, 0);
    s->x[30] = UINT64_C(0x1000042cc); return UINT64_C(0x100d23a08);
}
uint64_t r_known_1_1000042cc(RState *s) {
    compactMov64(s, 25, 0, 0, 0, 0, 0);
    compactMov64(s, 0, 24, 0, 0, 0, 0);
    s->x[30] = UINT64_C(0x1000042d8); return UINT64_C(0x100d23ac8);
}
uint64_t r_known_1_1000042d8(RState *s) {
    return (uint32_t)s->x[25] != 0 ? UINT64_C(0x100004328) : UINT64_C(0x1000042dc);
}
uint64_t r_known_1_100004328(RState *s) {
    compactMovImm48(s, 1, 254, 0, 1, 0, 40960);
    compactAddImm64(s, 1, 1, 0, 0, 0, 1795);
    compactAddSPShiftImm64(s, 2, 0, 0, 0, 0, 12);
    compactMov64(s, 0, 19, 0, 0, 0, 0);
    s->x[30] = UINT64_C(0x10000433c); return UINT64_C(0x100d23b28);
}
uint64_t r_known_1_10000433c(RState *s) {
    compactMov64(s, 22, 0, 0, 0, 0, 0);
    return (uint32_t)s->x[0] != 0 ? UINT64_C(0x100004384) : UINT64_C(0x100004344);
}
uint64_t r_known_1_100004344(RState *s) {
    compactLoadSP32(s, 0, 0, 0, 0, 0, 12);
    compactMovImm48(s, 1, 6, 1, 1, 0, 49152);
    compactAddImm64(s, 1, 1, 0, 0, 0, 4040);
    compactMov64(s, 2, 21, 0, 0, 0, 0);
    compactMovImm32(s, 3, 0, 0, 0, 0, 0);
    s->x[30] = UINT64_C(0x10000435c); return UINT64_C(0x100d23b18);
}
uint64_t r_known_1_10000435c(RState *s) {
    return s->x[0] == 0 ? UINT64_C(0x10000437c) : UINT64_C(0x100004360);
}
uint64_t r_known_1_100004360(RState *s) {
    compactMov64(s, 21, 0, 0, 0, 0, 0);
    compactMovImm64(s, 1, 0, 0, 0, 0, 0);
    compactMovImm32(s, 2, 0, 0, 0, 0, 6);
    compactMov64(s, 3, 20, 0, 0, 0, 0);
    s->x[30] = UINT64_C(0x100004374); return UINT64_C(0x100d23a38);
}
uint64_t r_known_1_100004374(RState *s) {
    compactMov64(s, 0, 21, 0, 0, 0, 0);
    s->x[30] = UINT64_C(0x10000437c); return UINT64_C(0x100d23ac8);
}
uint64_t r_known_1_10000437c(RState *s) {
    compactLoadSP32(s, 0, 0, 0, 0, 0, 12);
    s->x[30] = UINT64_C(0x100004384); return UINT64_C(0x100d23b08);
}
uint64_t r_known_1_100004384(RState *s) {
    compactMov64(s, 0, 19, 0, 0, 0, 0);
    s->x[30] = UINT64_C(0x10000438c); return UINT64_C(0x100d23b08);
}
uint64_t r_known_1_10000438c(RState *s) {
    compactMov64(s, 0, 22, 0, 0, 0, 0);
    compactPairLoad64(s, 29, 31, 30, 0, 0, 80);
    compactPairLoad64(s, 20, 31, 19, 0, 0, 64);
    compactPairLoad64(s, 22, 31, 21, 0, 0, 48);
    compactPairLoad64(s, 24, 31, 23, 0, 0, 32);
    compactPairLoad64(s, 26, 31, 25, 0, 0, 16);
    compactAddSPImm(s, 0, 0, 0, 0, 0, 96);
    return s->x[30];
}
uint64_t r_known_1_1000056c8(RState *s) {
    compactMovImm32(s, 0, 0, 0, 0, 0, 0);
    return s->x[30];
}
uint64_t r_known_1_100009d80(RState *s) {
    compactLoadBase32(s, 8, 22, 0, 0, 0, 0);
    compactLoadBase32(s, 9, 25, 0, 0, 0, 0);
    compactSub32(s, 8, 9, 8, 0, 0, 0);
    compactXor32(s, 8, 8, 21, 0, 0, 0);
    compactMovImm48(s, 9, 6, 1, 1, 0, 8192);
    compactAddImm64(s, 9, 9, 0, 0, 0, 3648);
    compactMul32(s, 8, 8, 20, 0, 0, 0);
    compactLoadBase64(s, 10, 9, 0, 0, 0, 0);
    compactAddExt64(s, 10, 10, 8, 0, 0, 0);
    compactMovNegImm64(s, 11, 0, 0, 0, 0, 53843);
    compactMovK64(s, 11, 0, 0, 0, 16, 60783);
    compactAdd64(s, 10, 10, 11, 0, 0, 0);
    compactLoadBaseImm8(s, 10, 10, 0, 0, 0, 0);
    compactMovImm32(s, 11, 0, 0, 0, 0, 161);
    compactXor32(s, 10, 10, 11, 0, 0, 0);
    compactLoadBaseImm64(s, 9, 9, 0, 0, 0, 10536);
    compactMovNegImm64(s, 11, 0, 0, 0, 0, 2798);
    compactMovK64(s, 11, 0, 0, 0, 16, 39292);
    compactAdd64(s, 9, 9, 11, 0, 0, 0);
    compactAdd64(s, 9, 9, 10, 0, 0, 0);
    compactLoadBaseImm8(s, 9, 9, 0, 0, 0, 0);
    compactXor32(s, 8, 9, 8, 0, 0, 0);
    compactMovImm32(s, 9, 0, 0, 0, 0, 53375);
    compactAddExt32(s, 8, 9, 8, 0, 0, 0);
    compactLoadUXTW64(s, 8, 23, 8, 0, 3, 0);
    compactMov64(s, 0, 19, 0, 0, 0, 0);
    compactMovImm64(s, 17, 0, 0, 0, 0, 20275);
    s->x[30] = UINT64_C(0x100009df0); return s->x[8];
}
uint64_t r_known_1_100009df0(RState *s) {
    compactLoadSXTW64(s, 8, 23, 26, 0, 3, 0);
    compactMovImm64(s, 17, 0, 0, 0, 0, 16228);
    return s->x[8];
}
uint64_t r_known_1_100011008(RState *s) {
    compactStoreBaseImm32(s, 28, 19, 0, 0, 0, 8);
    compactLoadSP64(s, 8, 0, 0, 0, 0, 88);
    compactMovImm48(s, 9, 6, 1, 1, 0, 53248);
    compactLoadBaseImm64(s, 9, 9, 0, 0, 0, 1032);
    compactLoadBase64(s, 9, 9, 0, 0, 0, 0);
    compactCmp64(s, 0, 9, 8, 0, 0, 0);
    return r_conditionIndex(s, 1) ? UINT64_C(0x100011044) : UINT64_C(0x100011024);
}
uint64_t r_known_1_100011024(RState *s) {
    compactPairLoad64(s, 29, 31, 30, 0, 0, 176);
    compactPairLoad64(s, 20, 31, 19, 0, 0, 160);
    compactPairLoad64(s, 22, 31, 21, 0, 0, 144);
    compactPairLoad64(s, 24, 31, 23, 0, 0, 128);
    compactPairLoad64(s, 26, 31, 25, 0, 0, 112);
    compactPairLoad64(s, 28, 31, 27, 0, 0, 96);
    compactAddSPImm(s, 0, 0, 0, 0, 0, 192);
    return s->x[30];
}
uint64_t r_known_1_100012b58(RState *s) {
    compactMovImm32(s, 8, 0, 0, 0, 0, 23843);
    compactMovK32(s, 8, 0, 0, 0, 16, 307);
    compactAdd32(s, 10, 10, 8, 0, 0, 0);
    compactXor32(s, 10, 10, 8, 0, 0, 0);
    compactLoadSXTW64(s, 8, 21, 9, 0, 3, 0);
    compactMovImm32(s, 11, 0, 0, 0, 0, 7961);
    compactMovImm32(s, 12, 0, 0, 0, 0, 27);
    compactMovImm32Wide(s, 14, 0, 255, 255, 0, 43556);
    compactMovImm64(s, 17, 0, 0, 0, 0, 34380);
    return s->x[8];
}
uint64_t r_known_1_100016d64(RState *s) {
    compactMovImm32(s, 11, 0, 0, 0, 0, 20563);
    compactXor32(s, 11, 15, 11, 0, 0, 0);
    compactMovImm32(s, 13, 0, 0, 0, 0, 197);
    compactMul32(s, 11, 11, 13, 0, 0, 0);
    compactLoadBaseImm64(s, 13, 9, 0, 0, 0, 8);
    compactLoadSXTW64(s, 2, 20, 15, 0, 3, 0);
    compactMovImm32(s, 14, 0, 0, 0, 0, 7598);
    compactMovK32(s, 14, 0, 0, 0, 16, 56387);
    compactMovImm32(s, 15, 0, 0, 0, 0, 41787);
    compactMovK32(s, 15, 0, 0, 0, 16, 8782);
    compactMovImm32(s, 16, 0, 0, 0, 0, 12782);
    compactMovImm32(s, 17, 0, 0, 0, 0, 24752);
    compactMovK32(s, 17, 0, 0, 0, 16, 36795);
    compactMovImm32(s, 0, 0, 0, 0, 0, 55231);
    compactMovK32(s, 0, 0, 0, 0, 16, 28740);
    compactAdd32(s, 17, 11, 17, 0, 0, 0);
    compactAnd32(s, 17, 17, 0, 0, 0, 0);
    compactMovImm32(s, 0, 0, 0, 0, 0, 27888);
    compactMovK32(s, 0, 0, 0, 0, 16, 56387);
    compactSubImmShift32(s, 1, 17, 0, 0, 0, 45);
    compactMovImm64(s, 17, 0, 0, 0, 0, 39837);
    return s->x[2];
}
uint64_t r_known_1_10001fd04(RState *s) {
    compactMovImm32(s, 14, 0, 0, 0, 0, 7359);
    compactMovK32(s, 14, 0, 0, 0, 16, 57097);
    compactCmp64(s, 0, 13, 14, 0, 0, 0);
    compactMovImm32(s, 9, 0, 0, 0, 0, 37464);
    compactXor32(s, 9, 8, 9, 0, 0, 0);
    compactMovImm32(s, 15, 0, 0, 0, 0, 385);
    compactMul32(s, 9, 9, 15, 0, 0, 0);
    compactMov32(s, 15, 11, 0, 0, 0, 0);
    compactOrImm64(s, 16, 15, 0, 0, 0, 2);
    compactLoadXIndex8(s, 16, 23, 16, 0, 0, 0);
    compactMovImm32(s, 17, 0, 0, 0, 0, 209);
    compactXor32(s, 16, 16, 17, 0, 0, 0);
    compactStoreBaseImm8(s, 16, 10, 0, 0, 0, 0);
    compactLoadXIndex8(s, 12, 23, 12, 0, 0, 0);
    compactMovImm32(s, 16, 0, 0, 0, 0, 147);
    compactXor32(s, 12, 12, 16, 0, 0, 0);
    compactXor32(s, 12, 9, 12, 0, 0, 0);
    compactStoreBaseImm8(s, 12, 10, 0, 0, 0, 1);
    compactOrImm64(s, 12, 15, 0, 0, 0, 3);
    compactLoadXIndex8(s, 12, 23, 12, 0, 0, 0);
    compactMovImm32(s, 16, 0, 0, 0, 0, 26);
    compactXor32(s, 12, 12, 16, 0, 0, 0);
    compactStoreBaseImm8(s, 12, 10, 0, 0, 0, 2);
    compactOrImm64(s, 12, 15, 0, 0, 0, 1);
    compactLoadXIndex8(s, 12, 23, 12, 0, 0, 0);
    compactMovImm32(s, 15, 0, 0, 0, 0, 161);
    compactXor32(s, 12, 12, 15, 0, 0, 0);
    compactStoreBaseImm8(s, 12, 10, 0, 0, 0, 3);
    compactAddImm64(s, 10, 10, 0, 0, 0, 4);
    compactAddImmShift32(s, 12, 11, 0, 0, 0, 4);
    compactAdd64(s, 11, 12, 14, 0, 0, 0);
    compactCCmpReg64(s, 0, 13, 11, 2, 2, 0);
    compactCSet32HI(s, 11, 0, 0, 0, 0, 0);
    compactLSLImm32(s, 14, 11, 0, 0, 8, 0);
    compactSub32(s, 11, 14, 11, 0, 0, 0);
    compactXor32(s, 11, 11, 8, 0, 0, 0);
    compactLoadSXTW64(s, 14, 21, 11, 0, 3, 0);
    compactMov64(s, 11, 12, 0, 0, 0, 0);
    compactMovImm64(s, 17, 0, 0, 0, 0, 60538);
    return s->x[14];
}
uint64_t r_known_1_100022b6c(RState *s) {
    compactMovImm32(s, 13, 0, 0, 0, 0, 6651);
    compactMovImm32(s, 14, 0, 0, 0, 0, 1552);
    compactAdd32(s, 13, 20, 13, 0, 0, 0);
    compactOr32(s, 13, 13, 14, 0, 0, 0);
    compactMovImm32(s, 14, 0, 0, 0, 0, 53075);
    compactMovK32(s, 14, 0, 0, 0, 16, 25066);
    compactXor32(s, 14, 1, 14, 0, 0, 0);
    compactMovImm32(s, 15, 0, 0, 0, 0, 52972);
    compactMovK32(s, 15, 0, 0, 0, 16, 36140);
    compactMovImm32(s, 17, 0, 0, 0, 0, 61145);
    compactMovK32(s, 17, 0, 0, 0, 16, 19018);
    compactXor32(s, 17, 1, 17, 0, 0, 0);
    compactMovImm32(s, 0, 0, 0, 0, 0, 61282);
    compactMovK32(s, 0, 0, 0, 0, 16, 42636);
    compactAdd32(s, 17, 17, 0, 0, 0, 0);
    compactMovImm32(s, 0, 0, 0, 0, 0, 4064);
    compactMovK32(s, 0, 0, 0, 0, 16, 18278);
    compactXor32(s, 0, 1, 0, 0, 0, 0);
    compactXor32(s, 13, 0, 13, 0, 0, 0);
    compactMovImm32(s, 0, 0, 0, 0, 0, 24969);
    compactMovK32(s, 0, 0, 0, 0, 16, 43936);
    compactMovImm32(s, 2, 0, 0, 0, 0, 49149);
    compactMovK32(s, 2, 0, 0, 0, 16, 32767);
    compactXor32(s, 2, 1, 2, 0, 0, 0);
    compactAdd32(s, 14, 14, 15, 0, 0, 0);
    compactXor32(s, 14, 1, 14, 0, 0, 0);
    compactMovImm32(s, 15, 0, 0, 0, 0, 48710);
    compactMovK32(s, 15, 0, 0, 0, 16, 37689);
    compactAdd32(s, 15, 2, 15, 0, 0, 0);
    compactXor32(s, 15, 17, 15, 0, 0, 0);
    compactXor32(s, 14, 14, 15, 0, 0, 0);
    compactMovImm32(s, 15, 0, 0, 0, 0, 33299);
    compactMovK32(s, 15, 0, 0, 0, 16, 1891);
    compactXor32(s, 14, 14, 15, 0, 0, 0);
    compactAdd32(s, 13, 13, 0, 0, 0, 0);
    compactXor32(s, 13, 14, 13, 0, 0, 0);
    compactAddImmShift32(s, 14, 20, 0, 0, 0, 606);
    return UINT64_C(0x100022c00);
}
uint64_t r_known_1_100022c00(RState *s) {
    compactAddSPShiftImm64(s, 15, 0, 0, 0, 0, 16);
    compactMovImm32(s, 17, 0, 0, 0, 0, 23552);
    compactMovK32(s, 17, 0, 0, 0, 16, 13686);
    compactAnd32(s, 17, 15, 17, 0, 0, 0);
    compactSubLSL32(s, 15, 15, 17, 0, 1, 0);
    compactMovImm32(s, 17, 0, 0, 0, 0, 23553);
    compactMovK32(s, 17, 0, 0, 0, 16, 46454);
    compactMovImm32(s, 0, 0, 0, 0, 0, 9920);
    compactMovK32(s, 0, 0, 0, 0, 16, 172);
    compactAdd32(s, 15, 15, 17, 0, 0, 0);
    compactXor32(s, 15, 15, 0, 0, 0, 0);
    compactMul32(s, 15, 15, 16, 0, 0, 0);
    compactSub32(s, 13, 13, 15, 0, 0, 0);
    compactStoreSP32(s, 0, 13, 0, 0, 0, 16);
    compactStoreSP64(s, 0, 12, 0, 0, 0, 24);
    compactXor32(s, 12, 14, 15, 0, 0, 0);
    compactStoreSP32(s, 0, 12, 0, 0, 0, 32);
    compactLoadBase32(s, 10, 10, 0, 0, 0, 0);
    compactLoadBase32(s, 11, 11, 0, 0, 0, 0);
    compactSub32(s, 10, 11, 10, 0, 0, 0);
    compactXor32(s, 9, 10, 9, 0, 0, 0);
    compactMovImm48(s, 10, 6, 1, 1, 0, 4096);
    compactAddImm64(s, 10, 10, 0, 0, 0, 1296);
    compactMul32(s, 8, 9, 8, 0, 0, 0);
    compactLoadBase64(s, 9, 10, 0, 0, 0, 0);
    compactAddExt64(s, 9, 9, 8, 0, 0, 0);
    compactSubImmShift64(s, 9, 9, 0, 0, 12, 2557);
    compactSubImm64(s, 9, 9, 0, 0, 0, 3323);
    compactLoadBaseImm8(s, 9, 9, 0, 0, 0, 0);
    compactMovImm32(s, 11, 0, 0, 0, 0, 251);
    compactXor32(s, 9, 9, 11, 0, 0, 0);
    compactLoadBaseImm64(s, 10, 10, 0, 0, 0, 14968);
    compactMovNegImm64(s, 11, 0, 0, 0, 0, 14058);
    compactMovK64(s, 11, 0, 0, 0, 16, 62438);
    compactAdd64(s, 10, 10, 11, 0, 0, 0);
    compactAdd64(s, 9, 10, 9, 0, 0, 0);
    compactLoadBaseImm8(s, 9, 9, 0, 0, 0, 0);
    compactXor32(s, 8, 9, 8, 0, 0, 0);
    compactMovImm32(s, 9, 0, 0, 0, 0, 53346);
    compactAddExt32(s, 8, 9, 8, 0, 0, 0);
    compactLoadUXTW64(s, 8, 19, 8, 0, 3, 0);
    compactAddSPShiftImm64(s, 0, 0, 0, 0, 0, 16);
    compactMovImm64(s, 17, 0, 0, 0, 0, 20382);
    s->x[30] = UINT64_C(0x100022cb0); return s->x[8];
}
uint64_t r_known_1_100022cb0(RState *s) {
    compactLoadSXTW64(s, 8, 19, 20, 0, 3, 0);
    compactMovImm64(s, 17, 0, 0, 0, 0, 45197);
    return s->x[8];
}
uint64_t r_known_1_100025d54(RState *s) {
    compactMovImm32(s, 11, 0, 0, 0, 0, 14545);
    compactMovK32(s, 11, 0, 0, 0, 16, 22291);
    compactMovImm32(s, 12, 0, 0, 0, 0, 61407);
    compactMovK32(s, 12, 0, 0, 0, 16, 43244);
    compactAdd32(s, 10, 10, 11, 0, 0, 0);
    compactAnd32(s, 28, 10, 12, 0, 0, 0);
    compactMov32(s, 10, 13, 0, 0, 0, 0);
    compactMovImm64(s, 11, 0, 0, 0, 0, 32962);
    compactMovK64(s, 11, 0, 0, 0, 16, 26047);
    compactMovK64(s, 11, 0, 0, 0, 32, 57977);
    compactMovK64(s, 11, 0, 0, 0, 48, 15211);
    compactXor64(s, 11, 10, 11, 0, 0, 0);
    compactMovImm64(s, 12, 0, 0, 0, 0, 22481);
    compactMovK64(s, 12, 0, 0, 0, 16, 37995);
    compactMovK64(s, 12, 0, 0, 0, 32, 58055);
    compactMovK64(s, 12, 0, 0, 0, 48, 64065);
    compactAdd64(s, 11, 11, 12, 0, 0, 0);
    compactMovImm64(s, 12, 0, 0, 0, 0, 50353);
    compactMovK64(s, 12, 0, 0, 0, 16, 51871);
    compactMovK64(s, 12, 0, 0, 0, 32, 9794);
    compactMovK64(s, 12, 0, 0, 0, 48, 55133);
    compactAdd64(s, 12, 28, 12, 0, 0, 0);
    compactXor64(s, 12, 12, 10, 0, 0, 0);
    compactMovImm64(s, 13, 0, 0, 0, 0, 58755);
    compactMovK64(s, 13, 0, 0, 0, 16, 15220);
    compactMovK64(s, 13, 0, 0, 0, 32, 9980);
    compactMovK64(s, 13, 0, 0, 0, 48, 5751);
    compactMovImm64(s, 14, 0, 0, 0, 0, 38192);
    compactMovK64(s, 14, 0, 0, 0, 16, 39060);
    compactMovK64(s, 14, 0, 0, 0, 32, 50235);
    compactMovK64(s, 14, 0, 0, 0, 48, 60470);
    compactXor64(s, 10, 10, 14, 0, 0, 0);
    compactMovImm64(s, 14, 0, 0, 0, 0, 16931);
    compactMovK64(s, 14, 0, 0, 0, 16, 26944);
    compactMovK64(s, 14, 0, 0, 0, 32, 50309);
    compactMovK64(s, 14, 0, 0, 0, 48, 11548);
    compactAdd64(s, 10, 10, 14, 0, 0, 0);
    compactXor64(s, 10, 10, 11, 0, 0, 0);
    compactAdd64(s, 11, 12, 13, 0, 0, 0);
    compactXor64(s, 13, 10, 11, 0, 0, 0);
    compactMovImm32Wide(s, 10, 0, 255, 255, 0, 49841);
    compactMovImm32(s, 11, 0, 0, 0, 0, 34374);
    compactAdd32(s, 10, 28, 10, 0, 0, 0);
    compactOr32(s, 22, 10, 11, 0, 0, 0);
    compactMovImm32Wide(s, 10, 0, 255, 255, 0, 45085);
    compactMovImm64(s, 11, 0, 0, 0, 0, 4677);
    compactMovK64(s, 11, 0, 0, 0, 16, 14752);
    compactMovK64(s, 11, 0, 0, 0, 32, 65345);
    compactMovK64(s, 11, 0, 0, 0, 48, 16085);
    compactAdd32(s, 10, 28, 10, 0, 0, 0);
    compactStoreSP64(s, 0, 10, 0, 0, 0, 40);
    compactXor64(s, 10, 10, 11, 0, 0, 0);
    compactLoadBase32(s, 11, 25, 0, 0, 0, 0);
    compactLoadBase32(s, 12, 26, 0, 0, 0, 0);
    compactMovImm32(s, 14, 0, 0, 0, 0, 166);
    compactAdd32(s, 11, 12, 11, 0, 0, 0);
    compactXor32(s, 11, 11, 14, 0, 0, 0);
    compactMovImm32(s, 12, 0, 0, 0, 0, 54479);
    compactMovK32(s, 12, 0, 0, 0, 16, 2652);
    compactMul32(s, 11, 11, 12, 0, 0, 0);
    compactAddExt64(s, 8, 8, 11, 0, 0, 0);
    compactLoadBaseImm8(s, 8, 8, 0, 0, 0, 0);
    compactMovImm32(s, 12, 0, 0, 0, 0, 177);
    compactXor32(s, 8, 8, 12, 0, 0, 0);
    compactLoadUXTW8(s, 8, 9, 8, 0, 0, 0);
    compactPairStore64(s, 13, 31, 4, 0, 0, 24);
    compactAdd64(s, 9, 13, 4, 0, 0, 0);
    compactXor32(s, 8, 11, 8, 0, 0, 0);
    compactMovImm32(s, 11, 0, 0, 0, 0, 53136);
    compactAddExt32(s, 8, 11, 8, 0, 0, 0);
    compactLoadUXTW64(s, 8, 21, 8, 0, 3, 0);
    compactAdd64(s, 0, 9, 10, 0, 0, 0);
    compactMovImm64(s, 17, 0, 0, 0, 0, 31209);
    s->x[30] = UINT64_C(0x100025e7c); return s->x[8];
}
uint64_t r_known_1_100025e7c(RState *s) {
    compactCmpImm64(s, 0, 0, 0, 0, 0, 0);
    compactCSet32(s, 8, 0, 0, 0, 1, 0);
    compactMovImm32Wide(s, 9, 0, 255, 255, 0, 18765);
    compactAdd32(s, 9, 22, 9, 0, 0, 0);
    compactMul32(s, 8, 8, 9, 0, 0, 0);
    compactXor32(s, 8, 8, 28, 0, 0, 0);
    compactLoadSXTW64(s, 8, 21, 8, 0, 3, 0);
    compactMovImm32(s, 28, 0, 0, 0, 0, 8209);
    compactMovK32(s, 28, 0, 0, 0, 16, 12682);
    compactMovImm64(s, 17, 0, 0, 0, 0, 6967);
    return s->x[8];
}
uint64_t r_known_1_100029a70(RState *s) {
    compactMovImm64(s, 4, 0, 0, 0, 0, 0);
    compactMovImm32(s, 10, 0, 0, 0, 0, 35339);
    compactMovImm32(s, 14, 0, 0, 0, 0, 4100);
    compactAdd32(s, 10, 12, 10, 0, 0, 0);
    compactOr32(s, 10, 10, 14, 0, 0, 0);
    compactMovImm32Wide(s, 14, 0, 255, 255, 0, 18729);
    compactXor64(s, 14, 10, 14, 0, 0, 0);
    compactAnd64(s, 13, 14, 13, 0, 0, 0);
    compactMovImm32(s, 14, 0, 0, 0, 0, 10082);
    compactMovK32(s, 14, 0, 0, 0, 16, 14219);
    compactCmp64(s, 0, 13, 14, 0, 0, 0);
    compactCSet32EQ(s, 14, 0, 0, 0, 0, 0);
    compactMovImm32(s, 15, 0, 0, 0, 0, 27);
    compactMul32(s, 14, 14, 15, 0, 0, 0);
    compactXor32(s, 14, 14, 12, 0, 0, 0);
    compactLoadSXTW64(s, 14, 21, 14, 0, 3, 0);
    compactMovImm64(s, 17, 0, 0, 0, 0, 6130);
    return s->x[14];
}
uint64_t r_known_1_10002d8fc(RState *s) {
    compactXor32(s, 8, 9, 11, 0, 0, 0);
    compactSubsImm64(s, 10, 10, 0, 0, 0, 1);
    compactLoadXIndex8(s, 15, 24, 10, 0, 0, 0);
    compactXor32(s, 15, 15, 12, 0, 0, 0);
    compactStoreXIndex8(s, 15, 13, 10, 0, 0, 0);
    compactCSet32EQ(s, 15, 0, 0, 0, 0, 0);
    compactAdd32(s, 16, 8, 14, 0, 0, 0);
    compactMul32(s, 15, 15, 16, 0, 0, 0);
    compactXor32(s, 15, 15, 9, 0, 0, 0);
    compactLoadSXTW64(s, 15, 21, 15, 0, 3, 0);
    compactMovImm64(s, 17, 0, 0, 0, 0, 34380);
    return s->x[15];
}
uint64_t r_known_1_100035c1c(RState *s) {
    compactMovImm32(s, 13, 0, 0, 0, 0, 0);
    compactAdd32(s, 25, 30, 14, 0, 0, 0);
    compactLoadSXTW64(s, 11, 8, 30, 0, 3, 0);
    compactMovImm32(s, 28, 0, 0, 0, 0, 22822);
    compactMovK32(s, 28, 0, 0, 0, 16, 60470);
    compactMovImm64(s, 17, 0, 0, 0, 0, 21899);
    return s->x[11];
}
uint64_t r_known_1_100038e88(RState *s) {
    compactStoreBaseImm8(s, 31, 10, 0, 0, 0, 0);
    compactStoreBaseImm32(s, 31, 20, 0, 0, 0, 28);
    compactLoadSP64(s, 8, 0, 0, 0, 0, 8);
    compactStoreBase64(s, 20, 8, 0, 0, 0, 0);
    compactLoadSXTW64(s, 8, 21, 9, 0, 3, 0);
    compactMovImm32(s, 28, 0, 0, 0, 0, 31685);
    compactMovK32(s, 28, 0, 0, 0, 16, 52853);
    compactMovImm64(s, 17, 0, 0, 0, 0, 40907);
    return s->x[8];
}
uint64_t r_known_1_100038ff0(RState *s) {
    compactMovImm32Wide(s, 11, 0, 255, 255, 0, 42230);
    compactMovImm32(s, 12, 0, 0, 0, 0, 10882);
    compactAdd32(s, 11, 25, 11, 0, 0, 0);
    compactOr32(s, 11, 11, 12, 0, 0, 0);
    return UINT64_C(0x100039000);
}
uint64_t r_known_1_100039000(RState *s) {
    compactStoreBaseImm32(s, 13, 9, 0, 0, 0, 4);
    compactMovImm32(s, 12, 0, 0, 0, 0, 36243);
    compactMovK32(s, 12, 0, 0, 0, 16, 33834);
    compactAdds32(s, 12, 13, 12, 0, 0, 0);
    compactSub32(s, 10, 10, 13, 0, 0, 0);
    compactCSEL32(s, 10, 12, 10, 0, 5, 0);
    compactMovImm32(s, 12, 0, 0, 0, 0, 63085);
    compactMovK32(s, 12, 0, 0, 0, 16, 32733);
    compactXor32(s, 12, 10, 12, 0, 0, 0);
    compactMovImm32(s, 14, 0, 0, 0, 0, 51024);
    compactMovK32(s, 14, 0, 0, 0, 16, 65467);
    compactXor32(s, 14, 11, 14, 0, 0, 0);
    compactAndLSL32(s, 10, 14, 10, 0, 1, 0);
    compactMovImm32(s, 14, 0, 0, 0, 0, 31744);
    compactMovK32(s, 14, 0, 0, 0, 16, 64503);
    compactAdd32(s, 12, 12, 14, 0, 0, 0);
    compactAdd32(s, 16, 12, 10, 0, 0, 0);
    compactLoadSXTW64(s, 15, 8, 25, 0, 3, 0);
    compactMovImm32(s, 10, 0, 0, 0, 0, 26756);
    compactMovImm32(s, 12, 0, 0, 0, 0, 63876);
    compactMovK32(s, 12, 0, 0, 0, 16, 33833);
    compactMovImm32(s, 14, 0, 0, 0, 0, 78);
    compactMovImm32(s, 17, 0, 0, 0, 0, 13095);
    compactXor32(s, 17, 11, 17, 0, 0, 0);
    compactAddLSL32(s, 17, 17, 17, 0, 1, 0);
    compactLSLImm32(s, 1, 17, 0, 0, 1, 0);
    compactMovNegImm64(s, 17, 0, 0, 0, 0, 37903);
    compactXor64(s, 2, 1, 17, 0, 0, 0);
    compactMovNegImm64(s, 3, 0, 0, 0, 0, 51640);
    compactMovK64(s, 3, 0, 0, 0, 16, 4266);
    compactMovK64(s, 3, 0, 0, 0, 32, 65534);
    compactMovImm32(s, 4, 0, 0, 0, 0, 41787);
    compactMovK32(s, 4, 0, 0, 0, 16, 8782);
    compactMovImm32(s, 5, 0, 0, 0, 0, 49106);
    compactMovImm64(s, 17, 0, 0, 0, 0, 22794);
    return s->x[15];
}
uint64_t r_known_1_100040340(RState *s) {
    compactMovImm32Wide(s, 11, 0, 255, 255, 0, 58712);
    compactMovImm32(s, 16, 0, 0, 0, 0, 41165);
    compactMovK32(s, 16, 0, 0, 0, 16, 44074);
    compactMovImm32(s, 17, 0, 0, 0, 0, 53420);
    compactMovK32(s, 17, 0, 0, 0, 16, 44074);
    compactAdd32(s, 14, 13, 11, 0, 0, 0);
    compactXor32(s, 11, 14, 17, 0, 0, 0);
    compactMovImm32Wide(s, 17, 0, 255, 255, 0, 29523);
    compactAdd32(s, 12, 12, 13, 0, 0, 0);
    compactAdd32(s, 12, 12, 17, 0, 0, 0);
    compactMovImm32(s, 17, 0, 0, 0, 0, 4922);
    compactMovK32(s, 17, 0, 0, 0, 16, 43008);
    compactAdd32(s, 16, 15, 16, 0, 0, 0);
    compactCmp32(s, 0, 16, 17, 0, 0, 0);
    compactCSet32(s, 1, 0, 0, 0, 11, 0);
    compactAdd32(s, 11, 12, 11, 0, 0, 0);
    compactCmp32(s, 0, 11, 17, 0, 0, 0);
    compactCSet32(s, 12, 0, 0, 0, 11, 0);
    compactXor32(s, 17, 1, 12, 0, 0, 0);
    compactCmp32(s, 0, 16, 11, 0, 0, 0);
    compactCSet32(s, 11, 0, 0, 0, 11, 0);
    compactCmpImm32(s, 0, 17, 0, 0, 0, 0);
    compactCSEL32(s, 11, 12, 11, 0, 1, 0);
    compactMovImm32(s, 12, 0, 0, 0, 0, 61);
    compactMul32(s, 11, 11, 12, 0, 0, 0);
    compactXor32(s, 11, 11, 13, 0, 0, 0);
    compactLoadSXTW64(s, 12, 10, 11, 0, 3, 0);
    compactMovImm32(s, 11, 0, 0, 0, 0, 1084);
    compactMovK32(s, 11, 0, 0, 0, 16, 24300);
    compactMovImm64(s, 17, 0, 0, 0, 0, 65120);
    return s->x[12];
}
uint64_t r_known_1_100048f00(RState *s) {
    compactCmp32(s, 0, 24, 15, 0, 0, 0);
    compactCSet32(s, 17, 0, 0, 0, 12, 0);
    compactOr32(s, 12, 0, 1, 0, 0, 0);
    compactLoadBaseImm64(s, 10, 23, 0, 0, 0, 8);
    compactAdd32(s, 26, 25, 2, 0, 0, 0);
    compactLoadSXTW32(s, 10, 10, 26, 0, 2, 0);
    compactXor64(s, 10, 10, 3, 0, 0, 0);
    compactAdd64(s, 11, 11, 4, 0, 0, 0);
    compactAdd64(s, 10, 11, 10, 0, 0, 0);
    compactAndLSL32(s, 11, 5, 10, 0, 1, 0);
    compactXor32(s, 27, 12, 6, 0, 0, 0);
    compactAdd32(s, 27, 10, 27, 0, 0, 0);
    compactSub32(s, 11, 27, 11, 0, 0, 0);
    compactLoadBaseImm64(s, 27, 9, 0, 0, 0, 8);
    compactStoreSXTW32(s, 11, 27, 26, 0, 2, 0);
    compactLSRImm64(s, 11, 10, 0, 0, 32, 0);
    compactAddImmShift32(s, 10, 25, 0, 0, 0, 1);
    compactAdd32(s, 25, 25, 7, 0, 0, 0);
    compactCmp32(s, 0, 25, 13, 0, 0, 0);
    compactCSet32(s, 26, 0, 0, 0, 11, 0);
    compactXor32(s, 26, 17, 26, 0, 0, 0);
    compactCmp32(s, 0, 25, 16, 0, 0, 0);
    compactCSet32(s, 25, 0, 0, 0, 11, 0);
    compactCmpImm32(s, 0, 26, 0, 0, 0, 0);
    compactCSEL32(s, 17, 17, 25, 0, 1, 0);
    compactMul32(s, 17, 17, 19, 0, 0, 0);
    compactXor32(s, 17, 17, 14, 0, 0, 0);
    compactLoadSXTW64(s, 26, 20, 17, 0, 3, 0);
    compactMov64(s, 25, 10, 0, 0, 0, 0);
    compactMovImm64(s, 17, 0, 0, 0, 0, 56637);
    return s->x[26];
}
uint64_t r_known_1_10004a38c(RState *s) {
    compactStoreBaseImm32(s, 20, 0, 0, 0, 0, 16);
    compactPairLoad64(s, 20, 31, 19, 0, 0, 16);
    compactAddSPImm(s, 0, 0, 0, 0, 0, 32);
    return s->x[30];
}
uint64_t r_known_1_10004c534(RState *s) {
    compactStoreBase32(s, 9, 0, 0, 0, 0, 0);
    compactPairLoad64(s, 29, 31, 30, 0, 0, 96);
    compactPairLoad64(s, 20, 31, 19, 0, 0, 80);
    compactPairLoad64(s, 22, 31, 21, 0, 0, 64);
    compactPairLoad64(s, 24, 31, 23, 0, 0, 48);
    compactPairLoad64(s, 26, 31, 25, 0, 0, 32);
    compactPairLoad64(s, 28, 31, 27, 0, 0, 16);
    compactAddSPImm(s, 0, 0, 0, 0, 0, 112);
    return s->x[30];
}
uint64_t r_known_1_1000519e8(RState *s) {
    compactAddImmShift32(s, 10, 12, 0, 0, 0, 21);
    compactMovImm32(s, 12, 0, 0, 0, 0, 7386);
    compactXor32(s, 12, 10, 12, 0, 0, 0);
    compactMovImm32(s, 14, 0, 0, 0, 0, 7801);
    compactMul32(s, 12, 12, 14, 0, 0, 0);
    compactMovImm32(s, 14, 0, 0, 0, 0, 37300);
    compactMovK32(s, 14, 0, 0, 0, 16, 14219);
    compactXor64(s, 13, 13, 14, 0, 0, 0);
    compactXor64(s, 13, 13, 12, 0, 0, 0);
    compactSubImm64(s, 14, 13, 0, 0, 0, 1);
    compactLoadXIndex8(s, 14, 24, 14, 0, 0, 0);
    compactCmpImm32(s, 0, 14, 0, 0, 0, 52);
    compactCSet32EQ(s, 14, 0, 0, 0, 0, 0);
    compactSub64(s, 4, 13, 14, 0, 0, 0);
    compactLoadSXTW64(s, 13, 21, 10, 0, 3, 0);
    compactMov64(s, 10, 12, 0, 0, 0, 0);
    compactMovImm64(s, 17, 0, 0, 0, 0, 6130);
    return s->x[13];
}
uint64_t r_known_1_1000534a0(RState *s) {
    compactAddImmShift32(s, 25, 5, 0, 0, 0, 75);
    compactMovImm32Wide(s, 13, 0, 255, 255, 0, 46274);
    compactAdd32(s, 13, 5, 13, 0, 0, 0);
    compactMovImm32(s, 17, 0, 0, 0, 0, 16932);
    compactOr32(s, 30, 13, 17, 0, 0, 0);
    compactMovImm32(s, 13, 0, 0, 0, 0, 64029);
    compactMovK32(s, 13, 0, 0, 0, 16, 52856);
    compactXor32(s, 17, 28, 13, 0, 0, 0);
    compactLoadBaseImm64(s, 6, 9, 0, 0, 0, 8);
    compactAddImmShift32(s, 13, 12, 0, 0, 0, 1);
    compactAdd32(s, 12, 12, 7, 0, 0, 0);
    compactStoreSXTW32(s, 17, 6, 12, 0, 2, 0);
    compactCmp32(s, 0, 4, 19, 0, 0, 0);
    compactCSet32EQ(s, 12, 0, 0, 0, 0, 0);
    compactAdd32(s, 17, 30, 20, 0, 0, 0);
    compactMul32(s, 12, 17, 12, 0, 0, 0);
    compactXor32(s, 12, 12, 5, 0, 0, 0);
    compactLoadSXTW64(s, 5, 8, 12, 0, 3, 0);
    compactMov64(s, 4, 11, 0, 0, 0, 0);
    compactMov64(s, 12, 13, 0, 0, 0, 0);
    compactMovImm64(s, 17, 0, 0, 0, 0, 21043);
    return s->x[5];
}
uint64_t r_known_1_100054f28(RState *s) {
    compactMovImm32(s, 10, 0, 0, 0, 0, 52962);
    compactMovK32(s, 10, 0, 0, 0, 16, 51360);
    compactMovImm32(s, 11, 0, 0, 0, 0, 51133);
    compactMovK32(s, 11, 0, 0, 0, 16, 14175);
    compactAdd32(s, 10, 5, 10, 0, 0, 0);
    compactAnd32(s, 10, 10, 11, 0, 0, 0);
    compactMovImm32Wide(s, 11, 0, 255, 255, 0, 15558);
    compactXor64(s, 11, 10, 11, 0, 0, 0);
    compactAnd64(s, 11, 11, 8, 0, 0, 0);
    compactLoadXIndexShift32(s, 11, 6, 11, 0, 2, 0);
    compactMovImm32(s, 12, 0, 0, 0, 0, 41787);
    compactMovK32(s, 12, 0, 0, 0, 16, 8782);
    compactXor32(s, 13, 11, 12, 0, 0, 0);
    compactLoadSXTW64(s, 1, 9, 5, 0, 3, 0);
    compactMovImm32(s, 14, 0, 0, 0, 0, 31);
    compactMovImm32(s, 11, 0, 0, 0, 0, 27350);
    compactMovK32(s, 11, 0, 0, 0, 16, 30946);
    compactMovImm32(s, 12, 0, 0, 0, 0, 17433);
    compactXor32(s, 12, 10, 12, 0, 0, 0);
    compactMovImm32(s, 15, 0, 0, 0, 0, 49979);
    compactXor32(s, 15, 10, 15, 0, 0, 0);
    compactMovImm64(s, 17, 0, 0, 0, 0, 50479);
    return s->x[1];
}
uint64_t r_known_1_1000596c8(RState *s) {
    compactMov64(s, 10, 27, 0, 0, 0, 0);
    compactMov64(s, 27, 20, 0, 0, 0, 0);
    compactPairStore64(s, 10, 31, 0, 0, 0, 8);
    compactMovImm32(s, 8, 0, 0, 0, 0, 10034);
    compactLoadSP64(s, 22, 0, 0, 0, 0, 40);
    compactAdd32(s, 20, 22, 8, 0, 0, 0);
    compactAddSPShiftImm64(s, 8, 0, 0, 0, 0, 64);
    compactMovImm32(s, 9, 0, 0, 0, 0, 4399);
    compactMovK32(s, 9, 0, 0, 0, 16, 39264);
    compactOr32(s, 9, 8, 9, 0, 0, 0);
    compactMovImm32(s, 10, 0, 0, 0, 0, 4392);
    compactMovK32(s, 10, 0, 0, 0, 16, 39264);
    compactAnd32(s, 8, 8, 10, 0, 0, 0);
    compactMovImm32(s, 10, 0, 0, 0, 0, 26660);
    compactMovK32(s, 10, 0, 0, 0, 16, 17696);
    compactSub32(s, 8, 9, 8, 0, 0, 0);
    compactXor32(s, 8, 8, 10, 0, 0, 0);
    compactMovImm32(s, 9, 0, 0, 0, 0, 41593);
    compactMovK32(s, 9, 0, 0, 0, 16, 22899);
    compactAddSPShiftImm64(s, 10, 0, 0, 0, 0, 48);
    compactStoreSP64(s, 0, 10, 0, 0, 0, 72);
    compactMSub32(s, 8, 8, 9, 22, 0, 0);
    compactMovImm32(s, 9, 0, 0, 0, 0, 32666);
    compactAdd32(s, 8, 8, 9, 0, 0, 0);
    compactStoreSP32(s, 0, 8, 0, 0, 0, 64);
    compactLoadBase32(s, 8, 25, 0, 0, 0, 0);
    compactLoadBase32(s, 9, 26, 0, 0, 0, 0);
    compactSub32(s, 8, 9, 8, 0, 0, 0);
    compactMovImm32(s, 9, 0, 0, 0, 0, 166);
    compactXor32(s, 8, 8, 9, 0, 0, 0);
    compactMovImm48(s, 9, 5, 1, 1, 0, 57344);
    compactAddImm64(s, 9, 9, 0, 0, 0, 1248);
    compactMovImm32(s, 10, 0, 0, 0, 0, 54479);
    compactMovK32(s, 10, 0, 0, 0, 16, 2652);
    compactMul32(s, 8, 8, 10, 0, 0, 0);
    compactLoadBaseImm64(s, 10, 9, 0, 0, 0, 10192);
    compactAddExt64(s, 10, 10, 8, 0, 0, 0);
    compactMovNegImm64(s, 11, 0, 0, 0, 0, 23815);
    compactMovK64(s, 11, 0, 0, 0, 16, 49421);
    compactAdd64(s, 10, 10, 11, 0, 0, 0);
    compactLoadBaseImm8(s, 10, 10, 0, 0, 0, 0);
    compactMovImm32(s, 11, 0, 0, 0, 0, 53);
    compactXor32(s, 10, 10, 11, 0, 0, 0);
    compactLoadBase64(s, 9, 9, 0, 0, 0, 0);
    compactMovNegImm64(s, 11, 0, 0, 0, 0, 639);
    compactMovK64(s, 11, 0, 0, 0, 16, 40825);
    compactAdd64(s, 9, 9, 11, 0, 0, 0);
    compactAdd64(s, 9, 9, 10, 0, 0, 0);
    compactLoadBaseImm8(s, 9, 9, 0, 0, 0, 0);
    compactXor32(s, 8, 9, 8, 0, 0, 0);
    compactMovImm32(s, 9, 0, 0, 0, 0, 53116);
    compactAddExt32(s, 8, 9, 8, 0, 0, 0);
    compactLoadUXTW64(s, 8, 21, 8, 0, 3, 0);
    compactAddSPShiftImm64(s, 0, 0, 0, 0, 0, 64);
    compactMovImm64(s, 17, 0, 0, 0, 0, 41715);
    s->x[30] = UINT64_C(0x1000597a8); return s->x[8];
}
uint64_t r_known_1_1000597a8(RState *s) {
    compactLoadSP32(s, 28, 0, 0, 0, 0, 80);
    compactMovImm32(s, 8, 0, 0, 0, 0, 31685);
    compactMovK32(s, 8, 0, 0, 0, 16, 52853);
    compactCmp32(s, 0, 28, 8, 0, 0, 0);
    compactCSet32EQ(s, 8, 0, 0, 0, 0, 0);
    compactMovImm32(s, 9, 0, 0, 0, 0, 10449);
    compactAdd32(s, 9, 22, 9, 0, 0, 0);
    compactStoreSP32(s, 0, 20, 0, 0, 0, 4);
    compactXor32(s, 9, 9, 20, 0, 0, 0);
    compactMul32(s, 8, 8, 9, 0, 0, 0);
    compactXor32(s, 8, 8, 22, 0, 0, 0);
    compactLoadSXTW64(s, 8, 21, 8, 0, 3, 0);
    compactMovImm64(s, 17, 0, 0, 0, 0, 64448);
    return s->x[8];
}
uint64_t r_known_1_10005c500(RState *s) {
    compactAndImm64(s, 11, 0, 0, 0, 0, 3);
    compactCmpImm64(s, 0, 11, 0, 0, 0, 2);
    compactCSet32EQ(s, 11, 0, 0, 0, 0, 0);
    compactMovImm32(s, 12, 0, 0, 0, 0, 57769);
    compactMul32(s, 11, 11, 12, 0, 0, 0);
    compactXor32(s, 11, 10, 11, 0, 0, 0);
    compactLoadSXTW64(s, 11, 21, 11, 0, 3, 0);
    compactMovImm32(s, 28, 0, 0, 0, 0, 8220);
    compactMovK32(s, 28, 0, 0, 0, 16, 12682);
    compactMovImm64(s, 17, 0, 0, 0, 0, 40907);
    return s->x[11];
}
uint64_t r_known_1_10005f70c(RState *s) {
    compactMovImm32(s, 8, 0, 0, 0, 0, 12835);
    compactLoadBaseImm8(s, 9, 19, 0, 0, 0, 12);
    compactSub32(s, 10, 9, 27, 0, 0, 0);
    compactMovImm32(s, 9, 0, 0, 0, 0, 56688);
    compactPairLoad64(s, 11, 31, 12, 0, 0, 40);
    compactAdd32(s, 11, 11, 8, 0, 0, 0);
    compactXor32(s, 9, 11, 9, 0, 0, 0);
    compactMovImm32(s, 8, 0, 0, 0, 0, 16983);
    compactAdd32(s, 8, 11, 8, 0, 0, 0);
    compactMovImm32(s, 13, 0, 0, 0, 0, 16884);
    compactAdd32(s, 13, 11, 13, 0, 0, 0);
    compactMovImm32(s, 14, 0, 0, 0, 0, 63);
    compactMAdd32(s, 10, 13, 10, 14, 0, 0);
    compactLoadSP64(s, 20, 0, 0, 0, 0, 16);
    compactStoreBaseImm8(s, 10, 20, 0, 0, 0, 24);
    compactPairStore64(s, 12, 20, 31, 0, 0, 0);
    compactStoreBaseImm64(s, 31, 20, 0, 0, 0, 16);
    compactAddImm64(s, 13, 20, 0, 0, 0, 32);
    compactMovNegImm64(s, 10, 0, 0, 0, 0, 36206);
    compactAdd64(s, 10, 9, 10, 0, 0, 0);
    compactLoadSP64(s, 0, 0, 0, 0, 0, 32);
    compactLSLReg64(s, 10, 0, 10, 0, 0, 0);
    compactMovImm32(s, 12, 0, 0, 0, 0, 47686);
    compactMovK32(s, 12, 0, 0, 0, 16, 614);
    compactAnd32(s, 10, 10, 12, 0, 0, 0);
    compactSubs32(s, 10, 0, 10, 0, 0, 0);
    compactCSet32EQ(s, 12, 0, 0, 0, 0, 0);
    compactMovImm32(s, 14, 0, 0, 0, 0, 94);
    compactMul32(s, 12, 12, 14, 0, 0, 0);
    compactXor32(s, 11, 12, 11, 0, 0, 0);
    compactLoadSXTW64(s, 11, 21, 11, 0, 3, 0);
    compactMovImm64(s, 17, 0, 0, 0, 0, 29224);
    return s->x[11];
}
uint64_t r_known_1_1000602d8(RState *s) {
    compactXor32(s, 21, 1, 12, 0, 0, 0);
    compactXor32(s, 17, 1, 13, 0, 0, 0);
    compactCmp32(s, 0, 24, 17, 0, 0, 0);
    compactCSet32(s, 17, 0, 0, 0, 11, 0);
    compactMul32(s, 17, 17, 14, 0, 0, 0);
    compactXor32(s, 17, 17, 1, 0, 0, 0);
    compactLoadSXTW64(s, 1, 22, 17, 0, 3, 0);
    compactMovImm64(s, 17, 0, 0, 0, 0, 39409);
    return s->x[1];
}
uint64_t r_known_1_1000613ec(RState *s) {
    compactSubImm64(s, 12, 12, 0, 0, 0, 1);
    compactMovImm32Wide(s, 11, 0, 255, 255, 0, 32021);
    compactAdd32(s, 11, 4, 11, 0, 0, 0);
    compactMovImm32(s, 17, 0, 0, 0, 0, 4356);
    compactOr32(s, 5, 11, 17, 0, 0, 0);
    return UINT64_C(0x100061400);
}
uint64_t r_known_1_100061400(RState *s) {
    compactMovImm32Wide(s, 11, 0, 255, 255, 0, 30169);
    compactAdd32(s, 11, 4, 11, 0, 0, 0);
    compactMovImm32(s, 17, 0, 0, 0, 0, 6208);
    compactOr32(s, 28, 11, 17, 0, 0, 0);
    compactMovImm32(s, 11, 0, 0, 0, 0, 14597);
    compactMovK32(s, 11, 0, 0, 0, 16, 34890);
    compactXor32(s, 11, 3, 11, 0, 0, 0);
    compactMovImm32(s, 17, 0, 0, 0, 0, 34735);
    compactMovK32(s, 17, 0, 0, 0, 16, 30645);
    compactAdd32(s, 17, 5, 17, 0, 0, 0);
    compactAdd32(s, 11, 11, 17, 0, 0, 0);
    compactXor32(s, 17, 3, 1, 0, 0, 0);
    compactAdd32(s, 6, 28, 7, 0, 0, 0);
    compactAdd32(s, 17, 17, 6, 0, 0, 0);
    compactXor32(s, 3, 3, 2, 0, 0, 0);
    compactAdd32(s, 3, 3, 19, 0, 0, 0);
    compactXor32(s, 17, 17, 3, 0, 0, 0);
    compactXor32(s, 11, 17, 11, 0, 0, 0);
    compactXor32(s, 17, 15, 20, 0, 0, 0);
    compactAdd32(s, 17, 17, 21, 0, 0, 0);
    compactXor32(s, 3, 15, 22, 0, 0, 0);
    compactAdd32(s, 3, 3, 23, 0, 0, 0);
    compactXor32(s, 17, 17, 3, 0, 0, 0);
    compactXor32(s, 15, 15, 24, 0, 0, 0);
    compactAdd32(s, 15, 15, 25, 0, 0, 0);
    compactXor32(s, 15, 17, 15, 0, 0, 0);
    compactAdd32(s, 11, 11, 26, 0, 0, 0);
    compactCmp32(s, 0, 11, 27, 0, 0, 0);
    compactCSet32LO(s, 17, 0, 0, 0, 0, 0);
    compactAdd32(s, 15, 15, 26, 0, 0, 0);
    compactCmp32(s, 0, 15, 27, 0, 0, 0);
    compactCSet32LO(s, 3, 0, 0, 0, 0, 0);
    compactXor32(s, 17, 3, 17, 0, 0, 0);
    compactCmp32(s, 0, 11, 15, 0, 0, 0);
    compactCSet32LO(s, 11, 0, 0, 0, 0, 0);
    compactCmpImm32(s, 0, 17, 0, 0, 0, 0);
    compactCSEL32(s, 11, 3, 11, 0, 1, 0);
    compactMul32(s, 11, 11, 14, 0, 0, 0);
    compactXor32(s, 11, 11, 4, 0, 0, 0);
    compactLoadSXTW64(s, 11, 10, 11, 0, 3, 0);
    compactMovImm64(s, 17, 0, 0, 0, 0, 6763);
    return s->x[11];
}
uint64_t r_known_1_1000614a8(RState *s) {
    compactAdd32(s, 8, 3, 28, 0, 0, 0);
    compactStoreBaseImm32(s, 8, 0, 0, 0, 0, 40);
    compactLoadSP64(s, 8, 0, 0, 0, 0, 72);
    compactMovImm48(s, 9, 6, 1, 1, 0, 53248);
    compactLoadBaseImm64(s, 9, 9, 0, 0, 0, 1032);
    compactLoadBase64(s, 9, 9, 0, 0, 0, 0);
    compactCmp64(s, 0, 9, 8, 0, 0, 0);
    return r_conditionIndex(s, 1) ? UINT64_C(0x1000614e8) : UINT64_C(0x1000614c8);
}
uint64_t r_known_1_1000614c8(RState *s) {
    compactPairLoad64(s, 29, 31, 30, 0, 0, 160);
    compactPairLoad64(s, 20, 31, 19, 0, 0, 144);
    compactPairLoad64(s, 22, 31, 21, 0, 0, 128);
    compactPairLoad64(s, 24, 31, 23, 0, 0, 112);
    compactPairLoad64(s, 26, 31, 25, 0, 0, 96);
    compactPairLoad64(s, 28, 31, 27, 0, 0, 80);
    compactAddSPImm(s, 0, 0, 0, 0, 0, 176);
    return s->x[30];
}
uint64_t r_known_1_100061f80(RState *s) {
    compactMovFromSP(s, 8, 0, 0, 0, 0, 0);
    compactLoadSP64(s, 9, 0, 0, 0, 0, 8);
    compactAdd64(s, 8, 8, 9, 0, 0, 0);
    compactMovSP(s, 0, 8, 0, 0, 0, 0);
    compactLoadSP32(s, 28, 0, 0, 0, 0, 56);
    compactMovImm32(s, 8, 0, 0, 0, 0, 15388);
    compactMovK32(s, 8, 0, 0, 0, 16, 28195);
    compactMovImm64(s, 9, 0, 0, 0, 0, 39284);
    compactMovK64(s, 9, 0, 0, 0, 16, 63956);
    compactMovK64(s, 9, 0, 0, 0, 32, 41618);
    compactMovK64(s, 9, 0, 0, 0, 48, 19939);
    compactXor64(s, 9, 26, 9, 0, 0, 0);
    compactMovImm32(s, 10, 0, 0, 0, 0, 43047);
    compactMovK32(s, 10, 0, 0, 0, 16, 55889);
    compactMul64(s, 9, 9, 10, 0, 0, 0);
    compactMovImm32(s, 26, 0, 0, 0, 0, 31685);
    compactMovK32(s, 26, 0, 0, 0, 16, 52853);
    compactAdd64(s, 10, 9, 26, 0, 0, 0);
    compactStoreSP64(s, 0, 10, 0, 0, 0, 40);
    compactMovImm32(s, 10, 0, 0, 0, 0, 5122);
    compactXor32(s, 10, 27, 10, 0, 0, 0);
    compactAdd32(s, 11, 27, 9, 0, 0, 0);
    compactAdd32(s, 10, 10, 9, 0, 0, 0);
    compactPairStore32(s, 10, 31, 11, 0, 0, 24);
    compactSub64(s, 10, 28, 9, 0, 0, 0);
    compactStoreSP64(s, 0, 10, 0, 0, 0, 56);
    compactMovImm32(s, 10, 0, 0, 0, 0, 27971);
    compactMovK32(s, 10, 0, 0, 0, 16, 20345);
    compactAdd32(s, 10, 9, 10, 0, 0, 0);
    compactAdd32(s, 10, 10, 24, 0, 0, 0);
    compactStoreSP32(s, 0, 9, 0, 0, 0, 64);
    compactAdd32(s, 8, 24, 8, 0, 0, 0);
    return UINT64_C(0x100062000);
}
uint64_t r_known_1_100062000(RState *s) {
    compactXor32(s, 8, 8, 9, 0, 0, 0);
    compactPairStore32(s, 10, 31, 8, 0, 0, 48);
    compactLoadBase32(s, 8, 20, 0, 0, 0, 0);
    compactLoadBase32(s, 9, 22, 0, 0, 0, 0);
    compactMovImm32(s, 10, 0, 0, 0, 0, 166);
    compactXor32(s, 8, 8, 10, 0, 0, 0);
    compactXor32(s, 8, 8, 9, 0, 0, 0);
    compactMovImm32(s, 9, 0, 0, 0, 0, 54479);
    compactMovK32(s, 9, 0, 0, 0, 16, 2652);
    compactMul32(s, 8, 8, 9, 0, 0, 0);
    compactLoadBaseImm64(s, 9, 19, 0, 0, 0, 24096);
    compactAddExt64(s, 9, 9, 8, 0, 0, 0);
    compactSubImmShift64(s, 9, 9, 0, 0, 12, 2557);
    compactSubImm64(s, 9, 9, 0, 0, 0, 3323);
    compactLoadBaseImm8(s, 9, 9, 0, 0, 0, 0);
    compactMovImm32(s, 10, 0, 0, 0, 0, 251);
    compactXor32(s, 9, 9, 10, 0, 0, 0);
    compactMovImm32(s, 10, 0, 0, 0, 0, 39064);
    compactAdd64(s, 10, 19, 10, 0, 0, 0);
    compactLoadBase64(s, 10, 10, 0, 0, 0, 0);
    compactMovNegImm64(s, 11, 0, 0, 0, 0, 14058);
    compactMovK64(s, 11, 0, 0, 0, 16, 62438);
    compactAdd64(s, 10, 10, 11, 0, 0, 0);
    compactAdd64(s, 9, 10, 9, 0, 0, 0);
    compactLoadBaseImm8(s, 9, 9, 0, 0, 0, 0);
    compactXor32(s, 8, 9, 8, 0, 0, 0);
    compactMovImm32(s, 9, 0, 0, 0, 0, 53116);
    compactAddExt32(s, 8, 9, 8, 0, 0, 0);
    compactLoadUXTW64(s, 8, 23, 8, 0, 3, 0);
    compactAddSPShiftImm64(s, 0, 0, 0, 0, 0, 24);
    compactMovImm64(s, 17, 0, 0, 0, 0, 41822);
    s->x[30] = UINT64_C(0x100062080); return s->x[8];
}
