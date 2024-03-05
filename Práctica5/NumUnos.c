#include <stdio.h>

//Prototipos funciones:
int calcula_unos(int n);

//Funcion Main
int main()
{
	int num,c=0;
	do{
		if(c!=0){
			printf("Error, el número no es positivo\n");
		}
		c++;
		printf("Escribe un número: ");
		scanf("%d",&num);
	}while(num<=0);
	printf("El número %d tiene %d unos en binario\n",num,calcula_unos(num));
return 0;
}

//Definición de funciones
int calcula_unos(int n){
	int counter = 0, num;
	while(n!=0){
		num = n & 1;
		if(num==1){
			counter ++;
		}
		n = n >> 1;
	}
	return counter;
}
