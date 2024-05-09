.data
cad1:	.string	"Introduce un número: "
space1: .zero 20
space2: .zero 20
.text
.globl main
main:
	li t0, 0
    la t2, space1
    li t3, 10
    empieza:
    li a7, 4
    la a0, cad1
    ecall
    
    li a7, 5
    ecall
    
    mv t1, a0
    sh t1, 0(t2)
    addi t2, t2, 2
    addi t0, t0, 1

    bne t0, t3, empieza

    la t3, space2
    desapilar:
    addi t2, t2, -2
    lh t4, 0(t2)
    sh t4, 0(t3)
    addi t3, t3, 2
    addi t0, t0, -1
    bne t0, zero, desapilar
    
	li t0, 0
    li t3, 10
    la t1, space2
    li a7, 1
    muestra:
    lh a0, 0(t1)
    ecall
   	addi t0, t0, 1
    addi t1, t1, 2
  	bne t0, t3, muestra
li a7, 10
ecall
