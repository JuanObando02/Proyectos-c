
#include <stdio.h>

int main()
{
    int n1,n2,i,primo,x,numero;
    
    scanf("%i",&n1);
    scanf("%i",&n2);
    
    for(numero=n1+1;numero<n2;numero++){
        
        primo=1;
        
            if (numero == 0 || numero == 1){
                primo=0;
            }
            
            if (numero == 4){
                primo=0;
            }

            for (x=2; x < numero/2; x++){
                if (numero % x == 0){
                    primo=0;
                    x=numero;//para finalizar el for y no hacerlo mas veces inecesarias
                }
            }
            
        if (primo==1){
        printf("%i es primo.\n",numero);
        }
    }
}
    
        



