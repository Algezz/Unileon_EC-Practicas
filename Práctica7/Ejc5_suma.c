#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Prototipos funciones:
void init(int matriz[6][6]);
int suma(int matriz[6][6]);
//Funcion Main
int main()
{
	srand(17);
	int matriz[6][6];
	init(matriz);
	int i,j;
	for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			printf("%d ",matriz[i][j]);
		}
		printf("\n");
	}
	int tot=suma(matriz);
	printf("La suma total de la matriz es: %d\n",tot);
return 0;
}

//Definición de funciones
void init(int matriz[6][6]){
	int i,j;
	for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			matriz[i][j]=rand()%11;
		}
	}
}
int suma(int matriz[6][6]){
	int i,j,total=0;
	for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			total=total+matriz[i][j];
		}
	}
	return total;
}
