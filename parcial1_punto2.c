#include <stdio.h>
#define salariomini 1014980
typedef int entero;
int main()
{   
    entero trabajador=0;
    entero incremento=0;
    entero total_salario=0;
    entero salariobase=0;
    entero especializacion=0;
    entero ventas=0;
    entero jornadas=0;
    
    printf("¿Que puesto tienes?.\n 1. Alta gerencia.\n 2. Administrativo.\n 3. Vendedor. \n 4. Servicios generales.\n");
    scanf("%i",&trabajador);

    if(trabajador==1){
        total_salario=salariomini*4;
    }
    if(trabajador==2){
        printf("¿Cuentas con una especializacion en tu area de trabajo?\n");
        printf("Marca 1 si si tienes, sino marca 2\n");
        scanf("%i",&especializacion);
        total_salario=salariomini*3;
        if(especializacion==1){
            incremento=salariomini*15/100;
            total_salario=total_salario+incremento;
        } else {
            incremento=0;
            }
        }
    if(trabajador==3){
        printf("¿Cual fue el total de sus ventas?\n");
        scanf("%i",&ventas);
        total_salario=salariomini*1.3;
        if (ventas>1000000){
            incremento=(ventas*10)/100;
            total_salario=total_salario+incremento;
            
        } else {    
            incremento=(ventas*5)/100;
            total_salario=total_salario+incremento;
        }
    }
    if (trabajador==4){
        printf("¿Cuantas jornadas nocturnas realizo?\n");
        scanf("%i",&jornadas);
        total_salario=salariomini;
        if (jornadas>=3){
            incremento=(salariomini*3)/100;
            total_salario=total_salario+incremento;
        } else  {
            incremento=0;
        }
    }
        salariobase=total_salario-incremento;
    printf("Su salario base es de:%i\n",salariobase);
    printf("Su Incremento es de: %i\n",incremento);
    printf("Su Valor a pagar total es de: %i\n",total_salario);
    
}

