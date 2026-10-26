#include "native-runtime.h"
#include "native-ops.inc"
uint64_t r_known_1_100062080(RState *s) {
    compactLoadSignedWordBase64(s, 8, 31, 0, 0, 0, 32);
    compactAddLSL64(s, 8, 23, 8, 0, 3, 0);
    compactLoadBase64(s, 8, 8, 0, 0, 0, 0);
    compactMovImm64(s, 17, 0, 0, 0, 0, 63767);
    return s->x[8];
}
uint64_t r_known_1_1000623fc(RState *s) {
    compactMovImm32(s, 12, 0, 0, 0, 0, 28061);
    return UINT64_C(0x100062400);
}
uint64_t r_known_1_100062400(RState *s) {
    compactXor32(s, 12, 11, 12, 0, 0, 0);
    compactMovImm32(s, 14, 0, 0, 0, 0, 467);
    compactMul32(s, 21, 12, 14, 0, 0, 0);
    compactAdd32(s, 14, 13, 16, 0, 0, 0);
    compactMovImm32(s, 15, 0, 0, 0, 0, 36243);
    compactMovK32(s, 15, 0, 0, 0, 16, 33834);
    compactMul32(s, 14, 14, 15, 0, 0, 0);
    compactMAdd32(s, 13, 13, 16, 14, 0, 0);
    compactMovImm32(s, 14, 0, 0, 0, 0, 17001);
    compactMovK32(s, 14, 0, 0, 0, 16, 23175);
    compactAdd32(s, 13, 13, 14, 0, 0, 0);
    compactCmpImm32(s, 0, 13, 0, 0, 0, 0);
    compactCSet32(s, 13, 0, 0, 0, 11, 0);
    compactXor32(s, 13, 13, 21, 0, 0, 0);
    compactAndImm32(s, 13, 13, 0, 0, 0, 1);
    compactAddImmShift32(s, 14, 12, 0, 0, 0, 83);
    compactMul32(s, 13, 13, 14, 0, 0, 0);
    compactXor32(s, 11, 13, 11, 0, 0, 0);
    compactLoadSXTW64(s, 11, 19, 11, 0, 3, 0);
    compactMovImm64(s, 17, 0, 0, 0, 0, 33553);
    return s->x[11];
}
uint64_t r_known_1_100065d6c(RState *s) {
    compactMov32(s, 13, 12, 0, 0, 0, 0);
    compactLSLReg64(s, 17, 13, 15, 0, 0, 0);
    compactAnd64(s, 17, 17, 16, 0, 0, 0);
    compactAdd64(s, 0, 13, 11, 0, 0, 0);
    compactSub64(s, 13, 0, 17, 0, 0, 0);
    compactXor64(s, 17, 13, 11, 0, 0, 0);
    compactLoadXIndex8(s, 17, 23, 17, 0, 0, 0);
    compactCmpImm32(s, 0, 17, 0, 0, 0, 27);
    compactCSet32(s, 17, 0, 0, 0, 1, 0);
    compactAddImmShift32(s, 12, 12, 0, 0, 0, 1);
    compactOrLSL32(s, 17, 17, 17, 0, 2, 0);
    compactXor32(s, 17, 17, 14, 0, 0, 0);
    compactLoadSXTW64(s, 1, 21, 17, 0, 3, 0);
    compactMovImm64(s, 17, 0, 0, 0, 0, 54808);
    return s->x[1];
}
uint64_t r_known_1_10006612c(RState *s) {
    compactMovImm32(s, 10, 0, 0, 0, 0, 58030);
    compactXor32(s, 10, 9, 10, 0, 0, 0);
    compactMovImm32(s, 9, 0, 0, 0, 0, 5926);
    compactAdd32(s, 9, 10, 9, 0, 0, 0);
    compactMovImm32Wide(s, 12, 0, 255, 255, 0, 53264);
    compactAdd32(s, 12, 10, 12, 0, 0, 0);
    compactCmp32(s, 0, 11, 12, 0, 0, 0);
    compactCSet32EQ(s, 11, 0, 0, 0, 0, 0);
    compactMovImm32(s, 12, 0, 0, 0, 0, 61189);
    compactMul32(s, 11, 11, 12, 0, 0, 0);
    compactXor32(s, 11, 11, 10, 0, 0, 0);
    compactLoadSXTW64(s, 13, 22, 11, 0, 3, 0);
    compactMovImm64(s, 17, 0, 0, 0, 0, 50158);
    return s->x[13];
}
uint64_t r_known_1_100066b40(RState *s) {
    compactMovImm32(s, 10, 0, 0, 0, 0, 27633);
    compactMovK32(s, 10, 0, 0, 0, 16, 31774);
    compactMovImm32(s, 11, 0, 0, 0, 0, 40101);
    compactMovK32(s, 11, 0, 0, 0, 16, 33761);
    compactAdd32(s, 10, 6, 10, 0, 0, 0);
    compactAnd32(s, 10, 10, 11, 0, 0, 0);
    compactMovImm32(s, 11, 0, 0, 0, 0, 36242);
    compactMovK32(s, 11, 0, 0, 0, 16, 33834);
    compactMovImm32(s, 12, 0, 0, 0, 0, 18485);
    compactMovK32(s, 12, 0, 0, 0, 16, 63402);
    compactSub32(s, 10, 10, 15, 0, 0, 0);
    compactAdd32(s, 10, 10, 12, 0, 0, 0);
    compactMovImm32Wide(s, 12, 0, 255, 127, 0, 65535);
    compactAdd32(s, 11, 13, 11, 0, 0, 0);
    compactCmp32(s, 0, 11, 12, 0, 0, 0);
    compactCSEL32(s, 10, 15, 10, 0, 3, 0);
    compactStoreBaseImm32(s, 10, 9, 0, 0, 0, 4);
    compactLoadSXTW64(s, 8, 8, 6, 0, 3, 0);
    compactMovImm32(s, 9, 0, 0, 0, 0, 62774);
    compactMovK32(s, 9, 0, 0, 0, 16, 17162);
    compactMovImm64(s, 17, 0, 0, 0, 0, 24983);
    return s->x[8];
}
uint64_t r_known_1_100066ee0(RState *s) {
    compactCmpImm32(s, 0, 24, 0, 0, 0, 33);
    compactCSet32EQ(s, 17, 0, 0, 0, 0, 0);
    compactMovImm32(s, 1, 0, 0, 0, 0, 39496);
    compactAdd32(s, 1, 21, 1, 0, 0, 0);
    compactMovImm32(s, 2, 0, 0, 0, 0, 14471);
    compactXor32(s, 24, 1, 2, 0, 0, 0);
    compactMul32(s, 17, 24, 17, 0, 0, 0);
    compactXor32(s, 17, 17, 21, 0, 0, 0);
    compactLoadSXTW64(s, 24, 22, 17, 0, 3, 0);
    compactMovImm64(s, 17, 0, 0, 0, 0, 6665);
    return s->x[24];
}
uint64_t r_known_1_10006710c(RState *s) {
    compactMovImm32(s, 10, 0, 0, 0, 0, 45262);
    compactXor32(s, 10, 12, 10, 0, 0, 0);
    compactMovImm32Wide(s, 13, 0, 255, 255, 0, 51223);
    compactAdd32(s, 10, 10, 13, 0, 0, 0);
    compactLSLReg32(s, 8, 8, 10, 0, 0, 0);
    compactAdd32(s, 11, 8, 11, 0, 0, 0);
    compactLoadUXTW64(s, 8, 9, 12, 0, 3, 0);
    compactMovImm64(s, 17, 0, 0, 0, 0, 45528);
    return s->x[8];
}
uint64_t r_known_1_1000671a4(RState *s) {
    compactLoadBaseImm64(s, 9, 0, 0, 0, 0, 8);
    compactMovImm32Wide(s, 11, 0, 255, 255, 0, 48028);
    compactMovImm32(s, 12, 0, 0, 0, 0, 64569);
    compactXor32(s, 25, 10, 12, 0, 0, 0);
    compactMovImm32(s, 12, 0, 0, 0, 0, 51682);
    compactMovK32(s, 12, 0, 0, 0, 16, 19132);
    compactXor32(s, 12, 10, 12, 0, 0, 0);
    compactAdd32(s, 11, 10, 11, 0, 0, 0);
    compactAdd32(s, 12, 12, 11, 0, 0, 0);
    compactCmp32(s, 0, 4, 12, 0, 0, 0);
    compactCSet32EQ(s, 12, 0, 0, 0, 0, 0);
    compactMovImm32(s, 13, 0, 0, 0, 0, 29);
    compactMul32(s, 12, 12, 13, 0, 0, 0);
    compactXor32(s, 10, 12, 10, 0, 0, 0);
    compactLoadSXTW64(s, 12, 8, 10, 0, 3, 0);
    compactMovImm32(s, 10, 0, 0, 0, 0, 29293);
    compactMovK32(s, 10, 0, 0, 0, 16, 31701);
    compactMovImm32(s, 13, 0, 0, 0, 0, 29293);
    compactMovK32(s, 13, 0, 0, 0, 16, 31701);
    compactMovImm64(s, 17, 0, 0, 0, 0, 6296);
    return s->x[12];
}
uint64_t r_known_1_10006b4e0(RState *s) {
    compactLoadSP64(s, 8, 0, 0, 0, 0, 40);
    compactMovImm48(s, 9, 6, 1, 1, 0, 53248);
    compactLoadBaseImm64(s, 9, 9, 0, 0, 0, 1032);
    compactLoadBase64(s, 9, 9, 0, 0, 0, 0);
    compactCmp64(s, 0, 9, 8, 0, 0, 0);
    return r_conditionIndex(s, 1) ? UINT64_C(0x10006b50c) : UINT64_C(0x10006b4f8);
}
uint64_t r_known_1_10006b4f8(RState *s) {
    compactPairLoad64(s, 29, 31, 30, 0, 0, 80);
    compactPairLoad64(s, 20, 31, 19, 0, 0, 64);
    compactPairLoad64(s, 22, 31, 21, 0, 0, 48);
    compactAddSPImm(s, 0, 0, 0, 0, 0, 96);
    return s->x[30];
}
uint64_t r_known_1_10006c768(RState *s) {
    compactLSRReg32(s, 16, 13, 14, 0, 0, 0);
    compactSubImmShift32(s, 14, 14, 0, 0, 0, 1);
    compactAndImm32(s, 16, 16, 0, 0, 0, 1);
    compactMul32(s, 16, 16, 15, 0, 0, 0);
    compactOr32(s, 16, 16, 10, 0, 0, 0);
    compactLoadUXTW64(s, 1, 9, 16, 0, 3, 0);
    compactSubImmShift32(s, 11, 11, 0, 0, 0, 1);
    compactMovImm64(s, 17, 0, 0, 0, 0, 16092);
    return s->x[1];
}
uint64_t r_known_1_100078bc0(RState *s) {
    compactAddImmShift32(s, 10, 24, 0, 0, 0, 16);
    compactMovImm32(s, 9, 0, 0, 0, 0, 21106);
    compactLoadSignedWordBase64(s, 11, 31, 0, 0, 0, 92);
    compactMovImm64(s, 12, 0, 0, 0, 0, 10176);
    compactMovK64(s, 12, 0, 0, 0, 16, 53213);
    compactMovK64(s, 12, 0, 0, 0, 32, 35983);
    compactMovK64(s, 12, 0, 0, 0, 48, 44699);
    compactAndLSL64(s, 12, 12, 11, 0, 1, 0);
    compactAdd32(s, 21, 10, 9, 0, 0, 0);
    compactAdd64(s, 9, 21, 11, 0, 0, 0);
    compactMovImm64(s, 11, 0, 0, 0, 0, 64083);
    compactMovK64(s, 11, 0, 0, 0, 16, 59373);
    compactMovK64(s, 11, 0, 0, 0, 32, 50759);
    compactMovK64(s, 11, 0, 0, 0, 48, 22349);
    compactSub64(s, 9, 9, 12, 0, 0, 0);
    compactAdd64(s, 9, 9, 11, 0, 0, 0);
    return UINT64_C(0x100078c00);
}
uint64_t r_known_1_100078c00(RState *s) {
    compactLoadBaseImm64(s, 11, 27, 0, 0, 0, 16);
    compactXor64(s, 9, 9, 11, 0, 0, 0);
    compactMovImm64(s, 11, 0, 0, 0, 0, 45933);
    compactMovK64(s, 11, 0, 0, 0, 16, 7008);
    compactMovK64(s, 11, 0, 0, 0, 32, 57207);
    compactMovK64(s, 11, 0, 0, 0, 48, 689);
    compactCmp64(s, 0, 9, 11, 0, 0, 0);
    compactCSet32EQ(s, 9, 0, 0, 0, 0, 0);
    compactMovImm32(s, 11, 0, 0, 0, 0, 52233);
    compactMul32(s, 9, 9, 11, 0, 0, 0);
    compactXor32(s, 9, 9, 10, 0, 0, 0);
    compactLoadSXTW64(s, 11, 22, 9, 0, 3, 0);
    compactMovImm32(s, 9, 0, 0, 0, 0, 31685);
    compactMovK32(s, 9, 0, 0, 0, 16, 52853);
    compactMovImm64(s, 17, 0, 0, 0, 0, 65528);
    return s->x[11];
}
uint64_t r_known_1_10007d8c8(RState *s) {
    compactLoadBaseImm64(s, 17, 0, 0, 0, 0, 24);
    compactXor32(s, 30, 25, 15, 0, 0, 0);
    compactAddImmShift32(s, 5, 30, 0, 0, 0, 2330);
    compactSubImmShift32(s, 11, 4, 0, 0, 0, 1);
    compactAdd32(s, 6, 4, 16, 0, 0, 0);
    compactLoadUXTW8(s, 17, 17, 6, 0, 0, 0);
    compactLSLReg32(s, 17, 17, 13, 0, 0, 0);
    compactBic32(s, 6, 28, 17, 0, 0, 0);
    compactAnd32(s, 17, 17, 1, 0, 0, 0);
    compactOr32(s, 28, 17, 6, 0, 0, 0);
    compactAdd32(s, 13, 13, 2, 0, 0, 0);
    compactAdd32(s, 13, 13, 5, 0, 0, 0);
    compactCmpImm32(s, 0, 13, 0, 0, 0, 32);
    compactCSet32EQ(s, 17, 0, 0, 0, 0, 0);
    compactMul32(s, 17, 17, 3, 0, 0, 0);
    compactXor32(s, 17, 17, 25, 0, 0, 0);
    compactLoadSXTW64(s, 6, 8, 17, 0, 3, 0);
    compactMovImm64(s, 17, 0, 0, 0, 0, 50907);
    return s->x[6];
}
uint64_t r_known_1_10007d914(RState *s) {
    compactAddLSL64(s, 17, 3, 16, 0, 2, 0);
    compactAdd64(s, 16, 2, 16, 0, 0, 0);
    compactLoadBaseImm64(s, 6, 9, 0, 0, 0, 8);
    compactLoadXIndex32(s, 17, 6, 17, 0, 0, 0);
    compactCmp32(s, 0, 17, 4, 0, 0, 0);
    compactCSet32EQ(s, 17, 0, 0, 0, 0, 0);
    compactMul32(s, 17, 17, 5, 0, 0, 0);
    compactXor32(s, 17, 17, 11, 0, 0, 0);
    compactLoadSXTW64(s, 7, 8, 17, 0, 3, 0);
    compactMov64(s, 6, 1, 0, 0, 0, 0);
    compactMovImm64(s, 17, 0, 0, 0, 0, 31111);
    return s->x[7];
}
uint64_t r_known_1_10007ee68(RState *s) {
    compactMovImm32(s, 12, 0, 0, 0, 0, 0);
    compactMovImm32Wide(s, 13, 0, 255, 255, 0, 37169);
    compactAdd32(s, 13, 10, 13, 0, 0, 0);
    compactLoadSXTW64(s, 13, 21, 13, 0, 3, 0);
    compactMovImm32Wide(s, 15, 0, 255, 255, 0, 36440);
    compactMovImm32Wide(s, 14, 0, 255, 255, 0, 37164);
    compactAdd32(s, 14, 10, 14, 0, 0, 0);
    compactMovImm32(s, 16, 0, 0, 0, 0, 17711);
    compactAdd32(s, 10, 10, 15, 0, 0, 0);
    compactXor64(s, 15, 10, 16, 0, 0, 0);
    compactMovImm32(s, 16, 0, 0, 0, 0, 20164);
    compactMovK32(s, 16, 0, 0, 0, 16, 28438);
    compactMovImm64(s, 17, 0, 0, 0, 0, 54808);
    return s->x[13];
}
uint64_t r_known_1_10007ffc4(RState *s) {
    compactSubImmShift32(s, 30, 11, 0, 0, 0, 2330);
    compactLoadSXTW64(s, 11, 8, 11, 0, 3, 0);
    compactMovImm32(s, 12, 0, 0, 0, 0, 29293);
    compactMovK32(s, 12, 0, 0, 0, 16, 31701);
    compactMovImm32Wide(s, 14, 0, 255, 255, 0, 54744);
    compactMovImm32(s, 15, 0, 0, 0, 0, 31272);
    compactMovImm32(s, 16, 0, 0, 0, 0, 14959);
    compactMovK32(s, 16, 0, 0, 0, 16, 46403);
    compactMovImm32(s, 1, 0, 0, 0, 0, 42713);
    compactMovK32(s, 1, 0, 0, 0, 16, 5065);
    compactMovImm32Wide(s, 2, 0, 255, 255, 0, 42049);
    compactMovImm32(s, 3, 0, 0, 0, 0, 37);
    compactMovImm32(s, 7, 0, 0, 0, 0, 36243);
    compactMovK32(s, 7, 0, 0, 0, 16, 33834);
    compactMovImm32(s, 19, 0, 0, 0, 0, 50577);
    return UINT64_C(0x100080000);
}
uint64_t r_known_1_100080000(RState *s) {
    compactMovK32(s, 19, 0, 0, 0, 16, 19132);
    compactMovImm32Wide(s, 20, 0, 255, 255, 0, 44383);
    compactMovImm32(s, 21, 0, 0, 0, 0, 44242);
    compactMovK32(s, 21, 0, 0, 0, 16, 55629);
    compactMovImm32(s, 22, 0, 0, 0, 0, 16380);
    compactMovK32(s, 22, 0, 0, 0, 16, 9906);
    compactMovImm32(s, 23, 0, 0, 0, 0, 21072);
    compactMovImm32(s, 24, 0, 0, 0, 0, 41);
    compactMovImm32(s, 26, 0, 0, 0, 0, 40203);
    compactMovK32(s, 26, 0, 0, 0, 16, 19132);
    compactMovImm32(s, 27, 0, 0, 0, 0, 16129);
    compactMovImm64(s, 17, 0, 0, 0, 0, 21043);
    return s->x[11];
}
uint64_t r_known_1_100080290(RState *s) {
    compactAdd32(s, 17, 30, 21, 0, 0, 0);
    compactAnd32(s, 5, 17, 22, 0, 0, 0);
    compactXor32(s, 17, 30, 23, 0, 0, 0);
    compactMul32(s, 25, 17, 24, 0, 0, 0);
    compactAdd32(s, 17, 25, 26, 0, 0, 0);
    compactCmp32(s, 0, 11, 17, 0, 0, 0);
    compactCSet32EQ(s, 17, 0, 0, 0, 0, 0);
    compactXor32(s, 4, 5, 27, 0, 0, 0);
    compactMul32(s, 17, 17, 4, 0, 0, 0);
    compactXor32(s, 17, 17, 30, 0, 0, 0);
    compactLoadSXTW64(s, 6, 8, 17, 0, 3, 0);
    compactMov64(s, 4, 11, 0, 0, 0, 0);
    compactMovImm64(s, 17, 0, 0, 0, 0, 21899);
    return s->x[6];
}
uint64_t r_known_1_100080c9c(RState *s) {
    compactAdd32(s, 5, 7, 1, 0, 0, 0);
    compactXor32(s, 11, 5, 2, 0, 0, 0);
    compactLoadBaseImm64(s, 6, 10, 0, 0, 0, 8);
    compactSubImm64(s, 8, 8, 0, 0, 0, 1);
    compactLoadXIndexShift32(s, 17, 6, 8, 0, 2, 0);
    compactCmp32(s, 0, 17, 3, 0, 0, 0);
    compactCSet32EQ(s, 17, 0, 0, 0, 0, 0);
    compactAdd32(s, 19, 11, 4, 0, 0, 0);
    compactMul32(s, 17, 17, 19, 0, 0, 0);
    compactOr32(s, 17, 17, 7, 0, 0, 0);
    compactLoadSXTW64(s, 7, 9, 17, 0, 3, 0);
    compactMovImm64(s, 17, 0, 0, 0, 0, 36403);
    return s->x[7];
}
uint64_t r_known_1_100087a4c(RState *s) {
    compactCmp64(s, 0, 8, 11, 0, 0, 0);
    compactCSet32LO(s, 17, 0, 0, 0, 0, 0);
    compactAdd32(s, 24, 1, 5, 0, 0, 0);
    compactAdd32(s, 2, 1, 6, 0, 0, 0);
    compactAnd32(s, 21, 2, 7, 0, 0, 0);
    compactLoadBaseImm32(s, 2, 10, 0, 0, 0, 4);
    compactAdd64(s, 10, 10, 2, 0, 0, 0);
    compactAddImm64(s, 2, 9, 0, 0, 0, 1);
    compactCmp64(s, 0, 2, 28, 0, 0, 0);
    compactCSet32HI(s, 3, 0, 0, 0, 0, 0);
    compactXor32(s, 3, 17, 3, 0, 0, 0);
    compactAdd64(s, 9, 9, 27, 0, 0, 0);
    compactCmp64(s, 0, 9, 8, 0, 0, 0);
    compactCSet32LO(s, 9, 0, 0, 0, 0, 0);
    compactCmpImm32(s, 0, 3, 0, 0, 0, 0);
    compactCSEL32(s, 9, 17, 9, 0, 1, 0);
    compactAdd32(s, 17, 21, 30, 0, 0, 0);
    compactMul32(s, 9, 17, 9, 0, 0, 0);
    compactXor32(s, 9, 9, 1, 0, 0, 0);
    compactLoadSXTW64(s, 1, 22, 9, 0, 3, 0);
    compactMov64(s, 9, 2, 0, 0, 0, 0);
    compactMovImm64(s, 17, 0, 0, 0, 0, 4905);
    return s->x[1];
}
uint64_t r_known_1_100091084(RState *s) {
    compactMovImm32(s, 11, 0, 0, 0, 0, 8693);
    compactMovImm32(s, 13, 0, 0, 0, 0, 26005);
    compactAdd32(s, 21, 12, 11, 0, 0, 0);
    compactAdd32(s, 11, 21, 13, 0, 0, 0);
    compactAddSPShiftImm64(s, 12, 0, 0, 0, 0, 8);
    compactMovImm32(s, 13, 0, 0, 0, 0, 33881);
    compactMovK32(s, 13, 0, 0, 0, 16, 30371);
    compactBic32(s, 13, 13, 12, 0, 0, 0);
    compactMovImm32(s, 14, 0, 0, 0, 0, 31648);
    compactMovK32(s, 14, 0, 0, 0, 16, 35164);
    compactAnd32(s, 12, 12, 14, 0, 0, 0);
    compactOr32(s, 12, 13, 12, 0, 0, 0);
    compactMovImm32(s, 13, 0, 0, 0, 0, 7469);
    compactMovK32(s, 13, 0, 0, 0, 16, 36727);
    compactXor32(s, 12, 12, 13, 0, 0, 0);
    compactMovImm32(s, 13, 0, 0, 0, 0, 43047);
    compactMovK32(s, 13, 0, 0, 0, 16, 55889);
    compactMul32(s, 12, 12, 13, 0, 0, 0);
    compactPairStore64(s, 10, 31, 20, 0, 0, 24);
    compactStoreSP64(s, 0, 20, 0, 0, 0, 16);
    compactXor32(s, 10, 11, 12, 0, 0, 0);
    compactStoreSP32(s, 0, 10, 0, 0, 0, 8);
    compactLoadBase32(s, 8, 8, 0, 0, 0, 0);
    compactLoadBase32(s, 9, 9, 0, 0, 0, 0);
    compactMovImm32(s, 10, 0, 0, 0, 0, 166);
    compactSub32(s, 8, 9, 8, 0, 0, 0);
    compactXor32(s, 8, 8, 10, 0, 0, 0);
    compactMovImm32(s, 9, 0, 0, 0, 0, 54479);
    compactMovK32(s, 9, 0, 0, 0, 16, 2652);
    compactMovImm48(s, 10, 6, 1, 1, 0, 8192);
    compactAddImm64(s, 10, 10, 0, 0, 0, 1536);
    compactMul32(s, 8, 8, 9, 0, 0, 0);
    compactLoadBaseImm64(s, 9, 10, 0, 0, 0, 7776);
    compactAddExt64(s, 9, 9, 8, 0, 0, 0);
    compactMovNegImm64(s, 11, 0, 0, 0, 0, 19087);
    compactMovK64(s, 11, 0, 0, 0, 16, 37884);
    compactAdd64(s, 9, 9, 11, 0, 0, 0);
    compactLoadBaseImm8(s, 9, 9, 0, 0, 0, 0);
    compactMovImm32(s, 11, 0, 0, 0, 0, 132);
    compactXor32(s, 9, 9, 11, 0, 0, 0);
    compactLoadBase64(s, 10, 10, 0, 0, 0, 0);
    compactMovNegImm64(s, 11, 0, 0, 0, 0, 15707);
    compactMovK64(s, 11, 0, 0, 0, 16, 38219);
    compactAdd64(s, 10, 10, 11, 0, 0, 0);
    compactAdd64(s, 9, 10, 9, 0, 0, 0);
    compactLoadBaseImm8(s, 9, 9, 0, 0, 0, 0);
    compactXor32(s, 8, 9, 8, 0, 0, 0);
    compactMovImm32(s, 9, 0, 0, 0, 0, 53467);
    compactAddExt32(s, 8, 9, 8, 0, 0, 0);
    compactLoadUXTW64(s, 8, 19, 8, 0, 3, 0);
    compactAddSPShiftImm64(s, 0, 0, 0, 0, 0, 8);
    compactMovImm64(s, 17, 0, 0, 0, 0, 36248);
    s->x[30] = UINT64_C(0x100091158); return s->x[8];
}
uint64_t r_known_1_100091158(RState *s) {
    compactLoadSXTW64(s, 8, 19, 21, 0, 3, 0);
    compactMovImm64(s, 17, 0, 0, 0, 0, 28572);
    return s->x[8];
}
uint64_t r_known_1_100091234(RState *s) {
    compactMovImm32Wide(s, 10, 0, 255, 255, 0, 22005);
    compactMovImm32(s, 12, 0, 0, 0, 0, 3237);
    compactAdd32(s, 10, 9, 10, 0, 0, 0);
    compactOr32(s, 10, 10, 12, 0, 0, 0);
    compactMovImm32(s, 12, 0, 0, 0, 0, 52574);
    compactXor32(s, 12, 9, 12, 0, 0, 0);
    compactCmp32(s, 0, 11, 12, 0, 0, 0);
    compactCSet32(s, 12, 0, 0, 0, 11, 0);
    compactMovImm32(s, 13, 0, 0, 0, 0, 12273);
    compactXor32(s, 13, 10, 13, 0, 0, 0);
    compactMul32(s, 12, 12, 13, 0, 0, 0);
    compactXor32(s, 12, 12, 9, 0, 0, 0);
    compactLoadSXTW64(s, 12, 22, 12, 0, 3, 0);
    compactMovImm64(s, 17, 0, 0, 0, 0, 36676);
    return s->x[12];
}
uint64_t r_known_1_100091f88(RState *s) {
    compactMovImm32(s, 10, 0, 0, 0, 0, 9009);
    compactMovK32(s, 10, 0, 0, 0, 16, 61542);
    compactAdd32(s, 12, 12, 10, 0, 0, 0);
    compactMovImm32(s, 10, 0, 0, 0, 0, 48767);
    compactXor32(s, 10, 25, 10, 0, 0, 0);
    compactMovImm32(s, 11, 0, 0, 0, 0, 50731);
    compactMovK32(s, 11, 0, 0, 0, 16, 37588);
    compactMovImm32(s, 13, 0, 0, 0, 0, 34655);
    compactMovK32(s, 13, 0, 0, 0, 16, 27947);
    compactLoadSXTW64(s, 14, 20, 10, 0, 3, 0);
    compactAdd32(s, 10, 10, 11, 0, 0, 0);
    compactAnd32(s, 13, 10, 13, 0, 0, 0);
    compactMovImm32(s, 7, 0, 0, 0, 0, 37646);
    compactMovK32(s, 7, 0, 0, 0, 16, 9148);
    compactMovImm32(s, 11, 0, 0, 0, 0, 1);
    compactMovImm32(s, 15, 0, 0, 0, 0, 46636);
    compactMovK32(s, 15, 0, 0, 0, 16, 60249);
    compactMovImm32Wide(s, 16, 0, 255, 255, 0, 58672);
    compactMovImm32(s, 0, 0, 0, 0, 0, 27890);
    compactMovK32(s, 0, 0, 0, 0, 16, 56387);
    compactMovImm32(s, 1, 0, 0, 0, 0, 41787);
    compactMovK32(s, 1, 0, 0, 0, 16, 8782);
    compactMovNegOne32(s, 2, 0, 0, 0, 0, 0);
    compactMovImm32(s, 3, 0, 0, 0, 0, 18038);
    compactMovK32(s, 3, 0, 0, 0, 16, 17565);
    compactMovImm32(s, 4, 0, 0, 0, 0, 53180);
    compactMovK32(s, 4, 0, 0, 0, 16, 8782);
    compactMovImm32(s, 5, 0, 0, 0, 0, 8991);
    compactMovK32(s, 5, 0, 0, 0, 16, 18333);
    compactMovImm32(s, 6, 0, 0, 0, 0, 228);
    return UINT64_C(0x100092000);
}
uint64_t r_known_1_100092000(RState *s) {
    compactMovImm64(s, 17, 0, 0, 0, 0, 15498);
    return s->x[14];
}
uint64_t r_known_1_100093c48(RState *s) {
    compactStoreBase32(s, 11, 0, 0, 0, 0, 0);
    compactPairLoad64(s, 20, 31, 19, 0, 0, 16);
    compactAddSPImm(s, 0, 0, 0, 0, 0, 32);
    return s->x[30];
}
uint64_t r_known_1_10009d5d4(RState *s) {
    compactPairLoad64(s, 29, 31, 30, 0, 0, 96);
    compactPairLoad64(s, 20, 31, 19, 0, 0, 80);
    compactPairLoad64(s, 22, 31, 21, 0, 0, 64);
    compactPairLoad64(s, 24, 31, 23, 0, 0, 48);
    compactPairLoad64(s, 26, 31, 25, 0, 0, 32);
    compactPairLoad64(s, 28, 31, 27, 0, 0, 16);
    compactAddSPImm(s, 0, 0, 0, 0, 0, 112);
    return s->x[30];
}
uint64_t r_known_1_1000a3fa4(RState *s) {
    compactMovImm32Wide(s, 11, 0, 255, 255, 0, 26100);
    compactAdd32(s, 12, 16, 11, 0, 0, 0);
    compactMov32(s, 13, 10, 0, 0, 0, 0);
    compactMovImm32(s, 11, 0, 0, 0, 0, 20164);
    compactMovK32(s, 11, 0, 0, 0, 16, 28438);
    compactAndLSL64(s, 14, 11, 13, 0, 1, 0);
    compactMovImm64(s, 11, 0, 0, 0, 0, 10082);
    compactMovK64(s, 11, 0, 0, 0, 16, 14219);
    compactMovK64(s, 11, 0, 0, 0, 32, 4936);
    compactMovK64(s, 11, 0, 0, 0, 48, 61997);
    compactSub64(s, 13, 13, 14, 0, 0, 0);
    compactAdd64(s, 13, 13, 11, 0, 0, 0);
    compactXor64(s, 14, 13, 11, 0, 0, 0);
    compactLoadXIndex8(s, 14, 24, 14, 0, 0, 0);
    compactCmpImm32(s, 0, 14, 0, 0, 0, 27);
    compactCSet32(s, 14, 0, 0, 0, 1, 0);
    compactMovImm32Wide(s, 15, 0, 255, 255, 0, 58170);
    compactAdd32(s, 10, 10, 15, 0, 0, 0);
    compactAdd32(s, 10, 12, 10, 0, 0, 0);
    compactOrLSL32(s, 14, 14, 14, 0, 2, 0);
    compactXor32(s, 14, 14, 16, 0, 0, 0);
    compactLoadSXTW64(s, 14, 21, 14, 0, 3, 0);
    compactMovImm64(s, 17, 0, 0, 0, 0, 22308);
    return UINT64_C(0x1000a4000);
}
uint64_t r_known_1_1000a4000(RState *s) {
    return s->x[14];
}
uint64_t r_known_1_1000a5a9c(RState *s) {
    compactMovImm64(s, 12, 0, 0, 0, 0, 0);
    compactMovImm32(s, 11, 0, 0, 0, 0, 0);
    compactMovImm32(s, 9, 0, 0, 0, 0, 37236);
    compactXor32(s, 9, 8, 9, 0, 0, 0);
    compactMovImm32(s, 10, 0, 0, 0, 0, 23);
    compactMul32(s, 9, 9, 10, 0, 0, 0);
    compactMovImm32(s, 10, 0, 0, 0, 0, 47);
    compactStoreXIndex8(s, 10, 13, 0, 0, 0, 0);
    compactMovNegImm64(s, 10, 0, 0, 0, 0, 17709);
    compactAdd64(s, 10, 0, 10, 0, 0, 0);
    compactAdd64(s, 14, 10, 9, 0, 0, 0);
    compactAdd64(s, 10, 13, 14, 0, 0, 0);
    compactMovImm64(s, 13, 0, 0, 0, 0, 11342);
    compactMovK64(s, 13, 0, 0, 0, 16, 6313);
    compactMovK64(s, 13, 0, 0, 0, 32, 65346);
    compactMovK64(s, 13, 0, 0, 0, 48, 16085);
    compactMovImm32(s, 14, 0, 0, 0, 0, 7359);
    compactMovK32(s, 14, 0, 0, 0, 16, 57097);
    compactLoadSP64(s, 15, 0, 0, 0, 0, 24);
    compactAdd64(s, 13, 15, 13, 0, 0, 0);
    compactCmp64(s, 0, 13, 14, 0, 0, 0);
    compactCSet32(s, 14, 0, 0, 0, 1, 0);
    compactLSLImm32(s, 15, 14, 0, 0, 8, 0);
    compactSub32(s, 14, 15, 14, 0, 0, 0);
    compactXor32(s, 14, 8, 14, 0, 0, 0);
    compactLoadSXTW64(s, 14, 21, 14, 0, 3, 0);
    compactMovImm64(s, 17, 0, 0, 0, 0, 60538);
    return s->x[14];
}
uint64_t r_known_1_1000b06c0(RState *s) {
    compactAdd32(s, 6, 11, 10, 0, 0, 0);
    compactMov64(s, 15, 16, 0, 0, 0, 0);
    compactAdd32(s, 17, 16, 12, 0, 0, 0);
    compactAdd32(s, 17, 6, 17, 0, 0, 0);
    compactNot32(s, 17, 17, 0, 0, 0, 0);
    compactLSRImm32(s, 17, 17, 0, 0, 31, 0);
    compactMul32(s, 17, 17, 14, 0, 0, 0);
    compactXor32(s, 17, 17, 11, 0, 0, 0);
    compactLoadSXTW64(s, 7, 8, 17, 0, 3, 0);
    compactMovImm64(s, 17, 0, 0, 0, 0, 31111);
    return s->x[7];
}
uint64_t r_known_1_1000b36bc(RState *s) {
    compactPairLoad64(s, 29, 31, 30, 0, 0, 96);
    compactPairLoad64(s, 20, 31, 19, 0, 0, 80);
    compactPairLoad64(s, 22, 31, 21, 0, 0, 64);
    compactPairLoad64(s, 24, 31, 23, 0, 0, 48);
    compactPairLoad64(s, 26, 31, 25, 0, 0, 32);
    compactPairLoad64(s, 28, 31, 27, 0, 0, 16);
    compactAddSPImm(s, 0, 0, 0, 0, 0, 112);
    return s->x[30];
}
uint64_t r_known_1_1000b6f70(RState *s) {
    compactMovImm32(s, 9, 0, 0, 0, 0, 6472);
    compactMovImm32Wide(s, 12, 0, 255, 255, 0, 53138);
    compactAdd32(s, 13, 10, 9, 0, 0, 0);
    compactAdd32(s, 10, 13, 12, 0, 0, 0);
    compactMovImm32(s, 9, 0, 0, 0, 0, 27896);
    compactCmpImm32(s, 0, 11, 0, 0, 0, 4);
    compactCSet32(s, 12, 0, 0, 0, 11, 0);
    compactMovImm32Wide(s, 14, 0, 255, 255, 0, 7503);
    compactAdd32(s, 9, 13, 9, 0, 0, 0);
    compactXor32(s, 14, 9, 14, 0, 0, 0);
    compactAdd32(s, 14, 14, 10, 0, 0, 0);
    compactMul32(s, 12, 14, 12, 0, 0, 0);
    compactXor32(s, 12, 12, 13, 0, 0, 0);
    compactLoadSXTW64(s, 12, 22, 12, 0, 3, 0);
    compactMovImm64(s, 17, 0, 0, 0, 0, 40090);
    return s->x[12];
}
uint64_t r_known_1_1000bb2f4(RState *s) {
    compactMovImm32(s, 11, 0, 0, 0, 0, 9356);
    compactXor32(s, 26, 13, 11, 0, 0, 0);
    compactMovImm32(s, 11, 0, 0, 0, 0, 32482);
    compactXor32(s, 25, 26, 11, 0, 0, 0);
    compactLoadBase32(s, 11, 23, 0, 0, 0, 0);
    compactLoadBase32(s, 12, 24, 0, 0, 0, 0);
    compactAdd32(s, 11, 12, 11, 0, 0, 0);
    compactXor32(s, 8, 11, 8, 0, 0, 0);
    compactMul32(s, 8, 8, 9, 0, 0, 0);
    compactMovImm48(s, 9, 5, 1, 1, 0, 45056);
    compactAddImm64(s, 9, 9, 0, 0, 0, 3864);
    compactLoadBaseImm64(s, 11, 9, 0, 0, 0, 12768);
    compactAddExt64(s, 11, 11, 8, 0, 0, 0);
    compactMovNegImm64(s, 12, 0, 0, 0, 0, 53566);
    compactMovK64(s, 12, 0, 0, 0, 16, 64965);
    compactAdd64(s, 11, 11, 12, 0, 0, 0);
    compactLoadBaseImm8(s, 11, 11, 0, 0, 0, 0);
    compactXor32(s, 10, 11, 10, 0, 0, 0);
    compactLoadBase64(s, 9, 9, 0, 0, 0, 0);
    compactMovNegImm64(s, 11, 0, 0, 0, 0, 37498);
    compactMovK64(s, 11, 0, 0, 0, 16, 47715);
    compactAdd64(s, 9, 9, 11, 0, 0, 0);
    compactAdd64(s, 9, 9, 10, 0, 0, 0);
    compactLoadBaseImm8(s, 9, 9, 0, 0, 0, 0);
    compactXor32(s, 8, 9, 8, 0, 0, 0);
    compactMovImm32(s, 9, 0, 0, 0, 0, 53174);
    compactAddExt32(s, 8, 9, 8, 0, 0, 0);
    compactLoadUXTW64(s, 8, 21, 8, 0, 3, 0);
    compactMovImm32(s, 0, 0, 0, 0, 0, 200);
    compactMovImm64(s, 17, 0, 0, 0, 0, 31209);
    s->x[30] = UINT64_C(0x1000bb370); return s->x[8];
}
uint64_t r_known_1_1000bb370(RState *s) {
    compactCmpImm64(s, 0, 0, 0, 0, 0, 0);
    compactCSet32EQ(s, 8, 0, 0, 0, 0, 0);
    compactSubImmShift32(s, 9, 26, 0, 0, 12, 24);
    compactSubImmShift32(s, 9, 9, 0, 0, 0, 242);
    compactAdd32(s, 9, 9, 25, 0, 0, 0);
    compactMul32(s, 8, 8, 9, 0, 0, 0);
    compactXor32(s, 8, 8, 26, 0, 0, 0);
    compactLoadSXTW64(s, 8, 21, 8, 0, 3, 0);
    compactMovImm32(s, 11, 0, 0, 0, 0, 8209);
    compactMovK32(s, 11, 0, 0, 0, 16, 12682);
    compactMovImm64(s, 17, 0, 0, 0, 0, 46929);
    return s->x[8];
}
uint64_t r_known_1_1000bb650(RState *s) {
    compactLoadBase32(s, 0, 24, 0, 0, 0, 0);
    compactLoadBase32(s, 8, 22, 0, 0, 0, 0);
    compactLoadBase32(s, 9, 23, 0, 0, 0, 0);
    compactXor32(s, 8, 8, 20, 0, 0, 0);
    compactXor32(s, 8, 8, 9, 0, 0, 0);
    compactMul32(s, 8, 8, 21, 0, 0, 0);
    compactMovImm48(s, 9, 6, 1, 1, 0, 4096);
    compactAddImm64(s, 9, 9, 0, 0, 0, 1296);
    compactLoadBase64(s, 10, 9, 0, 0, 0, 0);
    compactAddExt64(s, 10, 10, 8, 0, 0, 0);
    compactSubImmShift64(s, 10, 10, 0, 0, 12, 2557);
    compactSubImm64(s, 10, 10, 0, 0, 0, 3323);
    compactLoadBaseImm8(s, 10, 10, 0, 0, 0, 0);
    compactXor32(s, 10, 10, 19, 0, 0, 0);
    compactLoadBaseImm64(s, 9, 9, 0, 0, 0, 14968);
    compactMovNegImm64(s, 11, 0, 0, 0, 0, 14058);
    compactMovK64(s, 11, 0, 0, 0, 16, 62438);
    compactAdd64(s, 9, 9, 11, 0, 0, 0);
    compactAdd64(s, 9, 9, 10, 0, 0, 0);
    compactLoadBaseImm8(s, 9, 9, 0, 0, 0, 0);
    compactXor32(s, 8, 9, 8, 0, 0, 0);
    compactMovImm32(s, 9, 0, 0, 0, 0, 53208);
    compactAddExt32(s, 8, 9, 8, 0, 0, 0);
    compactLoadUXTW64(s, 8, 25, 8, 0, 3, 0);
    compactMovImm64(s, 17, 0, 0, 0, 0, 9876);
    s->x[30] = UINT64_C(0x1000bb6b8); return s->x[8];
}
uint64_t r_known_1_1000bb6b8(RState *s) {
    compactMovNegOne32(s, 8, 0, 0, 0, 0, 0);
    compactStoreBase32(s, 8, 24, 0, 0, 0, 0);
    compactPairLoad64(s, 29, 31, 30, 0, 0, 80);
    compactPairLoad64(s, 20, 31, 19, 0, 0, 64);
    compactPairLoad64(s, 22, 31, 21, 0, 0, 48);
    compactPairLoad64(s, 24, 31, 23, 0, 0, 32);
    compactPairLoad64(s, 26, 31, 25, 0, 0, 16);
    compactAddSPImm(s, 0, 0, 0, 0, 0, 96);
    return s->x[30];
}
uint64_t r_known_1_1000c7eac(RState *s) {
    compactLoadSP64(s, 8, 0, 0, 0, 0, 40);
    compactMovImm48(s, 9, 6, 1, 1, 0, 53248);
    compactLoadBaseImm64(s, 9, 9, 0, 0, 0, 1032);
    compactLoadBase64(s, 9, 9, 0, 0, 0, 0);
    compactCmp64(s, 0, 9, 8, 0, 0, 0);
    return r_conditionIndex(s, 1) ? UINT64_C(0x1000c7ed8) : UINT64_C(0x1000c7ec4);
}
uint64_t r_known_1_1000c7ec4(RState *s) {
    compactPairLoad64(s, 29, 31, 30, 0, 0, 80);
    compactPairLoad64(s, 20, 31, 19, 0, 0, 64);
    compactPairLoad64(s, 22, 31, 21, 0, 0, 48);
    compactAddSPImm(s, 0, 0, 0, 0, 0, 96);
    return s->x[30];
}
uint64_t r_known_1_1000caaa0(RState *s) {
    compactAdd32(s, 9, 19, 1, 0, 0, 0);
    compactOr32(s, 17, 9, 2, 0, 0, 0);
    compactXor32(s, 9, 19, 3, 0, 0, 0);
    compactMul32(s, 9, 9, 4, 0, 0, 0);
    compactLoadBaseImm64(s, 20, 8, 0, 0, 0, 8);
    compactAdd64(s, 10, 10, 5, 0, 0, 0);
    compactAdd64(s, 10, 10, 9, 0, 0, 0);
    compactLoadXIndexShift32(s, 20, 20, 10, 0, 2, 0);
    compactCmp32(s, 0, 20, 6, 0, 0, 0);
    compactCSet32(s, 20, 0, 0, 0, 1, 0);
    compactAdd32(s, 17, 17, 7, 0, 0, 0);
    compactMul32(s, 17, 20, 17, 0, 0, 0);
    compactOr32(s, 17, 17, 19, 0, 0, 0);
    compactLoadSXTW64(s, 19, 11, 17, 0, 3, 0);
    compactMovImm32(s, 20, 0, 0, 0, 0, 3014);
    compactMovK32(s, 20, 0, 0, 0, 16, 27930);
    compactMovImm64(s, 17, 0, 0, 0, 0, 40518);
    return s->x[19];
}
uint64_t r_known_1_1000d64c0(RState *s) {
    compactStoreBaseImm32(s, 9, 19, 0, 0, 0, 40);
    compactLoadSignedOffset64(s, 8, 29, 0, 0, 0, 65440);
    compactMovImm48(s, 9, 6, 1, 1, 0, 53248);
    compactLoadBaseImm64(s, 9, 9, 0, 0, 0, 1032);
    compactLoadBase64(s, 9, 9, 0, 0, 0, 0);
    compactCmp64(s, 0, 9, 8, 0, 0, 0);
    return r_conditionIndex(s, 1) ? UINT64_C(0x1000d64fc) : UINT64_C(0x1000d64dc);
}
uint64_t r_known_1_1000d64dc(RState *s) {
    compactPairLoad64(s, 29, 31, 30, 0, 0, 288);
    compactPairLoad64(s, 20, 31, 19, 0, 0, 272);
    compactPairLoad64(s, 22, 31, 21, 0, 0, 256);
    compactPairLoad64(s, 24, 31, 23, 0, 0, 240);
    compactPairLoad64(s, 26, 31, 25, 0, 0, 224);
    compactPairLoad64(s, 28, 31, 27, 0, 0, 208);
    compactAddSPImm(s, 0, 0, 0, 0, 0, 304);
    return s->x[30];
}
uint64_t r_known_1_1000d6ba8(RState *s) {
    compactMovImm32Wide(s, 9, 0, 255, 255, 0, 48407);
    compactMovImm32(s, 12, 0, 0, 0, 0, 15168);
    compactAdd32(s, 9, 10, 9, 0, 0, 0);
    compactOr32(s, 9, 9, 12, 0, 0, 0);
    compactMovImm32(s, 12, 0, 0, 0, 0, 15279);
    compactMovImm32Wide(s, 13, 0, 255, 255, 0, 47336);
    compactAdd32(s, 13, 10, 13, 0, 0, 0);
    compactCmp32(s, 0, 11, 13, 0, 0, 0);
    compactCSet32(s, 13, 0, 0, 0, 10, 0);
    compactMovImm32Wide(s, 14, 0, 255, 255, 0, 49318);
    compactAdd32(s, 14, 9, 14, 0, 0, 0);
    compactMul32(s, 13, 13, 14, 0, 0, 0);
    compactAdd32(s, 12, 10, 12, 0, 0, 0);
    compactXor32(s, 12, 13, 12, 0, 0, 0);
    compactLoadSXTW64(s, 12, 22, 12, 0, 3, 0);
    compactMovImm64(s, 17, 0, 0, 0, 0, 40596);
    return s->x[12];
}
uint64_t r_known_1_1000df908(RState *s) {
    compactSubImmShift32(s, 12, 14, 0, 0, 0, 1278);
    compactMovImm32(s, 11, 0, 0, 0, 0, 27889);
    compactMovK32(s, 11, 0, 0, 0, 16, 56387);
    compactAdd32(s, 11, 10, 11, 0, 0, 0);
    compactLoadSXTW64(s, 12, 20, 12, 0, 3, 0);
    compactMovImm64(s, 17, 0, 0, 0, 0, 49458);
    return s->x[12];
}
uint64_t r_known_1_1000dfa34(RState *s) {
    compactMovImm32(s, 11, 0, 0, 0, 0, 37104);
    compactMovK32(s, 11, 0, 0, 0, 16, 36589);
    compactMovImm32(s, 13, 0, 0, 0, 0, 46588);
    compactMovK32(s, 13, 0, 0, 0, 16, 28946);
    compactAdd32(s, 11, 12, 11, 0, 0, 0);
    compactAnd32(s, 11, 11, 13, 0, 0, 0);
    compactAndImm32(s, 13, 14, 0, 0, 0, 1);
    compactMovImm32(s, 15, 0, 0, 0, 0, 38151);
    compactXor32(s, 15, 11, 15, 0, 0, 0);
    compactMul32(s, 13, 15, 13, 0, 0, 0);
    compactXor32(s, 13, 13, 12, 0, 0, 0);
    compactLoadUXTW64(s, 15, 10, 13, 0, 3, 0);
    compactMov64(s, 13, 14, 0, 0, 0, 0);
    compactMovImm64(s, 17, 0, 0, 0, 0, 2852);
    return s->x[15];
}
uint64_t r_known_1_1000dfaa4(RState *s) {
    compactMovImm32(s, 11, 0, 0, 0, 0, 15678);
    compactXor32(s, 11, 12, 11, 0, 0, 0);
    compactAddLSL32(s, 14, 11, 11, 0, 1, 0);
    compactMovImm32(s, 11, 0, 0, 0, 0, 65534);
    compactMovK32(s, 11, 0, 0, 0, 16, 63610);
    compactXor32(s, 11, 21, 11, 0, 0, 0);
    compactMovImm32(s, 12, 0, 0, 0, 0, 56175);
    compactMovK32(s, 12, 0, 0, 0, 16, 61685);
    compactXor32(s, 12, 14, 12, 0, 0, 0);
    compactAnd32(s, 10, 12, 10, 0, 0, 0);
    compactMovImm32(s, 12, 0, 0, 0, 0, 31476);
    compactMovK32(s, 12, 0, 0, 0, 16, 28653);
    compactAdd32(s, 11, 11, 12, 0, 0, 0);
    compactAdd32(s, 11, 11, 10, 0, 0, 0);
    compactMovImm32(s, 10, 0, 0, 0, 0, 11664);
    compactAdd32(s, 0, 14, 10, 0, 0, 0);
    compactMovImm32(s, 13, 0, 0, 0, 0, 29644);
    compactMovImm32(s, 10, 0, 0, 0, 0, 34061);
    compactMovK32(s, 10, 0, 0, 0, 16, 38807);
    compactMovImm32Wide(s, 12, 0, 255, 127, 0, 65535);
    compactAdd32(s, 15, 11, 10, 0, 0, 0);
    compactCmp32(s, 0, 15, 12, 0, 0, 0);
    compactCSet32LO(s, 15, 0, 0, 0, 0, 0);
    compactAdd32(s, 13, 14, 13, 0, 0, 0);
    compactAdd32(s, 16, 0, 13, 0, 0, 0);
    compactAddImmShift32(s, 16, 16, 0, 0, 0, 743);
    compactMul32(s, 15, 16, 15, 0, 0, 0);
    compactXor32(s, 14, 15, 14, 0, 0, 0);
    compactLoadSXTW64(s, 14, 20, 14, 0, 3, 0);
    compactMovImm64(s, 17, 0, 0, 0, 0, 60197);
    return s->x[14];
}
uint64_t r_known_1_1000e1d10(RState *s) {
    compactMovImm32(s, 10, 0, 0, 0, 0, 37406);
    compactMovK32(s, 10, 0, 0, 0, 16, 24640);
    compactAdd32(s, 8, 8, 10, 0, 0, 0);
    compactMovImm32(s, 10, 0, 0, 0, 0, 58586);
    compactMovK32(s, 10, 0, 0, 0, 16, 63402);
    compactSub32(s, 10, 10, 11, 0, 0, 0);
    compactCmpImm32(s, 0, 8, 0, 0, 0, 0);
    compactCSEL32(s, 8, 11, 10, 0, 11, 0);
    compactStoreBaseImm32(s, 8, 9, 0, 0, 0, 4);
    compactAddSPImm(s, 0, 0, 0, 0, 0, 16);
    return s->x[30];
}
uint64_t r_known_1_1000e7e0c(RState *s) {
    compactMovImm32(s, 8, 0, 0, 0, 0, 59318);
    compactLoadSP32(s, 13, 0, 0, 0, 0, 12);
    compactXor32(s, 12, 13, 8, 0, 0, 0);
    compactMovImm32(s, 8, 0, 0, 0, 0, 62820);
    compactLoadSP64(s, 9, 0, 0, 0, 0, 56);
    compactLoadSP64(s, 11, 0, 0, 0, 0, 72);
    compactAdd64(s, 10, 9, 11, 0, 0, 0);
    compactXor32(s, 24, 13, 8, 0, 0, 0);
    compactLoadBaseImm8(s, 8, 10, 0, 0, 0, 11);
    compactStoreSPImm8(s, 8, 0, 0, 0, 0, 95);
    compactLoadBaseImm8(s, 8, 10, 0, 0, 0, 10);
    compactStoreSPImm8(s, 8, 0, 0, 0, 0, 94);
    compactLoadBaseImm8(s, 8, 10, 0, 0, 0, 9);
    compactStoreSPImm8(s, 8, 0, 0, 0, 0, 93);
    compactLoadBaseImm8(s, 8, 10, 0, 0, 0, 8);
    compactStoreSPImm8(s, 8, 0, 0, 0, 0, 92);
    compactLoadBaseImm8(s, 8, 10, 0, 0, 0, 7);
    compactStoreSPImm8(s, 8, 0, 0, 0, 0, 91);
    compactLoadBaseImm8(s, 8, 10, 0, 0, 0, 6);
    compactStoreSPImm8(s, 8, 0, 0, 0, 0, 90);
    compactLoadBaseImm8(s, 8, 10, 0, 0, 0, 5);
    compactStoreSPImm8(s, 8, 0, 0, 0, 0, 89);
    compactLoadBaseImm8(s, 8, 10, 0, 0, 0, 4);
    compactStoreSPImm8(s, 8, 0, 0, 0, 0, 88);
    compactLoadBaseImm32(s, 8, 10, 0, 0, 0, 16);
    compactMovImm64(s, 9, 0, 0, 0, 0, 32590);
    compactMovK64(s, 9, 0, 0, 0, 16, 63431);
    compactMovK64(s, 9, 0, 0, 0, 32, 65276);
    compactMovK64(s, 9, 0, 0, 0, 48, 10975);
    compactXor64(s, 9, 8, 9, 0, 0, 0);
    compactMovImm64(s, 11, 0, 0, 0, 0, 43203);
    compactMovK64(s, 11, 0, 0, 0, 16, 61326);
    compactMovK64(s, 11, 0, 0, 0, 32, 1);
    compactAdd64(s, 11, 12, 11, 0, 0, 0);
    compactAndLSL64(s, 8, 11, 8, 0, 1, 0);
    compactMovImm64(s, 11, 0, 0, 0, 0, 1352);
    compactMovK64(s, 11, 0, 0, 0, 16, 48351);
    compactMovK64(s, 11, 0, 0, 0, 32, 259);
    compactMovK64(s, 11, 0, 0, 0, 48, 54560);
    compactAdd64(s, 9, 9, 11, 0, 0, 0);
    compactAdd64(s, 8, 9, 8, 0, 0, 0);
    compactMovImm32(s, 9, 0, 0, 0, 0, 33942);
    compactMovK32(s, 9, 0, 0, 0, 16, 46246);
    compactCmp64(s, 0, 8, 9, 0, 0, 0);
    compactCSet32EQ(s, 9, 0, 0, 0, 0, 0);
    compactMovImm32Wide(s, 11, 0, 255, 255, 0, 47379);
    compactAdd32(s, 11, 24, 11, 0, 0, 0);
    compactMul32(s, 9, 9, 11, 0, 0, 0);
    compactXor32(s, 9, 9, 13, 0, 0, 0);
    compactLoadSXTW64(s, 9, 22, 9, 0, 3, 0);
    compactMovImm32(s, 11, 0, 0, 0, 0, 47609);
    compactMovK32(s, 11, 0, 0, 0, 16, 11342);
    compactStoreSP32(s, 0, 11, 0, 0, 0, 32);
    compactMovImm64(s, 17, 0, 0, 0, 0, 4905);
    return s->x[9];
}
uint64_t r_known_1_1000e8094(RState *s) {
    compactMovImm32(s, 11, 0, 0, 0, 0, 36951);
    compactMovK32(s, 11, 0, 0, 0, 16, 20252);
    compactAdd32(s, 10, 10, 11, 0, 0, 0);
    compactMovImm32(s, 11, 0, 0, 0, 0, 56475);
    compactMovK32(s, 11, 0, 0, 0, 16, 36134);
    compactMovImm32(s, 12, 0, 0, 0, 0, 28348);
    compactMovK32(s, 12, 0, 0, 0, 16, 45059);
    compactAdd32(s, 12, 8, 12, 0, 0, 0);
    compactMul32(s, 10, 10, 12, 0, 0, 0);
    compactMAdd32(s, 8, 8, 11, 10, 0, 0);
    compactMovImm32(s, 10, 0, 0, 0, 0, 3649);
    compactMovK32(s, 10, 0, 0, 0, 16, 64763);
    compactAdd32(s, 8, 8, 10, 0, 0, 0);
    compactStoreBaseImm32(s, 8, 9, 0, 0, 0, 4);
    compactLoadSP64(s, 8, 0, 0, 0, 0, 24);
    compactMovImm48(s, 9, 6, 1, 1, 0, 53248);
    compactLoadBaseImm64(s, 9, 9, 0, 0, 0, 1032);
    compactLoadBase64(s, 9, 9, 0, 0, 0, 0);
    compactCmp64(s, 0, 9, 8, 0, 0, 0);
    return r_conditionIndex(s, 1) ? UINT64_C(0x1000e8104) : UINT64_C(0x1000e80e4);
}
uint64_t r_known_1_1000e80e4(RState *s) {
    compactPairLoad64(s, 29, 31, 30, 0, 0, 112);
    compactPairLoad64(s, 20, 31, 19, 0, 0, 96);
    compactPairLoad64(s, 22, 31, 21, 0, 0, 80);
    compactPairLoad64(s, 24, 31, 23, 0, 0, 64);
    compactPairLoad64(s, 26, 31, 25, 0, 0, 48);
    compactPairLoad64(s, 28, 31, 27, 0, 0, 32);
    compactAddSPImm(s, 0, 0, 0, 0, 0, 128);
    return s->x[30];
}
uint64_t r_known_1_1000e8f9c(RState *s) {
    compactMovImm32(s, 17, 0, 0, 0, 0, 6151);
    compactAdd32(s, 17, 21, 17, 0, 0, 0);
    compactMovImm32(s, 1, 0, 0, 0, 0, 33345);
    compactOr32(s, 1, 17, 1, 0, 0, 0);
    compactLoadBaseImm32(s, 17, 10, 0, 0, 0, 8);
    compactMovImm32(s, 2, 0, 0, 0, 0, 48125);
    compactMovK32(s, 2, 0, 0, 0, 16, 12286);
    compactXor32(s, 24, 17, 2, 0, 0, 0);
    compactMovImm32(s, 2, 0, 0, 0, 0, 50569);
    compactMovK32(s, 2, 0, 0, 0, 16, 24572);
    compactAdd32(s, 2, 1, 2, 0, 0, 0);
    compactAndLSL32(s, 17, 2, 17, 0, 1, 0);
    compactAdd32(s, 2, 24, 4, 0, 0, 0);
    compactAdd32(s, 17, 2, 17, 0, 0, 0);
    compactStoreSP32(s, 0, 17, 0, 0, 0, 32);
    compactLoadSXTW64(s, 2, 22, 21, 0, 3, 0);
    compactMovImm64(s, 17, 0, 0, 0, 0, 6665);
    return s->x[2];
}
uint64_t r_known_1_1000e9c48(RState *s) {
    compactStoreBaseImm32(s, 11, 19, 0, 0, 0, 32);
    compactLoadSignedOffset64(s, 8, 29, 0, 0, 0, 65440);
    compactMovImm48(s, 9, 6, 1, 1, 0, 53248);
    compactLoadBaseImm64(s, 9, 9, 0, 0, 0, 1032);
    compactLoadBase64(s, 9, 9, 0, 0, 0, 0);
    compactCmp64(s, 0, 9, 8, 0, 0, 0);
    return r_conditionIndex(s, 1) ? UINT64_C(0x1000e9c84) : UINT64_C(0x1000e9c64);
}
uint64_t r_known_1_1000e9c64(RState *s) {
    compactPairLoad64(s, 29, 31, 30, 0, 0, 304);
    compactPairLoad64(s, 20, 31, 19, 0, 0, 288);
    compactPairLoad64(s, 22, 31, 21, 0, 0, 272);
    compactPairLoad64(s, 24, 31, 23, 0, 0, 256);
    compactPairLoad64(s, 26, 31, 25, 0, 0, 240);
    compactPairLoad64(s, 28, 31, 27, 0, 0, 224);
    compactAddSPImm(s, 0, 0, 0, 0, 0, 320);
    return s->x[30];
}
uint64_t r_known_1_1000e9fc4(RState *s) {
    compactMovImm32(s, 8, 0, 0, 0, 0, 27359);
    compactXor32(s, 8, 28, 8, 0, 0, 0);
    compactMovImm32(s, 9, 0, 0, 0, 0, 9029);
    compactMul32(s, 23, 8, 9, 0, 0, 0);
    compactLoadSP32(s, 8, 0, 0, 0, 0, 88);
    compactCMNImm32(s, 0, 8, 0, 0, 0, 1);
    compactCSet32EQ(s, 8, 0, 0, 0, 0, 0);
    compactMovImm32(s, 9, 0, 0, 0, 0, 27107);
    compactXor32(s, 9, 23, 9, 0, 0, 0);
    compactMul32(s, 8, 8, 9, 0, 0, 0);
    compactXor32(s, 8, 8, 28, 0, 0, 0);
    compactLoadSXTW64(s, 8, 22, 8, 0, 3, 0);
    compactMovImm64(s, 17, 0, 0, 0, 0, 49740);
    return s->x[8];
}
uint64_t r_known_1_1000f4834(RState *s) {
    compactLoadBaseImm64(s, 11, 8, 0, 0, 0, 8);
    compactMovNegImm64(s, 15, 0, 0, 0, 0, 51640);
    compactMovK64(s, 15, 0, 0, 0, 16, 4266);
    compactMovK64(s, 15, 0, 0, 0, 32, 65534);
    compactAddLSL64(s, 15, 15, 12, 0, 2, 0);
    compactLoadXIndex32(s, 3, 11, 15, 0, 0, 0);
    compactLoadBaseImm64(s, 11, 9, 0, 0, 0, 8);
    compactLoadXIndex32(s, 15, 11, 15, 0, 0, 0);
    compactMovImm32(s, 11, 0, 0, 0, 0, 1057);
    compactXor32(s, 4, 5, 11, 0, 0, 0);
    compactMovImm32(s, 11, 0, 0, 0, 0, 43971);
    compactMovK32(s, 11, 0, 0, 0, 16, 894);
    compactXor32(s, 11, 3, 11, 0, 0, 0);
    compactMovImm32(s, 17, 0, 0, 0, 0, 21565);
    compactMovK32(s, 17, 0, 0, 0, 16, 64641);
    compactAdd32(s, 11, 11, 17, 0, 0, 0);
    compactMovImm32Wide(s, 17, 0, 255, 255, 0, 36347);
    compactAdd32(s, 17, 4, 17, 0, 0, 0);
    compactMovImm32(s, 6, 0, 0, 0, 0, 39010);
    compactMovK32(s, 6, 0, 0, 0, 16, 32097);
    compactXor32(s, 17, 17, 6, 0, 0, 0);
    compactXor32(s, 17, 17, 3, 0, 0, 0);
    compactMovImm32(s, 6, 0, 0, 0, 0, 44980);
    compactMovK32(s, 6, 0, 0, 0, 16, 23633);
    compactXor32(s, 28, 3, 6, 0, 0, 0);
    compactMovImm32(s, 6, 0, 0, 0, 0, 20556);
    compactMovK32(s, 6, 0, 0, 0, 16, 41902);
    compactAdd32(s, 28, 28, 6, 0, 0, 0);
    compactXor32(s, 11, 28, 11, 0, 0, 0);
    compactMovImm32(s, 6, 0, 0, 0, 0, 22708);
    compactMovK32(s, 6, 0, 0, 0, 16, 33438);
    compactAdd32(s, 17, 17, 6, 0, 0, 0);
    compactXor32(s, 11, 11, 17, 0, 0, 0);
    compactMovImm32(s, 17, 0, 0, 0, 0, 1127);
    compactMovK32(s, 17, 0, 0, 0, 16, 48629);
    compactXor32(s, 17, 15, 17, 0, 0, 0);
    compactMovImm32(s, 6, 0, 0, 0, 0, 64409);
    compactMovK32(s, 6, 0, 0, 0, 16, 16906);
    compactAdd32(s, 17, 17, 6, 0, 0, 0);
    compactMovImm32(s, 6, 0, 0, 0, 0, 40762);
    compactMovK32(s, 6, 0, 0, 0, 16, 56125);
    compactXor32(s, 28, 15, 6, 0, 0, 0);
    compactMovImm32(s, 6, 0, 0, 0, 0, 24774);
    compactMovK32(s, 6, 0, 0, 0, 16, 9410);
    compactAdd32(s, 28, 28, 6, 0, 0, 0);
    compactXor32(s, 17, 17, 28, 0, 0, 0);
    compactMovImm32(s, 6, 0, 0, 0, 0, 14438);
    compactMovK32(s, 6, 0, 0, 0, 16, 17542);
    compactXor32(s, 28, 15, 6, 0, 0, 0);
    compactMovImm32(s, 6, 0, 0, 0, 0, 51098);
    compactMovK32(s, 6, 0, 0, 0, 16, 47993);
    compactAdd32(s, 28, 28, 6, 0, 0, 0);
    compactXor32(s, 17, 17, 28, 0, 0, 0);
    compactAdd32(s, 11, 11, 30, 0, 0, 0);
    compactCmp32(s, 0, 11, 13, 0, 0, 0);
    compactCSet32LO(s, 28, 0, 0, 0, 0, 0);
    compactAdd32(s, 17, 17, 30, 0, 0, 0);
    compactCmp32(s, 0, 17, 13, 0, 0, 0);
    compactCSet32LO(s, 6, 0, 0, 0, 0, 0);
    compactXor32(s, 6, 28, 6, 0, 0, 0);
    compactCmp32(s, 0, 11, 17, 0, 0, 0);
    compactCSet32HI(s, 11, 0, 0, 0, 0, 0);
    compactCmpImm32(s, 0, 6, 0, 0, 0, 0);
    compactCSEL32(s, 11, 28, 11, 0, 1, 0);
    compactXorImm32(s, 11, 11, 0, 0, 0, 1);
    compactMovImm32(s, 17, 0, 0, 0, 0, 81);
    compactMul32(s, 11, 11, 17, 0, 0, 0);
    compactXor32(s, 11, 11, 5, 0, 0, 0);
    compactLoadSXTW64(s, 5, 10, 11, 0, 3, 0);
    compactMov64(s, 11, 16, 0, 0, 0, 0);
    compactMovImm64(s, 17, 0, 0, 0, 0, 22415);
    return s->x[5];
}
uint64_t r_known_1_1000f7674(RState *s) {
    compactSubImmShift32(s, 17, 10, 0, 0, 0, 1);
    compactAdd32(s, 10, 10, 0, 0, 0, 0);
    compactCmp32(s, 0, 10, 12, 0, 0, 0);
    compactCSet32LO(s, 10, 0, 0, 0, 0, 0);
    compactMul32(s, 10, 1, 10, 0, 0, 0);
    compactXor32(s, 10, 10, 11, 0, 0, 0);
    compactLoadSXTW64(s, 2, 20, 10, 0, 3, 0);
    compactMov64(s, 10, 17, 0, 0, 0, 0);
    compactMovImm64(s, 17, 0, 0, 0, 0, 23971);
    return s->x[2];
}
uint64_t r_known_1_1000fcde4(RState *s) {
    compactMovImm32(s, 8, 0, 0, 0, 0, 21106);
    compactAdd32(s, 21, 28, 8, 0, 0, 0);
    compactLoadSP64(s, 9, 0, 0, 0, 0, 56);
    compactLoadSP64(s, 10, 0, 0, 0, 0, 72);
    compactAdd64(s, 8, 9, 10, 0, 0, 0);
    compactLoadBase32(s, 9, 8, 0, 0, 0, 0);
    compactMovImm32Wide(s, 10, 0, 255, 255, 0, 47331);
    compactAdd32(s, 10, 28, 10, 0, 0, 0);
    compactAnd32(s, 9, 9, 10, 0, 0, 0);
    compactMovImm32(s, 10, 0, 0, 0, 0, 64206);
    compactMovK32(s, 10, 0, 0, 0, 16, 65261);
    compactCmp32(s, 0, 9, 10, 0, 0, 0);
    compactCSet32EQ(s, 9, 0, 0, 0, 0, 0);
    compactMovImm32(s, 10, 0, 0, 0, 0, 51825);
    compactMul32(s, 9, 9, 10, 0, 0, 0);
    compactXor32(s, 9, 9, 28, 0, 0, 0);
    compactLoadSXTW64(s, 10, 22, 9, 0, 3, 0);
    compactMovImm32(s, 9, 0, 0, 0, 0, 8239);
    compactMovK32(s, 9, 0, 0, 0, 16, 12682);
    compactMovImm64(s, 17, 0, 0, 0, 0, 65528);
    return s->x[10];
}
uint64_t r_known_1_10010558c(RState *s) {
    compactLoadBaseImm64(s, 20, 0, 0, 0, 0, 8);
    compactMovImm32(s, 11, 0, 0, 0, 0, 41467);
    compactMovK32(s, 11, 0, 0, 0, 16, 33033);
    compactMovImm32(s, 12, 0, 0, 0, 0, 28660);
    compactMovK32(s, 12, 0, 0, 0, 16, 32502);
    compactAdd32(s, 11, 2, 11, 0, 0, 0);
    compactAnd32(s, 11, 11, 12, 0, 0, 0);
    compactLoadBaseImm32(s, 13, 20, 0, 0, 0, 4);
    compactCmp32(s, 0, 13, 1, 0, 0, 0);
    compactCSet32(s, 12, 0, 0, 0, 1, 0);
    compactMovImm32(s, 14, 0, 0, 0, 0, 11);
    compactMul32(s, 12, 12, 14, 0, 0, 0);
    compactXor32(s, 12, 12, 2, 0, 0, 0);
    compactLoadSXTW64(s, 12, 19, 12, 0, 3, 0);
    compactMovImm64(s, 17, 0, 0, 0, 0, 12181);
    return s->x[12];
}
uint64_t r_known_1_1001088e0(RState *s) {
    compactMovImm32Wide(s, 8, 0, 255, 255, 0, 55508);
    compactMovImm32(s, 9, 0, 0, 0, 0, 33085);
    compactMovK32(s, 9, 0, 0, 0, 16, 60871);
    compactAdd32(s, 10, 26, 8, 0, 0, 0);
    compactXor32(s, 9, 10, 9, 0, 0, 0);
    compactMovImm32(s, 8, 0, 0, 0, 0, 15261);
    compactMovK32(s, 8, 0, 0, 0, 16, 53167);
    compactXor32(s, 8, 10, 8, 0, 0, 0);
    compactMovImm32(s, 11, 0, 0, 0, 0, 34208);
    compactMovK32(s, 11, 0, 0, 0, 16, 57832);
    compactAdd32(s, 11, 9, 11, 0, 0, 0);
    compactXor32(s, 11, 11, 8, 0, 0, 0);
    compactCmp32(s, 0, 0, 11, 0, 0, 0);
    compactCSet32EQ(s, 11, 0, 0, 0, 0, 0);
    compactMovImm32(s, 12, 0, 0, 0, 0, 9050);
    compactMul32(s, 11, 11, 12, 0, 0, 0);
    compactXor32(s, 10, 11, 10, 0, 0, 0);
    compactLoadSXTW64(s, 10, 21, 10, 0, 3, 0);
    compactMovImm64(s, 17, 0, 0, 0, 0, 45567);
    return s->x[10];
}
uint64_t r_known_1_10010b03c(RState *s) {
    compactLoadBaseImm64(s, 10, 19, 0, 0, 0, 8);
    compactMovImm32(s, 13, 0, 0, 0, 0, 18200);
    compactXor32(s, 13, 9, 13, 0, 0, 0);
    compactMovImm32(s, 14, 0, 0, 0, 0, 13103);
    compactMul32(s, 21, 13, 14, 0, 0, 0);
    compactStoreBaseImm64(s, 8, 10, 0, 0, 0, 8);
    compactLoadBaseImm64(s, 8, 27, 0, 0, 0, 16);
    compactMovImm64(s, 13, 0, 0, 0, 0, 34560);
    compactMovK64(s, 13, 0, 0, 0, 16, 64653);
    compactMovK64(s, 13, 0, 0, 0, 32, 6448);
    compactMovK64(s, 13, 0, 0, 0, 48, 22012);
    compactAdd64(s, 13, 21, 13, 0, 0, 0);
    compactXor64(s, 8, 8, 13, 0, 0, 0);
    compactStoreBaseImm64(s, 8, 10, 0, 0, 0, 16);
    compactPairStore64(s, 11, 10, 12, 0, 0, 32);
    compactPairStore64(s, 31, 10, 31, 0, 0, 48);
    compactLoadSXTW64(s, 8, 22, 9, 0, 3, 0);
    compactMovImm32(s, 9, 0, 0, 0, 0, 31685);
    compactMovK32(s, 9, 0, 0, 0, 16, 52853);
    compactMovImm64(s, 17, 0, 0, 0, 0, 65528);
    return s->x[8];
}
uint64_t r_known_1_100111434(RState *s) {
    compactLoadSP64(s, 0, 0, 0, 0, 0, 0);
    compactLoadBaseImm64(s, 8, 0, 0, 0, 0, 32);
    compactLoadBaseImm64(s, 9, 0, 0, 0, 0, 8);
    compactMovImm32(s, 10, 0, 0, 0, 0, 2630);
    compactMovK32(s, 10, 0, 0, 0, 16, 18190);
    compactStoreBase32(s, 10, 9, 0, 0, 0, 0);
    compactAdd32(s, 9, 21, 26, 0, 0, 0);
    compactSub32(s, 10, 28, 9, 0, 0, 0);
    compactSub32(s, 11, 9, 28, 0, 0, 0);
    compactOr32(s, 10, 10, 11, 0, 0, 0);
    compactMovImm32(s, 11, 0, 0, 0, 0, 31684);
    compactMovK32(s, 11, 0, 0, 0, 16, 52853);
    compactXor32(s, 11, 9, 11, 0, 0, 0);
    compactAdd32(s, 11, 11, 25, 0, 0, 0);
    compactNot32(s, 10, 10, 0, 0, 0, 0);
    compactAddASR32(s, 10, 11, 10, 0, 31, 0);
    compactStoreBase32(s, 10, 8, 0, 0, 0, 0);
    compactMovImm32(s, 8, 0, 0, 0, 0, 12053);
    compactMovK32(s, 8, 0, 0, 0, 16, 52853);
    compactXor32(s, 8, 9, 8, 0, 0, 0);
    compactLoadSXTW64(s, 8, 23, 8, 0, 3, 0);
    compactMov64(s, 3, 21, 0, 0, 0, 0);
    compactMovImm64(s, 17, 0, 0, 0, 0, 11072);
    return s->x[8];
}
uint64_t r_known_1_1001143e0(RState *s) {
    compactMovImm64(s, 12, 0, 0, 0, 0, 0);
    compactSubImmShift32(s, 13, 15, 0, 0, 0, 40);
    compactCmpImm32(s, 0, 14, 0, 0, 0, 0);
    compactCNeg32(s, 11, 14, 0, 0, 4, 0);
    compactSXT32To64(s, 14, 11, 0, 0, 0, 0);
    compactLoadSXTW64(s, 1, 10, 15, 0, 3, 0);
    compactMovImm32(s, 11, 0, 0, 0, 0, 29293);
    compactMovK32(s, 11, 0, 0, 0, 16, 31701);
    return UINT64_C(0x100114400);
}
