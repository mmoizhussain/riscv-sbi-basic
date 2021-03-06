#ifndef RISCV_MSTATUSH_H
#define RISCV_MSTATUSH_H

#define MSTATUSH_SBE_SHIFT  4
#define MSTATUSH_MBE_SHIFT  5
#define MSTATUSH_GVA_SHIFT  6
#define MSTATUSH_MPV_SHIFT  7

#define MSTATUSH_SBE_MASK   0x00000010ull
#define MSTATUSH_MBE_MASK   0x00000020ull
#define MSTATUSH_GVA_MASK   0x00000040ull
#define MSTATUSH_MPV_MASK   0x00000080ull

#endif
