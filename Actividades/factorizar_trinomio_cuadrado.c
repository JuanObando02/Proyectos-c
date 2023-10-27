/*
-Juan Sebastian Obando 
-Maria alejandra motato
*/

#include <stdio.h>

int sumar(int a,int b){
    int suma;
    suma=a+b;
    return suma;
}

int multiplicar(int a,int b){
    int producto;
    producto=a*b;
    return producto;
}

void trionomio(int a,int b, int c){
    int factor1,factor2,suma,producto,x,y;
    int factorizado=0,factorcomun1=0,factorcomun2=0;
    if (a==1){
        printf("Factorizar: x^2 + %ix +%i.\n",b,c);
        for(factor1=1;factor1<b;factor1++){
            for(factor2=1;factor2<b;factor2++){
                suma=sumar(factor1,factor2);
                if(suma==b){         
                    producto=multiplicar(factor1,factor2);
                    if(producto==c){
                        factorizado=1;//verdadero 
                        x=factor1;
                        y=factor2;
                        factor1=b;
                        factor2=b;//se acba los dos for
                    }
                }
            }
        }
        if(factorizado==1){//si es verdadero
            printf("El trinomio se puede factorizar.\nRespuesta: (x+%i)(x+%i)\n",x,y);
        } else  {//si es falso
            printf("No es posible factorizar esta expresion con numeros racionaes.\n");
        }
    }
    if(a>=2){
        printf("Factorizar: %ix^2 + %ix +%i.\n",a,b,c);
        for(factor1=1;factor1<b;factor1++){//primer for para encontrar el uno de los dos numeros que necesitamos
            for(factor2=1;factor2<b;factor2++){//segundo for para encontrar el otro valor de los dos numeros que necesitamos que son contadores que iran hasta un numero menos que b
                suma=sumar(factor1,factor2);//sumamos los dos numeros
                if(suma==b){//validamos que la suma sean igual a "B" y si lo es entonces pasamos a validar que la multipliccion de los dos factores sean iguales a "A*C"  
                    producto=multiplicar(factor1,factor2);
                    if(producto==(a*c)){
                        factorizado=1; //si encontraamos dos numeros que cumplan las dos condiciones se puede factorizar
                        x=factor1;
                        y=factor2;
                        factor1=b;
                        factor2=b;
                    }
                }
            }
        }
        if(factorizado==1){//si se puede factorizar sacamos comun que hay entre el numero "A" de el trinomio y el primero numero que encontramos
            for(int i=1;i<a;i++){
                if(a%i==0 && x%i==0){
                    if(i>=factorcomun1){//saco el factor comun mayor
                    factorcomun1=i;
                    }
                }
            }
            printf("factor comun 1:%i\n",factorcomun1);
            for(int i=1;i<y;i++){//si se puede factorizar sacamos comun que hay entre el numero "C" de el trinomio y el segundo numero que encontramos
                if(c%i==0 && y%i==0){
                    if(i>=factorcomun2){//saco el factor comun mayor
                    factorcomun2=i;
                    }
                }
            }
            printf("factor comun 2:%i\n",factorcomun2);
            printf("El trinomio se puede factorizar.\nRespuesta: (%ix+%i)(%ix+%i)\n",a/factorcomun1,x/factorcomun1,factorcomun1,factorcomun2);//divido mi numero entre los factores comunes


        } else  {
            printf("No es posible factorizar esta expresion con numeros racionaes.\n");
        }
    }
}

int main()
{   
    int x=1;
    int a,b,c;
    printf("\t----Bienvenido----\t\n");
    printf("Nota:\nEste programa factorizara trinomios de la forma x^2 + bx + c y ax^2 + bx + c pero solo de numeros positivos.\nAl final te dara la respuesta a tu problema de factorizacion. \nPuedes validar las respuestas con tu calculadora de confianza :)\n\n");
    while(x!=0){
        printf("Digite que desea realizar:\n1.Factorizar.\n2.Salir.\n");
        scanf("%i",&x);
            switch(x){
                case 1:
                    printf("ax^2 + bx + c\nDigite los valore de: a\n");
                    scanf("%i",&a);
                    printf("Digite los valore de: b\n");
                    scanf("%i",&b);
                    printf("Digite los valore de: c\n");
                    scanf("%i",&c);
                    trionomio(a,b,c);
                    x=1;
                break;
                case 2:
                    printf("Fin del Programa.\n");
                    x=0;
                break;
                default:
                    printf("Error. Marca 1 o 2.\n");
                    x=1;
                break;
            }
    }
}




