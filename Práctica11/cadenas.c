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
    int i,j,count1=0,count2=0,count3=0;

    // Contamos la longitud de la cadena introducida por teclado y la mostramos por pantalla
    for(i=0;cadena[i]!='\0';i++){
        count1++;
    }
    cadena[count1-1]='\0';
    count1--;
    printf("La longitud de la cadena indroducida por teclado es %d\n",count1);

    // Contamos la longitud de la cadena introducida por parámetro y la mostramos por pantalla
    for(i=0;argv[1][i]!='\0';i++){
        count2++;
    }
    printf("La longitud de la cadena indroducida por parámetro es %d\n",count2);

    // Concatenamos las cadenas y las mostramos por pantalla
    for(i=0;cadena[i]!='\0';i++){
        cadenaConcatenada[i]=cadena[i];
    }
    for(i=0;argv[1][i]!='\0';i++){
        cadenaConcatenada[count1+i]=argv[1][i];
    }
    printf("La cadena concatenada es:\n%s\n",cadenaConcatenada);


    // Buscamos si la cadena introducida por pantalla contiene el parámetro
    int dif=count1-count2,x=0,contiene=1,z=0;
    if(dif==0){
        for(i=0;cadena[i]!='\0';i++){
            if(cadena[i]!=argv[1][i])   contiene=0;
        }
    }else if (dif>0){
        contiene=0;
        for(i=0;i<=dif;i++){
            if(cadena[i]==argv[1][0]){
                z=0;
                for(j=i;j<count2;j++){
                    if(cadena[j]!=argv[1][z]){
                        x++;
                    }
                    z++;
                }
                if(x==0)contiene=1;
                x=0;
                if(contiene==1)i=dif;
            }
        }
    }else{
        contiene=0;
    }
    
    // Enviamos un mensaje diciendo si contiene la cadena o no
    if(contiene==1){
        printf("La cadena %s SI contiene %s\n",cadena,argv[1]);
    }else{
        printf("La cadena %s NO contiene %s\n",cadena,argv[1]);
    }

    // Buscamos la letra que ocupa la posicion especificada por parámetro

    printf("La letra en la posición %d es %c\n",atoi(argv[2]),cadena[atoi(argv[2])-1]);
    return 0;
}