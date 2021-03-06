#ifndef RISCV_MEDELEG_H
#define RISCV_MEDELEG_H

#define MEDELEG_IAM_SHIFT 0
#define MEDELEG_IAF_SHIFT 1
#define MEDELEG_II_SHIFT  2
#define MEDELEG_IAB_SHIFT 3
#define MEDELEG_LAM_SHIFT 4
#define MEDELEG_LAF_SHIFT 5
#define MEDELEG_SAM_SHIFT 6
#define MEDELEG_SAF_SHIFT 7
#define MEDELEG_ECU_SHIFT 8
#define MEDELEG_ECS_SHIFT 9
#define MEDELEG_ECM_SHIFT 11
#define MEDELEG_IPF_SHIFT 12
#define MEDELEG_LPF_SHIFT 13
#define MEDELEG_SPF_SHIFT 15

#define MEDELEG_IAM_MASK 0x0000000000000001ull
#define MEDELEG_IAF_MASK 0x0000000000000002ull
#define MEDELEG_II_MASK  0x0000000000000004ull
#define MEDELEG_IAB_MASK 0x0000000000000008ull
#define MEDELEG_LAM_MASK 0x0000000000000010ull
#define MEDELEG_LAF_MASK 0x0000000000000020ull
#define MEDELEG_SAM_MASK 0x0000000000000040ull
#define MEDELEG_SAF_MASK 0x0000000000000080ull
#define MEDELEG_ECU_MASK 0x0000000000000100ull
#define MEDELEG_ECS_MASK 0x0000000000000200ull
#define MEDELEG_ECM_MASK 0x0000000000000800ull
#define MEDELEG_IPF_MASK 0x0000000000001000ull
#define MEDELEG_LPF_MASK 0x0000000000002000ull
#define MEDELEG_SPF_MASK 0x0000000000008000ull

#endif /* RISCV_MEDELEG_H */
