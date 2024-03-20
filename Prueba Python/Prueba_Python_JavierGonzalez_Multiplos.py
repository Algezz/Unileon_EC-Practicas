def mult(a,b):
    i=a
    for i in range(a,b+1):
        if (i%3==0):
            print(str(i))
c=0
while c==0:
    a=int(input("Escribe a: "))
    b=int(input("Escribe b: "))
    if(a>b):
          print("Error, a debe ser menor o igual que b\n")
    else:
        c=1
mult(a,b)