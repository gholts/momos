.section __TEXT,__const
.balign 16
.globl _momos_recovery_data
_momos_recovery_data:
.incbin "recovery/data.gz"
.globl _momos_recovery_data_end
_momos_recovery_data_end:
