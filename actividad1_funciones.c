
#include <stdio.h>
#define personas 10

int edades [personas];
    
void leeredad(){
    printf("Digite las edades:\n");
    for(int i=0;i<personas;i++){
        scanf("%i",&edades[i]); 
        }
    }
int sumar(){
    
    int suma=0;
    for(int i=0;i<personas;i++){
    suma+=edades[i];
    }
    return suma;
    }

int main()
{   
    leeredad();
    int resultado;
    resultado=sumar();
    printf("%i",resultado);
    
}

