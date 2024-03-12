#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//Prototipos funciones:
void init(int vector[10]);
int suma(int vector[10]);

//Funcion Main
int main()
{
	srand(15);
	int vector[10];
	init(vector);
	int n = suma(vector);
	printf("La suma total es %d\n",n);
return 0;
}

//Definición de funciones
void init(int vector[10]){
	int i;
	for(i=0;i<10;i++){
		vector[i]=rand()%11;
	}
}
int suma(int vector[10]){
	int i,total=0;
	for(i=0;i<10;i++){
		total=total+vector[i];
		printf("%d.- %d\n",i,vector[i]);
	}
	return total;
}
