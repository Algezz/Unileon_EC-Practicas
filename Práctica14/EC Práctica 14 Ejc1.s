.data
	cad1:	.zero	100
    cad2:	.string "Introduce una cadena: "
    cad3:	.string "La suma de los valores ASCII es: "
    cad4:	.string "Número de 'a': "
.globl main
.text
main:
	li a7,4
    la a0,cad2
    ecall
    
    li a7,8
    la a0,cad1
    li a1,100
    ecall
    
    la t2, cad1
    
    li t0,0
    li t1,0
    li t4,'a'
    
bucle:
	lb t3,0(t2)
    beq t3, zero, fin
    beq t3,t4,isa
    wasa:
    add t1,t1,t3
    addi t2,t2,1
    j bucle

isa:
	addi t0,t0,1
	j wasa

fin:
	li a7,4
    la a0,cad3
    ecall
    
    li a7,1
    mv a0,t1
    ecall
    
    li a7,4
    la a0,cad4
    ecall
    
    li a7,1
    mv a0,t0
    ecall
    
    li a7,10
    ecall