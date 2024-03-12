#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Prototipos funciones:
void init(int matriz[5][5]);

//Funcion Main
int main()
{
	srand(time(NULL));
	int matriz[5][5];
	init(matriz);
	int i,j;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%d ",matriz[i][j]);
		}
		printf("\n");
	}
return 0;
}

//Definición de funciones
void init(int matriz[5][5]){
	int i,j;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			matriz[i][j]=(rand()%13) + 3;
		}
	}
}
