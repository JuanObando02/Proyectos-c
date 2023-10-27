#include <stdio.h>
#include <string.h>

typedef char equipos[20];

int main()
{
    int tabla[4][8];
    
    int i,j,x,error=1,eq[4],suma=0,mayor=0,menor=100;
    
    equipos nombres[]={ //se predeterminan los equipos.
        "Chelsea",//[0]
        "Arsenal",//[1]
        "Tottenham Hotspur",//[2]
        "West Ham United",//[3]
    };
    
        for(j=0;j<4;j++){ // se piden los datos a ingresar para cada equipo. 
            error=1;
            printf("\n");
            while(error!=0){
                for (i=0;i<6;i++){
                    switch (i){
                    case 0:
                        printf("Digite los partidos jugados del %s\n",nombres[j]);
                        scanf("%i",&tabla[j][i]);
                    break;
                    case 1:
                        printf("Digite los partidos ganados del %s\n",nombres[j]);
                        scanf("%i",&tabla[j][i]);
                    break;
                    case 2:
                        printf("Digite los partidos Empatados del %s\n",nombres[j]);
                        scanf("%i",&tabla[j][i]);
                    break;
                    case 3:
                        printf("Digite los partidos perdidos del %s\n",nombres[j]);
                        scanf("%i",&tabla[j][i]);
                    break;
                    case 4:
                        printf("Digite los Goles a Favor del %s\n",nombres[j]);
                        scanf("%i",&tabla[j][i]);
                    break;
                    case 5:
                        printf("Digite los Goles en contra del %s\n",nombres[j]);
                        scanf("%i",&tabla[j][i]);
                    break;
                    }
                }
                suma=tabla[j][1]+tabla[j][2]+tabla[j][3];
                if(tabla[j][0]!=suma){//se verifica el valor de ingresado de los PG , PE , PP.
                    error=1;
                    printf("\nMarcaste %i partidos jugados. Pero la suma de los PG, PE ,PP es: %i\n",tabla[j][0],suma);
                    printf("Vuelve a Digitar los valores para el equipo %s.\n\n",nombres[j]);
                } else {
                error=0;
                        }
            }
        }
        
    for(i=0;i<4;i++){ // se calculan los puntos de los equipos.
        tabla[i][6]=(tabla[i][1]*3)+tabla[i][2];
    }
    for(i=0;i<4;i++){ // se calculan la diferencia de goles.
        tabla[i][7]=tabla[i][4]-tabla[i][5];
    }
    
    printf ("                  PJ PG PE PP GF GC PT GD\n"); //se imprime la tabla de posiciones con los datos.
        printf("%s          ",nombres[0]);
        for(j=0;j<8;j++){
            printf(" %i ",tabla[0][j]);
        }
        printf("\n%s          ",nombres[1]);
        for(j=0;j<8;j++){
            printf(" %i ",tabla[1][j]);
        }
        printf("\n%s",nombres[2]);
        for(j=0;j<8;j++){
            printf(" %i ",tabla[2][j]);
        }
        printf("\n%s  ",nombres[3]);
        for(j=0;j<8;j++){
            printf(" %i ",tabla[3][j]);
        }
    x=0;
    for(j=0;j<4;j++){ //se saca el mayor de ambos equipos.
        if(mayor<tabla[j][6]){
            mayor=tabla[j][6];
            x=j;
        }
    }
    error=0;
    for(j=0;j<4;j++){
        if(mayor==tabla[j][6]){
            if(x!=j){
                printf("\n\nHay dos equipos con el mismo puntaje.");
                printf("\n%s y el %s",nombres[x],nombres[j]);
                if(tabla[x][7]>tabla[j][7]){
                    printf("\nEl equipo %s es el ganador con: %i puntos y %i goles a favor.\n",nombres[x],tabla[x][6],tabla[x][7]);
                    error=0;
                    j=4;
                } else {
                    printf("\n\nEl equipo %s es el ganador con: %i puntos y %i goles a favor.\n",nombres[j],tabla[j][6],tabla[j][7]);
                    error=0;
                    j=4;
                }
            } else {
                error=1;
            } 
        }
    }
    if (error==1){
        printf("\n\nEl equipo %s es el ganador con %i puntos.",nombres[x],tabla[x][6]);    
    }
    
    x=0;
    for(j=0;j<4;j++){
        if(menor>tabla[j][6]){
            menor=tabla[j][6];
            x=j;
        }
    }
    error=0;
    for(j=0;j<4;j++){
        if(menor==tabla[j][6]){
            if(x!=j){
                printf("\n\nHay dos equipos con el mismo menor puntaje.");
                printf("\n%s y el %s",nombres[x],nombres[j]);
                if(tabla[x][7]<tabla[j][7]){
                    printf("\n\nEl equipo %s es el perdedor con: %i puntos y %i goles a favor.\n",nombres[x],tabla[x][6],tabla[x][7]);
                    error=0;
                    j=4;
                } else {
                    printf("\n\nEl equipo %s es el perdedor con: %i puntos y %i goles a favor.\n",nombres[j],tabla[j][6],tabla[j][7]);
                    error=0;
                    j=4;
                }
            } else {
                error=1;
            } 
        }
    }
    if (error==1){
        printf("\n\nEl equipo %s es el perdedor con %i puntos.",nombres[x],tabla[x][6]);    
    }
}


