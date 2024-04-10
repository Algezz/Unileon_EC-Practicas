#include <stdio.h>
#include <string.h>

int main(){
    int num=100;
    char *cadena;
    cadena = (char *)malloc(sizeof(char)*num);
    //while(getchar()!='\n' & getchar()!=EOF);
    fgets(cadena, num, stdin);
    printf("%s",cadena);
    int len=strlen(cadena)-1;
    *(cadena+len)='\0';
    printf("Longitud: %d carácteres\n", len);
    if(strcmp(cadena,"compara")==0){
        printf("Es igual a la cadena 'compara'\n");
    }else{
        printf("No es igual a la cadena 'compara'\n");
    }
    strcat(cadena,"añadida");
    printf("%s\n",cadena);
    printf("La letra que ocupa la posición 4 es: %c\n",*(cadena+3));
    return 0;
}