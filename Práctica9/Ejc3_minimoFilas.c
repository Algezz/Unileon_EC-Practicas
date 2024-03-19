#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Prototipos funciones:
void inicializaMatriz(int *p,int n,int m);
void minimoFilas(int *p,int *v,int n,int m);
//Funcion Main
int main()
{
	srand(time(NULL));
	int n,m,i,j;
    printf("Número de filas: ");
    scanf("%d",&n);
    printf("Número de columnas: ");
    scanf("%d",&m);
    int *p,*v;
    p=(int *)malloc(sizeof(int)*n*m);
    v=(int *)malloc(sizeof(int)*n);
    inicializaMatriz(p,n,m);
    minimoFilas(p,v,n,m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
                printf("%d ",*(p+i*m+j));
        }
        printf("\n");
    }
    for(i=0;i<n;i++){
        printf("EL mínimo valor de la fila %d es %d\n",(i+1),*(v+i));
    }
    free(p);free(v);
return 0;
}

//Definición de funciones
void inicializaMatriz(int *p,int n,int m){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            *(p+i*m+j)=rand()%21-10;
        }
    }
}
void minimoFilas(int *p,int *v,int n,int m){
    int i,j;
    for(i=0;i<n;i++){
        int min= 2147483647;
        for(j=0;j<m;j++){
            if(*(p+i*m+j)<min){
                min=*(p+i*m+j);
                *(v+i)=*(p+i*m+j);
            }
        }
    }
}