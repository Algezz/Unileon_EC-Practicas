def main():
    op=menu()
    if op==1:
        radio=int(input("Introduce el radio: "))
        altura=int(input("Introduce la altura: "))
        print("El volumen del cono es "+str(volumen_cono(radio,altura)))
    elif op==2:
        lado1=int(input("Lado 1: "))
        lado2=int(input("Lado 2: "))
        lado3=int(input("Lado 3: "))
        print("El volumen del ortoedro es "+str(volumen_ortoedro(lado1,lado2,lado3)))
    else:
        print("Saliendo...\n")
def menu():
    c=0;n=0
    while(n!=1 and n!=2 and n!=3):
        if(c!=0):
            print("Error, el número debe ser una de las opciones")
        c+=1
        n=int(input("1.- Volumen cono\n2.- Volumen ortoedro\n3.- Salir\n"))
    return n
def volumen_cono(r,a):
    return (3.14*r*r*a/3)
def volumen_ortoedro(l1,l2,l3):
    return (l1*l2*l3)
main()