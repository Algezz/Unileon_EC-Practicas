#include <stdio.h>
#include <stdlib.h>
void invierte(char *cadenaOrigen,char *cadenaDestino);

int main(){
    char *cadena1;
    char *cadena2;
    cadena1=(char *)malloc(sizeof(char)*100);
    cadena2=(char *)malloc(sizeof(char)*100);
    fgets(cadena1,100,stdin);
    invierte(cadena1, cadena2);
    printf("%s\n",cadena2);
    return 0;
}

void invierte(char *cadenaOrigen,char *cadenaDestino){
    int i,j,count=0;
    for (i=0;cadenaOrigen[i]!='\0';i++){
        count++;
    }
    i--;
    for (j=0;cadenaOrigen[j]!='\0';j++){
        cadenaDestino[j]=cadenaOrigen[i];
        i--;
    }
    cadenaDestino[count]='\0';
}