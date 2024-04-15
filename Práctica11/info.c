#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_CHAR 100
#define MAX_LINEAS 5

void leeAMatriz(char m[MAX_LINEAS][MAX_CHAR]);
void leePorLetra(char letra, char m[MAX_LINEAS][MAX_CHAR]);
void imprimeMatriz(char m[MAX_LINEAS][MAX_CHAR]);

int main(int argc, char*argv[]){
    char m[MAX_LINEAS][MAX_CHAR];
    int i,j; 
    leeAMatriz(m);
    char letra;
    scanf("%c",&letra);
    leePorLetra(letra,m);
    printf("La matriz completa es:\n");
    imprimeMatriz(m);
    return 0;
}

void leeAMatriz(char m[MAX_LINEAS][MAX_CHAR]){
    FILE *prueba;
    prueba=fopen("prueba.txt","r");
    if(prueba==NULL){
        fprintf(stderr,"Ha habido un error al abrir el archivo\n");
        exit(EXIT_FAILURE);
    }
    char *linea=NULL;
    linea=(char *)malloc(sizeof(char)*MAX_CHAR);
    size_t tam=0;
    __ssize_t bytesleidos;
    int i=0;
    do{
        bytesleidos=getline(&linea,&tam,prueba);
        if(bytesleidos!=-1){
            strncpy(m[i],linea,bytesleidos-1);

            m[i][bytesleidos-1]='\0';
            i++;
        }
    }
    while(bytesleidos!=-1);
    free(linea);
    fclose(prueba);
    
}
void leePorLetra(char letra, char m[MAX_LINEAS][MAX_CHAR]){
    int i;
    for(i=0;i<MAX_LINEAS;i++){
        if(m[i][0]==letra){
            printf("%s\n",m[i]);
        }
    }
}

void imprimeMatriz(char m[MAX_LINEAS][MAX_CHAR]){
    int i;
    for(i=0;i<MAX_LINEAS;i++){
        printf("%s\n",m[i]);
    }
}