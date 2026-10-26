#include "native-runtime.h"
#include "native-ops.inc"
#include "kernels.h"
static __attribute__((noinline)) void r_kernel_cyclefinal_part_0(RState *s) {
    compactMovImm32(s, 9, 0, 0, 0, 0, 33782);
    compactMovK32(s, 9, 0, 0, 0, 16, 1281);
    compactXor32(s, 11, 8, 9, 0, 0, 0);
    compactMovImm32(s, 9, 0, 0, 0, 0, 7541);
    compactMovK32(s, 9, 0, 0, 0, 16, 36596);
    compactAdd32(s, 19, 11, 9, 0, 0, 0);
    compactAddSPShiftImm64(s, 9, 0, 0, 0, 12, 4);
    compactLoadBaseImm32(s, 9, 9, 0, 0, 0, 2796);
    compactMovImm32(s, 10, 0, 0, 0, 0, 30859);
    compactMovK32(s, 10, 0, 0, 0, 16, 6300);
    compactXor32(s, 9, 9, 10, 0, 0, 0);
    compactXor32(s, 9, 13, 9, 0, 0, 0);
    compactLoadSP32(s, 10, 0, 0, 0, 0, 7832);
    compactMovImm32(s, 12, 0, 0, 0, 0, 14314);
    compactMovK32(s, 12, 0, 0, 0, 16, 56430);
    compactXor32(s, 12, 10, 12, 0, 0, 0);
    compactOr32(s, 9, 12, 9, 0, 0, 0);
    compactLoadBaseImm32(s, 12, 30, 0, 0, 0, 4532);
    compactMovImm32(s, 14, 0, 0, 0, 0, 3081);
    compactXor32(s, 14, 13, 14, 0, 0, 0);
    compactMovImm32(s, 15, 0, 0, 0, 0, 8192);
    compactMovK32(s, 15, 0, 0, 0, 16, 14747);
    compactXor32(s, 13, 13, 15, 0, 0, 0);
    compactExtract32(s, 13, 14, 13, 0, 13, 0);
    compactMovImm32(s, 14, 0, 0, 0, 0, 2268);
    compactMovK32(s, 14, 0, 0, 0, 16, 51138);
    compactXor32(s, 12, 12, 14, 0, 0, 0);
    compactMovImm32(s, 14, 0, 0, 0, 0, 10892);
    compactMovK32(s, 14, 0, 0, 0, 16, 64142);
    compactAdd32(s, 14, 11, 14, 0, 0, 0);
    compactXor32(s, 10, 14, 10, 0, 0, 0);
    compactAnd32(s, 10, 10, 12, 0, 0, 0);
    compactAnd32(s, 10, 10, 13, 0, 0, 0);
    compactOr32(s, 9, 9, 10, 0, 0, 0);
    compactMovImm32(s, 10, 0, 0, 0, 0, 1092);
    compactMovK32(s, 10, 0, 0, 0, 16, 4034);
    compactAndLSL32(s, 10, 10, 9, 0, 1, 0);
    compactMovImm32(s, 12, 0, 0, 0, 0, 546);
    compactMovK32(s, 12, 0, 0, 0, 16, 34785);
    compactSub32(s, 9, 9, 10, 0, 0, 0);
    compactAdd32(s, 9, 9, 12, 0, 0, 0);
    compactLoadSP32(s, 10, 0, 0, 0, 0, 5040);
    compactMovImm32(s, 13, 0, 0, 0, 0, 31998);
    compactMovK32(s, 13, 0, 0, 0, 16, 23987);
    compactXor32(s, 10, 10, 13, 0, 0, 0);
    compactXor32(s, 12, 9, 12, 0, 0, 0);
    compactAnd32(s, 10, 12, 10, 0, 0, 0);
    compactMovImm32(s, 12, 0, 0, 0, 0, 7572);
    compactMovK32(s, 12, 0, 0, 0, 16, 19737);
    compactAnd32(s, 9, 9, 12, 0, 0, 0);
    compactXor32(s, 9, 10, 9, 0, 0, 0);
    compactMovImm32(s, 10, 0, 0, 0, 0, 24938);
    compactMovK32(s, 10, 0, 0, 0, 16, 5547);
    compactXor32(s, 10, 9, 10, 0, 0, 0);
    compactStoreSP32(s, 0, 10, 0, 0, 0, 5040);
    compactSub32(s, 10, 9, 8, 0, 0, 0);
    compactSub32(s, 9, 8, 9, 0, 0, 0);
    compactOr32(s, 9, 10, 9, 0, 0, 0);
    compactNot32(s, 9, 9, 0, 0, 0, 0);
    compactLSRImm32(s, 9, 9, 0, 0, 31, 0);
    compactMovImm32(s, 10, 0, 0, 0, 0, 53888);
    compactMul32(s, 9, 9, 10, 0, 0, 0);
    compactMovImm32(s, 10, 0, 0, 0, 0, 21661);
    compactMovK32(s, 10, 0, 0, 0, 16, 1281);
    compactXor32(s, 8, 8, 10, 0, 0, 0);
    compactXor32(s, 8, 8, 9, 0, 0, 0);
    compactLoadSP64(s, 9, 0, 0, 0, 0, 3568);
    compactLoadSXTW64(s, 8, 9, 8, 0, 3, 0);
    compactMovImm64(s, 17, 0, 0, 0, 0, 37658);
}
void r_kernel_cyclefinal(RState *s) {
    r_kernel_cyclefinal_part_0(s);
}
