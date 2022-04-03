#ifndef RISCV_MTVEC_H
#define RISCV_MTVEC_H

#define MTVEC_MODE_SHIFT 0
#define MTVEC_BASE_SHIFT 2

#define MTVEC_MODE_MASK 0x0000000000000003ull
#define MTVEC_BASE_MASK 0xFFFFFFFFFFFFFFFCull

#define MTVEC_MODE_DIRECT   0
#define MTVEC_MODE_VECTORED 1 

#endif /* RISCV_MTVEC_H */
