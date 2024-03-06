def main():
    valor = int(input("Escribe un valor (Entre 0 y 10): "))
    if  valor in range(0,5):
        print("Suspenso")
    elif valor in range(0,7):
        print("Aprobado")
    elif valor in range(0,9):
        print("Notable")
    else:
        print("Sobresaliente")
main()
