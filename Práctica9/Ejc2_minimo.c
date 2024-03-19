#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Prototipos funciones:
void inicializaMatriz(int *p,int n,int m);
int calculaMinimo(int *p,int n,int m);
//Funcion Main
int main()
{
    srand(time(NULL));
	int n,m,i,j;
    printf("Número de filas: ");
    scanf("%d",&n);
    printf("Número de columnas: ");
    scanf("%d",&m);
    int *p;
    p=(int *)malloc(sizeof(int)*n*m);
    inicializaMatriz(p,n,m);
    int min = calculaMinimo(p,n,m);
    printf("EL mínimo valor de la matriz es %d\nLa matriz es la siguiente:\n",min);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
                printf("%d ",*(p+i*m+j));
        }
        printf("\n");
    }
    free(p);
return 0;
}

//Definición de funciones
void inicializaMatriz(int *p,int n,int m){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            *(p+i*m+j)=rand()%11;
        }
    }
}

int calculaMinimo(int *p,int n,int m){
    int min= 2147483647,i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(*(p+i*m+j)<min){
                min=*(p+i*m+j);
            }
        }
    }
    return min;
}