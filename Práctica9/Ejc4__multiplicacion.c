#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Prototipos funciones:
void inicializaMatriz(int *p,int n);
void multiplica(int *a,int *b,int *c, int n);
void imprimeMatriz(int *p,int n);
//Funcion Main
int main()
{
	int n,i,j;
    int *a,*b,*c;
    printf("Dimension de la matriz: ");
    scanf("%d",&n);
    a=(int *)malloc(sizeof(int)*n*n);
    b=(int *)malloc(sizeof(int)*n*n);
    c=(int *)malloc(sizeof(int)*n*n);
    inicializaMatriz(a,n);
    inicializaMatriz(b,n);
    multiplica(a,b,c,n);
    printf("Matriz A:\n");
    imprimeMatriz(a,n);
    printf("Matriz B:\n");
    imprimeMatriz(b,n);
    printf("Matriz C=AxB:\n");
    imprimeMatriz(c,n);
    free(a);free(b);free(c);
return 0;
}

//Definición de funciones
void inicializaMatriz(int *p,int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            *(p+i*n+j)=rand()%11;
        }
    }
}
void multiplica(int *a,int *b,int *c,int n){
    int i,j,z,r;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            r=0;
            for(z=0;z<n;z++){
                    r=r+*(a+i*n+z)**(b+z*n+j);
            }
            *(c+i*n+j)=r;
        }
    }
}
void imprimeMatriz(int *p,int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",*(p+i*n+j));
        }
        printf("\n");
    }
}