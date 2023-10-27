#include <stdio.h>
int main()
{
    int x=0, y=0, error=1,suma=0,mayor=0,menor=1000;
    
    int matriz1[4][8];
    
    printf("digitar en el siguiente orden de equipos \n1. chelsea\n2. arsenal\n3. tottenham\n4. west ham\n");
    printf("digite los siguientes datos en el orden predeterminado \n1.numero de partidos jugados \n2.numero de partidos ganados \n3.numero de partidos empatados\n4.numero de partidos perdidos \n5.numero de goles a favor \n6.numero de goles contra\n");
    
    for (x=0;x<4;x++){
        error=1;
        printf("\ndigie los valores del equipo %i\n",x+1);
        while(error!=0){
        for(y=0;y<6;y++){
            switch(y){
                case 0:
                    printf("Digite los partidos jugados del equipo %i\n",x+1);
                    scanf("%i",&matriz1[x][y]);
                break;
                case 1:
                    printf("Digite los partidos ganados del equipo %i\n",x+1);
                    scanf("%i",&matriz1[x][y]);
                break;
                case 2:
                    printf("Digite los partidos Empatados del equipo %i\n",x+1);
                    scanf("%i",&matriz1[x][y]);
                break;
                case 3:
                    printf("Digite los partidos perdidos del equipo %i\n",x+1);
                    scanf("%i",&matriz1[x][y]);
                break;
                case 4:
                    printf("Digite los Goles a Favor del equipo %i\n",x+1);
                    scanf("%i",&matriz1[x][y]);
                break;
                case 5:
                    printf("Digite los Goles en contra del equipo %i\n",x+1);
                    scanf("%i",&matriz1[x][y]);
                break;
            }
        }
        suma=matriz1[x][1]+matriz1[x][2]+matriz1[x][3];
        if(matriz1[x][0]!=suma){
            error=1;
            printf("\ndigite nuevamente los valores para el equipo %i\n",x+1);
            printf("digito %i partidos jugados y la suma de los ganados, perdidos y empatados es de %i.\n",matriz1[x][0],suma);
            }
            else{
                error=0;
                }
           } 
    }
    for (x=0;x<4;x++){
        matriz1[x][6]=(matriz1[x][1]*3)+matriz1[x][2];
    }
    for (x=0;x<4;x++){
        matriz1[x][7]=matriz1[x][4]-matriz1[x][5];
    }
    printf("           Pj Pg Pe Pp Gf Gc Pt Dg\nchelsea    ");
     for (y=0;y<8;y++){
         printf(" %i ",matriz1[0][y]);
     }
     printf("\narsenal    ");
     for (y=0;y<8;y++){
         printf(" %i ",matriz1[1][y]);
     }
     printf("\ntottenham  ");
     for (y=0;y<8;y++){
         printf(" %i ",matriz1[2][y]);
     }
     printf("\nwest ham   ");
    for (y=0;y<8;y++){
        printf(" %i ",matriz1[3][y]);
    }
    x=0;
    for(y=0;y<4;y++){ //se saca el mayor de ambos equipos.
        if(mayor<matriz1[y][6]){
            mayor=matriz1[y][6];
            x=y;
        }
    }
    error=0;
    printf("\n\nel mayor puntaje es:%i ",mayor);
    for(y=0;y<4;y++){
        if(mayor==matriz1[y][6]){
            if(x!=y){
                printf("\n\nHay dos equipos con el mismo puntaje.");
                printf("\n%i y el %i",x+1,y+1);
                if(matriz1[x][7]>matriz1[y][7]){
                    printf("\nEl equipo %i es el ganador con: %i puntos y %i goles a favor.\n",x+1,matriz1[x][6],matriz1[x][7]);
                    error=0;
                    y=4;
                } else {  
                    printf("\n\nEl equipo %i es el ganador con: %i puntos y %i goles a favor.\n",y+1,matriz1[y][6],matriz1[y][7]);
                    error=0;
                    y=4;
                    
                } 
            } else {
                error=1;
            } 
        }
    }
    if (error==1){
        printf("\n\nEl equipo %i es el ganador con %i puntos.",x+1,matriz1[x][6]);
    }
    x=0;
    for(y=0;y<4;y++){
        if(menor>matriz1[y][6]){
            menor=matriz1[y][6];
            x=y;
        }
    }
    error=0;
    for(y=0;y<4;y++){
        if(menor==matriz1[y][6]){
            if(x!=y){
                printf("\n\nHay dos equipos con el mismo menor puntaje.");
                printf("\n%i y el %i",x+1,y+1);
                if(matriz1[x][7]<matriz1[y][7]){
                    printf("\n\nEl equipo %i es el perdedor con: %i puntos y %i goles a favor.\n",x+1,matriz1[x][6],matriz1[x][7]);
                    error=0;
                    y=4;
                } else {
                    printf("\n\nEl equipo %i es el perdedor con: %i puntos y %i goles a favor.\n",y+1,matriz1[y][6],matriz1[y][7]);
                    error=0;
                    y=4;
                }
            } else {
                error=1;
            } 
        }
    }
    if (error==1){
        printf("\n\nEl equipo %i es el perdedor con %i puntos.",x+1,matriz1[x][6]);    
    }
    
    

}
