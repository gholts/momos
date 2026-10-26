#ifndef MOMOS_RECOVERY_H
#define MOMOS_RECOVERY_H
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <signal.h>

typedef struct { const char *suffix; const uint8_t *data; size_t size; } RFile;
// Inputs remain owned by caller. No host file access, subprocesses or networking.
bool RecoverEnrollment(const RFile *files, size_t count, const uint8_t mac[6],
                       const char *executablePath, const uint8_t payload[432],
                       uint32_t user, uint32_t keyID,
                       const volatile sig_atomic_t *cancelled,
                       uint8_t output[4184], char error[160]);
#endif
