#include "native-runtime.h"
#include "native-ops.inc"
#include "kernels.h"
static __attribute__((noinline)) void r_kernel_digestprologue_part_0(RState *s) {
    compactStoreSP32(s, 0, 0, 0, 0, 0, 3464);
    compactStoreSP32(s, 0, 16, 0, 0, 0, 3520);
    compactMovImm32(s, 14, 0, 0, 0, 0, 37560);
    compactMovK32(s, 14, 0, 0, 0, 16, 45113);
    compactAdd32(s, 14, 5, 14, 0, 0, 0);
    compactUDiv32(s, 16, 14, 11, 0, 0, 0);
    compactMSub32(s, 14, 16, 11, 14, 0, 0);
    compactLoadSP32(s, 15, 0, 0, 0, 0, 3424);
    compactAdd32(s, 17, 15, 8, 0, 0, 0);
    compactUMull32(s, 0, 17, 9, 0, 0, 0);
    compactLoadUXTW8(s, 16, 30, 14, 0, 0, 0);
    compactLSRImm64(s, 0, 0, 0, 0, 34, 0);
    compactMSub32(s, 17, 0, 12, 17, 0, 0);
}
void r_kernel_digestprologue(RState *s) {
    r_kernel_digestprologue_part_0(s);
}
