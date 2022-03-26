#ifndef RISCV_MSTATUS_H
#define RISCV_MSTATUS_H

#define MSTATUS_SIE_SHIFT 1
#define MSTATUS_MIE_SHIFT 3
#define MSTATUS_SPIE_SHIFT 5
#define MSTATUS_UBE_SHIFT 6
#define MSTATUS_MPIE_SHIFT 7
#define MSTATUS_SPP_SHIFT 8
#define MSTATUS_VS_SHIFT 9
#define MSTATUS_MPP_SHIFT 11
#define MSTATUS_FS_SHIFT 13
#define MSTATUS_XS_SHIFT 15
#define MSTATUS_MPRV_SHIFT 17
#define MSTATUS_SUM_SHIFT 18
#define MSTATUS_MXR_SHIFT 19
#define MSTATUS_TVM_SHIFT 20
#define MSTATUS_TW_SHIFT 21
#define MSTATUS_TSR_SHIFT 22
#define MSTATUS_UXL_SHIFT 32
#define MSTATUS_SXL_SHIFT 34
#define MSTATUS_SBE_SHIFT 36
#define MSTATUS_MBE_SHIFT 37
#define MSTATUS_SD_SHIFT 63

#define MSTATUS_SIE_MASK 0x0000000000000002ull
#define MSTATUS_MIE_MASK 0x0000000000000008ull
#define MSTATUS_SPIE_MASK 0x0000 0000 0000 0020ull
#define MSTATUS_UBE_MASK 0x0000 0000 0000 0040ull
#define MSTATUS_MPIE_MASK 0x0000 0000 0000 0080ull
#define MSTATUS_SPP_MASK 0x0000 0000 0000 0100ull
#define MSTATUS_VS_MASK 0x0000 0000 0000 0600ull
#define MSTATUS_MPP_MASK 0x0000 0000 0000 1800ull
#define MSTATUS_FS_MASK 0x0000 0000 0000 6000ull
#define MSTATUS_XS_MASK 0x0000 0000 0001 8000ull
#define MSTATUS_MPRV_MASK 0x0000 0000 0002 0000ull
#define MSTATUS_SUM_MASK 0x0000 0000 0004 0000ull
#define MSTATUS_MXR_MASK 0x0000 0000 0008 0000ull
#define MSTATUS_TVM_MASK 0x0000 0000 0010 0000ull
#define MSTATUS_TW_MASK 0x0000 0000 0020 0000ull
#define MSTATUS_TSR_MASK 0x0000 0000 0040 0000ull
#define MSTATUS_UXL_MASK 0x0000 0003 0000 0000ull
#define MSTATUS_SXL_MASK 0x0000 000C 0000 0000ull
#define MSTATUS_SBE_MASK 0x0000 0010 0000 0000ull
#define MSTATUS_MBE_MASK 0x0000 0020 0000 0000ull
#define MSTATUS_SD_MASK 0x8000 0000 0000 0000ull

#endif

