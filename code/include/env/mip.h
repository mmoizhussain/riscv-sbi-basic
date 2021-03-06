#ifndef RISCV_MIP_H
#define RISCV_MIP_H

#define MIP_SSIP_SHIFT 1
#define MIP_MSIP_SHIFT 3
#define MIP_STIP_SHIFT 5
#define MIP_MTIP_SHIFT 7
#define MIP_SEIP_SHIFT 9
#define MIP_MEIP_SHIFT 11

#define MIP_SSIP_MASK 0x0000000000000002ull
#define MIP_MSIP_MASK 0x0000000000000008ull
#define MIP_STIP_MASK 0x0000000000000020ull
#define MIP_MTIP_MASK 0x0000000000000080ull
#define MIP_SEIP_MASK 0x0000000000000200ull
#define MIP_MEIP_MASK 0x0000000000000800ull

#endif /* RISCV_MIP_H */
