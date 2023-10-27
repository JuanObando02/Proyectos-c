#include <stdio.h>

int main()
{
    int cubo_magico[3][3];
    int filas[3];
    int columnas[3];
    int x,y,fila,columna,suma=0,elec=1;
    printf("Recuerde que solo puede digitar numeros del 1 al 9\n");
    for(x=0;x<3;x++){
        printf("Digite los 3 numeros de la fila %i: \n",x+1);
        for(y=0;y<3;y++){
            scanf("%i",&cubo_magico[x][y]);
        }
    }
    printf("\nAsi queda el cubo:");
    for(x=0;x<3;x++){
        printf("\n");
        for(y=0;y<3;y++){
            printf(" %i ",cubo_magico[x][y]);
        }
    }
    while(elec!=0){
        printf("\nQue Desea Saber:\n1.Suma de una fila.\n2.Suma de una columna.");
        printf("\n3.Suma de la diagonal 1.\n4.Suma de la diagonal 2.\n5.Verificar si el cuadro es magico o no.\n0.Si desea finalizar.\n");
        scanf("%i",&elec);
    switch(elec){
        case 1: //sumar una fila 
            printf("\nDe que fila desea saber la suma: ");
            scanf("%i",&fila);
            suma=0;
            for(y=0;y<3;y++){
                suma+=cubo_magico[fila-1][y];
            }
            printf("La suma de esta fila da: %i\n",suma);
            break;
        case 2: //sumar una columna
            printf("\nDe que columna desea saber la suma: ");
            scanf("%i",&columna);
            suma=0;
            for(x=0;x<3;x++){
                suma+=cubo_magico[x][columna-1];
            }
            printf("\nLa suma de esta columna da: %i\n",suma);
            break;
        case 3: //sumar diagonal 1
            suma=0;
            suma=cubo_magico[0][0]+cubo_magico[1][1]+cubo_magico[2][2];
            printf("\nLa suma de la diagonal 1 es: %i\n",suma);
            break;
        case 4: //sumar diagonal 2    
            suma=0;
            suma=cubo_magico[0][2]+cubo_magico[1][1]+cubo_magico[2][0];
            printf("\nLa suma de la diagonal 2 es: %i\n",suma);
            break;
        case 5: //vefiricar si es magico o no
            for(x=0;x<3;x++){
                suma=0;
                for(y=0;y<3;y++){
                    suma+=cubo_magico[x][y];
                }
                if (suma==15){
                    filas[x]=suma; 
                } else {
                    filas[x]=0;
                }
            }
            for(y=0;y<3;y++){
                suma=0;
                for(x=0;x<3;x++){
                    suma+=cubo_magico[x][y];
                }
                if (suma==15){
                    columnas[y]=suma; 
                } else {
                    columnas[y]=0;
                }
            }    
            if(filas[0]==15){
             if(filas[1]==15){
              if(filas[2]==15){
               if(columnas[0]==15){
                if(columnas[1]==15){
                 if(columnas[2]==15){
                    suma=0;
                    suma=cubo_magico[0][0]+cubo_magico[1][1]+cubo_magico[2][2];  //diagonal 1
                  if(suma==15){
                    suma=0;
                    suma=cubo_magico[0][2]+cubo_magico[1][1]+cubo_magico[2][0]; //diagonal 2
                   if(suma==15){
                    printf("Felicidades el cubo es magico.\n");
                  } else {
                    printf("El cubo no es magico :(\n"); } 
                  } else {
                    printf("El cubo no es magico :(\n"); }
                  } else {
                    printf("El cubo no es magico :(\n"); }
                  } else {
                    printf("El cubo no es magico :(\n"); }
                  } else {
                    printf("El cubo no es magico :(\n"); }
                  } else {
                    printf("El cubo no es magico :(\n"); }
                  } else {
                    printf("El cubo no es magico :(\n"); }
                  } else {
                    printf("El cubo no es magico :(\n"); }
            break;
        default:
            printf("Opcion no valida. Intenta de nuevo\n");
        }
        }
}



