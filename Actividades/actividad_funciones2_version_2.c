#include <stdio.h>

int sumar(int x, int y, int z)
{
    int sumar;
    sumar=x+y+z;
    return sumar;
}

int elevar(int x,int y)
{
    int resultado;
    if(y==0){
        resultado=1;
    }
    if(y==1){
        resultado=x;
    }
    if(y>1){
        resultado=x;
        for(int i=1;i<y;i++){
            resultado+=x*x;
        }
    }
    return resultado;
}
void error(int x)
{
    if(x>=500){
        printf("Error\n");
    } else {
        printf("No hay error.\n");
    }
}
void par(int x)
{
    int resultado;
    resultado=x%2;
    printf("%i",resultado);
    if (resultado==1){
        printf("El numero es impar.\n");
    } else {
        printf("El numero es par.\n");
    }
}

int main()
{   
    int x=1,b,c,res,a;
    
            printf("Bienvenido\n");
            
    while(x!=0){
        
            printf("1.SUMAR 3 VALORES:\n");
            printf("2.CALCULAR EL CUADRADO DE UN NUMERO:\n");
            printf("3.DEFINIR ERROR.\n");
            printf("4.DEFINIR SI ES PAR UN NUMERO.\n");
            printf("5.Finalizar\n");
            scanf("%i",&x);
        
        switch(x){
            case 1:
                printf("Digite los valores a sumar: \n");
                scanf("%i",&a);
                scanf("%i",&b);
                scanf("%i",&c);
                res=sumar(a,b,c);
                printf("la suma de las edades es:%i\n",res);
            break;
            case 2:
                a=0;
                b=0;
                res=0;
                printf("Digite el valor para elevar y su potencia.\n");
                scanf("%i",&a);
                scanf("%i",&b);
                res=elevar(a,b);
                printf("El numero %i elevado al cuadrado es:%i.\n",a,res);
            break;
            case 3:
                a=0;
                printf("Ingrese un numero.\n");
                scanf("%i",&a);
                error(a);
            break;
            case 4:
                a=0;
                printf("Ingrese un numero.\n");
                scanf("%i",&a);
                par(a);
            break;
            case 5:
            x=0;
            break;
        }
    }
}
    


