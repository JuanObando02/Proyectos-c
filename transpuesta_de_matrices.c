
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int filas=3;
int col=3;
void llenarMatriz(float m[filas][col]);
void sumarfilasycolumnas(float n[filas][col],int x, int y);
void transformar(float a[filas][col]);
void sumar(float a[filas][col],float b[filas][col]);
void llenarmanual(float m[filas][col]);

int main()
{
    int x=1,y=1,filacolumna,numero;
    float matrizA[filas][col];
    float matrizB[filas][col];
    float matrizC[filas][col];
    float matrizD[filas][col];

    while(x!=0){
        printf("Bienvenido\n");
        printf("Que desea realizar?\n");
        printf("1.imprimir la suma de una fila o columna de la matriz\n");
        printf("2.Realizar una matriz transpuesta\n");
        printf("3.Construir y sumar dos matrices.\n");
        printf("4.Finalizar.\n");
        scanf("%i",&x);
        switch(x){
            case 1:
                y=1;
                llenarMatriz(matrizA);
                while(y!=0){
                    printf("Desea sumar una 1.fila o 2.columna?\n");
                    scanf("%i",&filacolumna);
                    if(filacolumna==1||filacolumna==2){
                        while(y!=0){
                            printf("Escoga la que desea sumar 1,2 o 3.\n");
                            scanf("%i",&numero);
                            if(numero<=3 && numero>0){
                                sumarfilasycolumnas(matrizA,filacolumna,numero);
                                y=0;
                            } else {
                                printf("Error\n");
                                y=1;
                            }
                        }
                        
                    } else {
                        printf("Error\n");
                    }
                }
                x=1;
            break;
            case 2:
                llenarMatriz(matrizB);
                transformar(matrizB);
                printf("\n");
            break;
            case 3:
                llenarMatriz(matrizC);
                llenarmanual(matrizD);
                sumar(matrizC,matrizD);
                printf("\n");
            break;
            case 4:
                x=0;
            break;
        }
    }
    return 0;
}


void llenarMatriz(float m[filas][col])
{
    srand(time(NULL));
    printf("llenando matriz...\n");
    int i,j;
    for(int i=0;i<filas;i++)
    {
        for (j=0;j<col;j++)
        {
            m[i][j]=rand()%9+1;
            
        }
        
    }
    
     printf("Esta es la matriz:\n");
    int k,l;
    for( k=0;k<filas;k++)
    {
        for (l=0;l<col;l++)
        {
           printf("  %.1f ",m[k][l]);
            
        }
          printf("\n");
    }
    
   
    }
    
void sumarfilasycolumnas(float n[filas][col],int x, int y)
{
    int suma=0;
    printf("mostrando:\n");
    switch(x){
        case 1:
            for(int a=0;a<3;a++){
                suma+=n[y-1][a];
            }
            printf("la suma de la fila %i es:%i",y,suma);
        break;
        case 2:
            for(int a=0;a<3;a++){
                suma+=n[a][y-1];
            }
            printf("la suma de la columna %i es:%i\n",y,suma);
        break;
    }
    
}

void transformar(float b[filas][col])
{
    float c[filas][col];
    
    for(int x=0;x<3;x++){
        for(int y=0;y<3;y++){
            c[y][x]=b[x][y];
        }
    }
    printf("\n Matriz transpuesta:\n");
    for(int x=0;x<3;x++){
        printf("\n");
        for(int y=0;y<3;y++){
            printf("  %.1f ",c[x][y]);
        }
    }
    printf("\n");
    
}

void sumar(float a[filas][col],float b[filas][col])
{
    float c[filas][col];
    for(int x=0;x<3;x++){
        for(int y=0;y<3;y++){
            c[x][y]=a[x][y]+b[x][y];
        }
    }
    printf("Esta es la suma de las dos matrices\n");
    for(int x=0;x<3;x++){
        printf("\n");
        for(int y=0;y<3;y++){
            printf(" %.1f ",c[x][y]);
        }
    }
    
}

void llenarmanual(float m[filas][col])
{
    
    printf("llenando aqui \n");
    int i,j;
    for(int i=0;i<filas;i++)
    {
        for (j=0;j<col;j++)
        {
            printf("INSERTE (%d,%d)=", i+1,j+1);
            scanf("%f",&m[i][j]);
             
            
        }
        
    }
    
          printf("mostrando:\n");
    int k,l;
    for( k=0;k<filas;k++)
    {
        for (l=0;l<col;l++)
        {
           printf("  %.1f ",m[k][l]);
        }
          printf("\n");
    }
    
   
    }


