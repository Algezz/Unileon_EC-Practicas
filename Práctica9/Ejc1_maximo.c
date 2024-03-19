#include <stdio.h>
#include <stdlib.h>

//Prototipos funciones:
int calculaMaximo(int *p,int n);

//Funcion Main
int main()
{
	int *nums;
    int n,i;
    printf("Cuantos enteros: ");
    scanf("%d",&n);
    nums=(int *)malloc(sizeof(int)*n);
    for(i=0;i<n;i++){
        int e;
        printf("Entero número %d: ",(i+1));
        scanf("%d",&e);
        *(nums+i)=e;
    }
    int max = calculaMaximo(nums,n);
    printf("EL valor máximo que has introducido es %d\nLos valores que has introducido son:\n",max);
    for(i=0;i<n;i++){
        printf("%d ",*(nums+i));
    }
    printf("\n");
    free(nums);
return 0;
}

//Definición de funciones

int calculaMaximo(int *p,int n){
    int max= -2147483647,i=0;
    for(i=0;i<n;i++){
        if(*(p+i)>max){
            max = *(p+i);
        }
    }
    return max;
}