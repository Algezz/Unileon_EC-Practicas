.data
  cad1: .string "Introduce un número: "
  cad2: .string "El número de 0 es: "
.text
.globl main

	main:
    	#Imprimimos cadena
    	li a7,4
        la a0, cad1
        ecall
        
        #Leemos el entero
        li a7, 5
        ecall
      
		li a2, 0
       li a1, 2
       jal x1, cuenta0
       
       #Imprimimos cadena
    	li a7,4
        la a0, cad2
        ecall
       
       li a7, 1
       mv a0, a2
       ecall
       
       li a7, 10
       ecall
       
cuenta0:
	beq a0, x0, fin
    rem t0, a0, a1
    beq t0, x0, espar
    fuepar:
    srli a0, a0, 1
    j cuenta0
    
    
	espar:
    addi a2, a2, 1
    j fuepar
fin:
	jalr x0, 0(x1)