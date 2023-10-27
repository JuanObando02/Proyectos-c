#include <stdio.h>

int main()
{
    int propina=0,total=0;
    float por_propina=0;
    printf("Ingrese El total a pagar:");
    scanf("%i",&total);
    printf("Ingrese la propina:");
    scanf("%i",&propina);
    
    por_propina=propina*100/total;
    
    if(por_propina>10 && por_propina<25){
        printf("Total cuenta es de: %i\n",total);
        printf("Cliente satisfecho, Gracias por preferirnos.");
    }
    if(por_propina<=10 && por_propina>0){
        printf("Total cuenta es de: %i\n",total);
        printf("Cliente indiferente, lo esperamos para una nueva experiencia.");
    }
    if(por_propina==0){
        printf("Total cuenta es de: %i\n",total);
        printf("Cliente Insatisfecho, vuelva para mejorar nuestra atencion.");
    }
    if(por_propina>=25){
        printf("Total cuenta es de: %i\n",total);
        printf("Cliente feliz vuelva pronto.");
        printf("POCENTAJE %f\n",por_propina);
    }
    
}


