#include <stdio.h>

//Prototipos funciones:
void init(int matriz[9][9]);

//Funcion Main
int main()
{
	int matriz[9][9];
	init(matriz);
	int i,j;
	for(i=0;i<9;i++){
		for(j=0;j<9;j++){
			printf("%d ",matriz[i][j]);
		}
		printf("\n");
	}
return 0;
}

//Definición de funciones
void init(int matriz[9][9]){
	int i,j;
	for(i=0;i<9;i++){
		for(j=0;j<9;j++){
			if(i==j){
				matriz[i][j]= 1;
			}else{
				matriz[i][j]= 0;
			}
		}
	}
}
