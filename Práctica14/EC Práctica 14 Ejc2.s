.data
    cad1:	.string "Introduce una numero: "
    cad2:	.string "El número de 1s es: "
.globl main
.text
main:
	li a7,4
    la a0,cad1
    ecall
    
    li a7,5
    ecall
    mv t0,a0
	li t1,0
    li t3,2
    li t4,1
bucle:
	beq t0, zero,fin
	rem t5,t0,t3
	beq t5,t4,espar
    fuepar:
    srli t0,t0,1
    j bucle
    
    
espar:
	addi t1,t1,1
    j fuepar

fin:
	li a7,4
    la a0,cad2
    ecall
    
    li a7,1
    mv a0,t1
    ecall
    
    li a7,10
    ecall