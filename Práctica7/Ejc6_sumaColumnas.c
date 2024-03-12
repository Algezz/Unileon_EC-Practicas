#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Prototipos funciones:
void init(int m[3][6]);
int sumaColumnas(int m[3][6],int v[6]);
//Funcion Main
int main()
{
	srand(time(NULL));
    int matriz[3][6];
    init(matriz);
    int vs[6];
    sumaColumnas(matriz,vs);
    int i,j;
    printf("Matriz: \n");
    for(i=0;i<3;i++){
        for(j=0;j<6;j++){
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
    printf("Vector suma: \n");
    for(i=0;i<6;i++){
        printf("%d ",vs[i]);
    }
    printf("\n");
return 0;
}

//Definición de funciones
void init(int m[3][6]){
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<6;j++){
            m[i][j]=rand()%11;
        }
    }
}

int sumaColumnas(int m[3][6],int v[6]){
    int i,j,suma;
    for(i=0;i<6;i++){
        suma=0;
        for(j=0;j<3;j++){
            suma=suma+m[j][i];
        }
        v[i]=suma;
    }
}