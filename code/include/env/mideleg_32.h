#ifndef RISCV_MIDELEG_H
#define RISCV_MIDELEG_H

#define MIDELEG_SSI_SHIFT 1
#define MIDELEG_MSI_SHIFT 3
#define MIDELEG_STI_SHIFT 5
#define MIDELEG_MTI_SHIFT 7
#define MIDELEG_SEI_SHIFT 9
#define MIDELEG_MEI_SHIFT 11

#define MIDELEG_SSI_MASK 0x00000002ull
#define MIDELEG_MSI_MASK 0x00000008ull
#define MIDELEG_STI_MASK 0x00000020ull
#define MIDELEG_MTI_MASK 0x00000080ull
#define MIDELEG_SEI_MASK 0x00000200ull
#define MIDELEG_MEI_MASK 0x00000800ull

#endif /* RISCV_MIDELEG_H */
