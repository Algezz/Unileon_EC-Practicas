#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[]){

    // Creación de variables
    char *cadena;
    char *cadenaConcatenada;

    // Asignación de memoria
    cadena=(char *)malloc(sizeof(char)*100);
    cadenaConcatenada=(char *)malloc(sizeof(char)*200);

    //Recogemos datos
    fgets(cadena,100,stdin);
    int i,j,x=0,contiene=0,count1=0,count2=0,count3=0;

    // Contamos la longitud de la cadena y la mostramos por pantalla
    for(i=0;cadena[i]!='\0';i++){
        count1++;
    }
    printf("La longitud de la cadena indroducida por teclado es %d\n",count1);

    for(i=0;argv[1][i]!='\0';i++){
        count2++;
    }
    printf("La longitud de la cadena indroducida por parámetro es %d\n",count2);

    // Concatenamos las cadenas y las mostramos por pantalla
    for(i=0;cadena[i]!='\0';i++){
        cadenaConcatenada[i]=cadena[i];
        count3++;
    }
    count3--;
    for(i=0;argv[1][i]!='\0';i++){
        cadenaConcatenada[count3+i]=argv[1][i];
    }
    printf("La cadena concatenada es:\n%s\n",cadenaConcatenada);


    // Buscamos si la cadena introducida por pantalla contiene el parámetro
    if(count1>count3){
        for(i=0;cadena[i]!='\0';i++){
            if(cadena[i]==argv[1][0]){
                for(j=1;argv[1][j]!='\0'||x!=0 || count1-1<j;j++){
                    if(argv[1][j]!=cadena[i+j]){
                        x++;
                    }
                }
                if(x=0){
                    contiene=1;
                }
                x=0;
            }
        }
    }
    

    if(contiene==1){
        printf("La cadena %s SI contiene %s",cadena,argv[1]);
    }else{
        printf("La cadena %s NO contiene %s",cadena,argv[1]);
    }

    return 0;
}