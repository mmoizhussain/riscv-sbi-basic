#ifndef RISCV_MCOUNTINHIBIT_H
#define RISCV_MCOUNTINHIBIT_H

#define MCOUNTINHIBIT_CY_SHIFT    0
#define MCOUNTINHIBIT_0_SHIFT     1
#define MCOUNTINHIBIT_IR_SHIFT    2
#define MCOUNTINHIBIT_HPM3_SHIFT  3
#define MCOUNTINHIBIT_HPM4_SHIFT  4
#define MCOUNTINHIBIT_HPM5_SHIFT  5
#define MCOUNTINHIBIT_HPM29_SHIFT 29
#define MCOUNTINHIBIT_HPM30_SHIFT 30
#define MCOUNTINHIBIT_HPM31_SHIFT 31

#define MCOUNTINHIBIT_CY_MASK    0X0000000000000001ull
#define MCOUNTINHIBIT_0_MASK     0X0000000000000002ull
#define MCOUNTINHIBIT_IR_MASK    0X0000000000000004ull
#define MCOUNTINHIBIT_HPM3_MASK  0X0000000000000008ull
#define MCOUNTINHIBIT_HPM4_MASK  0X0000000000000010ull
#define MCOUNTINHIBIT_HPM5_MASK  0X0000000000000020ull
#define MCOUNTINHIBIT_HPM29_MASK 0X2000000000000001ull
#define MCOUNTINHIBIT_HPM30_MASK 0X4000000000000001ull
#define MCOUNTINHIBIT_HPM31_MASK 0X8000000000000001ull

#endif /* RISCV_MCOUNTINHIBIT_H */