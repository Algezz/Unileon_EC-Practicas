.data
  cad1: .string "Introduce una cadena: "
  cad2: .zero 100
  cad3:	.zero 100
  cad4:	.string	"La cadena copiada es: "
  cad5:	.string	"El número de a: "
.text
.globl main

	main:
    	#Imprimimos cadena
    	li a7,4
        la a0, cad1
        ecall
        
        #Leemos cadena de máximo 100 carácteres
        li a7, 8
        la a0, cad2
        li a1, 100
        ecall
        
        #Cargamos en a1 la dirección de la cadena destino
        la a1, cad3
        
        #Llamamos a la función copia
        jal x1, copia
        
        #Cargamos an a0 la direccion de la cadena leida
        la a0, cad2
        
        #Cargamos el valor ASCII de la letra a en el registro a1 y 0 en a2
        li a1, 'a'
        li a2, 0
        
        #Llamamos a la funcion cuentaa
        jal x1, cuentaa
        
        #Movemos el contador de a de a2 a t0
        mv t0, a2
        
        #Imprimimos cadena enunciado
    	li a7,4
        la a0, cad4
        ecall
        
        #Imprimimos cadena copiada
    	li a7,4
        la a0, cad3
        ecall
        
        #Imprimimos cadena enunciado
    	li a7,4
        la a0, cad5
        ecall
        
        #Imprimimos contador solución
        li a7,1
        mv a0, t0
        ecall
        
        #Salimos del programa
        li a7,10
        ecall
        
copia:
  lb t1, 0(a0)
  beq t1, x0, fin
  sb t1, 0(a1)
  addi a0, a0, 1
  addi a1, a1, 1
  j copia
fin:
  jalr x0, 0(x1)
                
cuentaa:
	lb t1, 0(a0)
    beq t1, x0, fina
	beq t1, a1, isa
wasa:
    addi a0, a0, 1
    j cuentaa
    
isa:
	addi a2,a2,1
	j wasa

fina:
  jalr x0, 0(x1)