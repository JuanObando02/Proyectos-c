#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{   
    int i=1;
    int filas,columnas,x,y;
    int numero,error=0,repite=0;
    int matriz2 [5][5];
    int tabla1 [5][5];
    int tabla2 [5][5];
    
    while(i!=0){
        printf("\n\nQue desea realizar:\n 1. Construir dos matrices 5x5 y comprarlas.\n 2. Mostrar una matriz de numeros aleatoreos donde se consulten las filas y columnas.\n 3. Solictar un numero al usuario. crear una matriz aleatorea con numeros entre 0 y 10 mostrar en que posiciones \nel numero digitado por el usuario se encuentra dentro de la matriz.\n");
        printf(" 0. Digite si desea finalziar.\n");
        scanf("%i",&i);
    if(i==0){
     printf("Fin.\n");
    }
    if(i==1){
        printf("Matriz 1:\n");
        for (x=0;x<5;x++){
            for(y=0;y<5;y++){
                printf("Digite el numero para la fila %i y columna %i:",x+1,y+1);
                scanf("%i",&tabla1[x][y]);
            }
        }
        printf("Matriz 2:\n");
        for (x=0;x<5;x++){
            for(y=0;y<5;y++){
                printf("Digite el numero para la fila %i y columna %i: ",x+1,y+1);
                scanf("%i",&tabla2[x][y]);
            }
        }
        printf("Asi queda la tabla 1:\n");
        for (x=0;x<5;x++){
            printf("\n");
            for(y=0;y<5;y++){
                printf(" %i ",tabla1[x][y]);
            }
        }
         printf("\nAsi queda la tabla 2:\n");
        for (x=0;x<5;x++){
            printf("\n");
            for(y=0;y<5;y++){
                printf(" %i ",tabla2[x][y]);
            }
        }
        for (x=0;x<5;x++){
            for(y=0;y<5;y++){
               if(tabla1[x][y]==tabla2[x][y]){
                   printf("\nEl valor %i se repite en ambas matrices en la posicion (%i,%i).\n ",tabla1[x][y],x+1,y+1);
                   repite=1;
               }
            }
        }
    if (repite==0){
        printf("No hay valores repetidos.\n");
    }
        
        
    }
    if (i==2){ 
            printf("2. mostrar un matriz de numeros aleatoreos.\n\n\n");
            printf("Defina cuantas filas tendra el arreglo:\n");
            scanf("%i",&filas);
            printf("Defina cuantas columnas tendra el arreglo:\n");
            scanf("%i",&columnas);
            int matriz [filas][columnas];
            for (x=0;x<filas;x++){
                for(y=0;y<columnas;y++){
                    matriz[x][y]=rand()%10;
                }
            }
            for (x=0;x<filas;x++){
                printf("\n");
                for(y=0;y<columnas;y++){
                printf(" %i ",matriz[x][y]);
                }
            }
    }
    if (i==3){
        printf("3. crear matriz de 5x5 con numeros aleatoreos solucitar numero al usuario y buscar en que posicion se encuenta el numero del usuario\n\n\n");
        for (x=0;x<5;x++){
            for(y=0;y<5;y++){
                matriz2[x][y]=rand()%10;
            }
        }
        for (x=0;x<5;x++){
            printf("\n");
            for(y=0;y<5;y++){
                printf(" %i ",matriz2[x][y]);
            }
        }
        printf("\nDigite un numero entre 0 y 10:  ");
        scanf("%i",&numero);
        for (x=0;x<5;x++){
            for(y=0;y<5;y++){
                if(numero==matriz2[x][y]){
                    printf("el numero %i se encuentra en la matriz en la posicion (%i,%i)\n",numero,x+1,y+1);
                    error=1;
                } 
            }   
        }
            if (error==0){
            printf("El numero ingresado no se encuentra en la matriz.\n");
        }
    }
 
}
}

