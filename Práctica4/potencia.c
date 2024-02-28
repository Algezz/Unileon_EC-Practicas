#include <stdio.h>

//Prototipos funciones:
int potencia(int base,int exponente);

//Funcion Main
int main()
{
	int base,c = 0;
	do{
		if(c!=0){
			printf("Error, el número tiene que ser positivo\n");
		}
		printf("Escribe un número (Base): ");
		scanf("%d",&base);
		c++;
	}while (base<=0);
	int exponente;
	c = 0;
	do{
		if(c!=0){
			printf("Error, el número tiene que ser positivo\n");
		}
		printf("Escribe un número (Base): ");
		scanf("%d",&exponente);
		c++;
	}while (exponente<=0);
	printf("El resultado es %d\n",potencia(base,exponente));
return 0;
}

//Definición de funciones
int potencia(int base,int exponente){
	int potencia = 1,i;
	do{
		potencia = potencia * base;
		exponente--;
	}while(exponente>=1);
	return potencia;
}
