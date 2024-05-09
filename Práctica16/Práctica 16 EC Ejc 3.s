.data
datos:
.byte 14, 23
.align 2
.word 47
.align 1
.half 9, 12, 15
#.align 2
.zero 4

.text
.globl main
main:
	la t0, datos
    lw t1, 4(t0)
    lh t2, 12(t0)
    add t3, t1, t2
    sw t3, 16(t0)
    lw a0, 16(t0)
    li a7, 1
    ecall
    
    lb t1, 1(t0)
    lh t2, 10(t0)
    add t3, t1, t2
    sh t3, 12(t0)
    lh a0, 12(t0)
    ecall
li a7, 10
ecall
