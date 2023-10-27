#include <stdio.h>

int main()
{
    int cubo_magico[3][3];
    int filas[3];
    int columnas[3];
    int x,y,fila,columna,suma=0,elec=3,i,j,num;
    
    printf("Recuerde que solo puede digitar numeros del 1 al 9\n");
    
while(elec!=0){ //verificacion de los numeros ingresados
    elec=3;
    for(x=0;x<3;x++){
        printf("Digite los 3 numeros de la fila %i: \n",x+1);
        for(y=0;y<3;y++){
            scanf("%i",&cubo_magico[x][y]);
        }
    }
    //verificacion de que no este repetido.
    
    for(x=0;x<3;x++){
    for(y=0;y<3;y++){
        
        for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if (cubo_magico[x][y]==cubo_magico[i][j]){ 
                if(i!=x || j!=y){
                    printf("Colocaste el numero %i. En la posicion (%i,%i) y (%i,%i)\n",cubo_magico[x][y],x,y,i,j);
                    elec=2;
                }    
            }
        }
        }
    }
    }
    
    for(x=0;x<3;x++){ //verifico que sean menores que 9 y mayores que 0.
        for(y=0;y<3;y++){
            if(cubo_magico[x][y]>9 || cubo_magico[x][y]==0){
                printf("Ingresaste algun numero mayor que 9 o menor a 1.\n");
                elec=1;
            }
        }
    }
    
    if (elec==2){
        printf("\nRepetiste un numero.\nRecuerda que tienen que ser del 1 al 9 y no se pueden repetir.\n");
        elec=1;
    }
    if (elec==3){
        elec=0;
    }
}

    elec=1;
    printf("\nAsi queda el cubo:"); //visual de la matriz.
    
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
            for(x=0;x<3;x++){
                suma+=cubo_magico[x][x];
            }
            printf("\nLa suma de la diagonal 1 es: %i\n",suma);
            break;
        case 4: //sumar diagonal 2    
            suma=0;
            y=2;
            for(x=0;x<3;x++){
                suma+=cubo_magico[x][y];
                y--;
            }
            printf("\nLa suma de la diagonal 2 es: %i\n",suma);
            break;
        case 5: //vefiricar si es magico o no
        
            for(x=0;x<3;x++){
                suma=0;
                for(y=0;y<3;y++){ //sumar filas y guardarlas en un arreglo
                    suma+=cubo_magico[x][y];
                }
                if (suma==15){
                    filas[x]=suma; 
                } else {
                    filas[x]=0;
                }
            }
            
            for(y=0;y<3;y++){ //sumar columnas y guardarlas en un arreglo
                suma=0;
                for(x=0;x<3;x++){
                    suma+=cubo_magico[x][y];
                }
                if (suma==15){
                    columnas[y]=suma; 
                } else {
                    columnas[y]=0;
                }
            }    // comparar valores de filas
            
            if(filas[0]==15){
             if(filas[1]==15){
              if(filas[2]==15){
               if(columnas[0]==15){
                if(columnas[1]==15){
                 if(columnas[2]==15){
                    suma=0;//calcular diagonal 1
                    for(x=0;x<3;x++){
                        suma+=cubo_magico[x][x];
                    }
                 if(suma==15){
                    suma=0;//calcular la diagonal 2
                    y=2;
                    for(x=0;x<3;x++){
                        suma+=cubo_magico[x][y];
                        y--;
                    }
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






