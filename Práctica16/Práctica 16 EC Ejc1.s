.data
cad1:	.string	"Introduzca un número: "
cad2:	.string	"Error, el número debe ser positivo "
cad3:	.string	"El número de divisores es par "
cad4:	.string	"El número de divisores es impar "
.text
.globl main
main:
	li a7, 4
    la a0, cad1
    ecall
    
    li a7, 5
    ecall
    mv t0, a0
    
    bgt t0, zero, positivo
    
    li a7, 4
    la a0, cad2
    ecall
    
    j main
    positivo:
    mv a0, t0
    jal ra, paridad
    
    beq a0, zero, par
    li a7, 4
    la a0, cad4
    ecall
    j fin
    par:
    li a7, 4
    la a0, cad3
    ecall
fin:
li a7, 10
ecall

paridad:
	addi sp, sp, -4
	sw ra, 0(sp)
    jal ra, divisores
    li t0, 2
    rem a0, a0, t0
    lw ra, 0(sp)
    addi sp, sp, 4
    ret
    
divisores:
	li t0, 1
    li t1, 0
    addi t3, a0, 1
    bucle:
    rem t2, a0, t0
    beq t2, zero, igual
    fueigual:
    addi t0, t0, 1
    bne t0, t3, bucle
    
    mv a0, t1
    ret
    
igual:
	addi t1, t1, 1
    j fueigual