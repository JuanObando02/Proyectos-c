#include <stdio.h>

int main()
{
    int x=1,y,z,opcion;
    float fahrenheit,temperatura,celsius,suma=0,promedio,mayor=0;
    float matriz1[3][3],matriz2[3][3];
    while(x!=0){
        printf("Opcion 1: Entregar una temperatura y convertirla.\n");
        printf("Opcion 2: Registrar en una matriz 3x3 las 9 temperaturas.\n");
        printf("Opcion 0: Para finalizar.\n");
        scanf("%i",&x);
    switch(x){
        case 1:
            while(x!=0){
            printf("En que unidad va a ingresar la temperatura:\n1.Celsius. \n2.Fahrenheit.\n ");
            scanf("%i",&opcion);
                if (opcion==1 || opcion==2){
                    switch(opcion){
                        case 1:
                            printf("Digite el valor de la temperatura\n");
                            scanf("%f",&temperatura);
                            fahrenheit=(temperatura*1.8)+32;
                            printf ("%.2f convertida a grados fahrenheit es: %.2f\n",temperatura,fahrenheit);
                            x=0;
                            break;
                        case 2: 
                            printf("Digite el valor de la temperatura\n");
                            scanf("%f",&temperatura);
                            celsius=(temperatura-32)/1.8;
                            printf("%.2f convertida a grados celsius es: %.2f\n",temperatura,celsius);
                            x=0;
                            break;
                    }
                } else {
                    printf("No digitaste ni 1 ni 2.\n");
                    x=1;
                }
            }
            break;
        case 2:
            x=1;
            printf("Ingresa los valores de la temperatura de los nueve dias.\n");
            for(y=0;y<3;y++){
                for(z=0;z<3;z++){
                    scanf("%f",&matriz1[y][z]);
                }
            }
            while(x!=0){
                printf("En que unidad va a ingresar la temperatura:\n1.Celsius. \n2.Fahrenheit.\n ");
                scanf("%i",&opcion);
                if (opcion==1 || opcion==2){
                    switch(opcion){
                        case 1://de celsius a fahrenheit
                            for(y=0;y<3;y++){
                                for(z=0;z<3;z++){
                                matriz2[y][z]=(matriz1[y][z]*1.8)+32; 
                                }
                            }
                            printf("\nAsi queda la matriz que ingresaste:\n");
                            for(y=0;y<3;y++){
                                printf("\n");
                                for(z=0;z<3;z++){
                                printf(" %.2f ",matriz1[y][z]);   
                                }
                            }
                            
                            for(y=0;y<3;y++){
                                for(z=0;z<3;z++){
                                    suma+=matriz1[y][z];    
                                    if (mayor<matriz1[y][z]){
                                        mayor=matriz1[y][z];
                                    }
                                }
                            }
                            promedio=suma/9;
                            printf("\nEl promedio de la matriz es %.2f°C y la mayor temperatura es %.2f°c ",promedio,mayor);    
                            
                            printf("\nAsi queda la matriz ya convertida a fahrenheit:\n");
                            for(y=0;y<3;y++){
                                printf("\n");
                                for(z=0;z<3;z++){
                                printf(" %.2f ",matriz2[y][z]);   
                                }
                            }
                            mayor=0;
                            suma=0;
                            for(y=0;y<3;y++){
                                for(z=0;z<3;z++){
                                    suma+=matriz2[y][z];    
                                    if (mayor<matriz2[y][z]){
                                        mayor=matriz2[y][z];
                                    }
                                }
                            }
                            promedio=suma/9;
                            printf("\nEl promedio de la matriz es %.2f°f y la mayor temperatura es %.2f°f\n ",promedio,mayor);
                            
                            x=0;
                            break;
                        case 2://de fahrenheit a celsius
                            for(y=0;y<3;y++){
                                for(z=0;z<3;z++){
                                matriz2[y][z]=(matriz1[y][z]-32)/1.8;
                                }
                            }
                            printf("\nAsi queda la matriz que ingresaste:\n");
                            for(y=0;y<3;y++){
                                printf("\n");
                                for(z=0;z<3;z++){
                                printf(" %.2f ",matriz1[y][z]);   
                                }
                            }
                            for(y=0;y<3;y++){
                                for(z=0;z<3;z++){
                                    suma+=matriz1[y][z];    
                                    if (mayor<matriz1[y][z]){
                                        mayor=matriz1[y][z];
                                    }
                                }
                            }
                            promedio=suma/9;
                            printf("\nEl promedio de la matriz es %.2f°f y la mayor temperatura es %.2f°f\n\n",promedio,mayor);
                            
                            printf("\nAsi queda la matriz ya convertida a celsius:\n");
                            for(y=0;y<3;y++){
                                printf("\n");
                                for(z=0;z<3;z++){
                                printf(" %.2f ",matriz2[y][z]);   
                                }
                            }
                            for(y=0;y<3;y++){
                                for(z=0;z<3;z++){
                                    suma+=matriz2[y][z];    
                                    if (mayor<matriz2[y][z]){
                                        mayor=matriz2[y][z];
                                    }
                                }
                            }
                            promedio=suma/9;
                            printf("\nEl promedio de la matriz es %.2f°C y la mayor temperatura es %.2f°c\n\n",promedio,mayor);
                            x=0;
                            break;
                    }
                } else {
                    printf("No digitaste ni 1 ni 2.\n");
                    x=1;
                }
            }
            
            break;
    }
    }
}

