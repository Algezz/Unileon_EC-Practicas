#include <stdio.h>

//Prototipos funciones:
int suma_n_primeros(int num);

//Funcion Main
int main()
{
	int num,c = 0;
	do{
		if(c!=0){
			printf("Error, el número tiene que ser positivo\n");
		}
		printf("Escribe un número (Positivo): ");
		scanf("%d",&num);
		c++;
	}while (num<=0);
	printf("La suma de los %d primeros numeros enteros es %d\n",num,suma_n_primeros(num));
return 0;
}

//Definición de funciones
int suma_n_primeros(int num){
	int suma = 0,i;
	for(i=0;i<num;i++){
		suma = suma + i;
	}
	return suma;
}
