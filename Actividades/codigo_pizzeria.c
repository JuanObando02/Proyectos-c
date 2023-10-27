
#include <stdio.h>

int tabla[500][10];
int costo[500];
typedef char ingredientes[20];
int cliente=0;


void tomarorden(int cliente){
    int x;
    int error=1;
    
    while(error!=0){
        printf("\nQue tipo de masa quiere para la pizza:\n");
        printf("1.Delgada.\n");
        printf("2.Gruesa.\n");
        scanf("%i",&x);
        if(x==1 || x==2){
            switch(x){
                case 1:
                    printf("usted seleciono tipo de masa: DELGADA.\n");
                    tabla[cliente][0]=1;
                    error=0;
                break;
                case 2:
                    printf("usted seleciono tipo de masa: Guesa.\n");
                    tabla[cliente][1]=1;
                    error=0;
                break;
            }
        } else {
            printf("Marcacion incorrecta.\nMarca 1 o 2\n");
            error=1;
        }
    }//tomo orden de el tamaño de la masa
    
    printf("\nSelecciona maximo 2 ingredientes si desea adicionar mas seran 500 por ingrediente.\nQue ingredientes desea añadir:\n\n");
    error=1;
    int fin=0;
    
    while(error!=0){//tomo orden de los ingredientes
        printf("1. Tomate, 2. Jamon, 3. Madurito, 4. Brocoli, 5. Peperoni.\n");
        scanf("%i",&x);
        switch(x){
            case 1:
                if(tabla[cliente][2]==1){
                    printf("Ya habias seleccionado este ingrediente\n");
                } else {
                    tabla[cliente][2]=1;
                    error=1;
                    printf("Ingrediente valido\n");
                }
            break;
            case 2:
                if(tabla[cliente][3]==1){
                    printf("Ya habias seleccionado este ingrediente\n");
                } else {
                    tabla[cliente][3]=1;
                    error=1;
                    printf("Ingrediente valido\n");
                }
            break;
            case 3:
                if(tabla[cliente][4]==1){
                    printf("Ya habias seleccionado este ingrediente\n");
                } else {
                    tabla[cliente][4]=1;
                    error=1;
                    printf("Ingrediente valido\n");
                }
            break;
            case 4:
                if(tabla[cliente][5]==1){
                    printf("Ya habias seleccionado este ingrediente\n");
                } else {
                    tabla[cliente][5]=1;
                    error=1;
                    printf("Ingrediente valido\n");
                }
            break;
            case 5:
                if(tabla[cliente][6]==1){
                    printf("Ya habias seleccionado este ingrediente\n");
                } else {
                    tabla[cliente][6]=1;
                    error=1;
                    printf("Ingrediente valido\n");
                }
            break;
            default:
                printf("Ingrediente invalido\n");
                error=1;
            break;
        }
        x=1;
        while(x!=0){    
            printf("Desea ingresar mas ingredientes.\n");
            printf("1.si \t 2.No\n");
            scanf("%i",&x);
            switch(x){
                case 1:
                    x=0;
                    error=1;
                break;
                case 2:
                    x=0;
                    error=0;
                    fin=1;
                break;
                default:
                    printf("Marca 1 o 2\n");
                    x=1;
                break;
            }
        }
        if (fin==1){
            printf("Seleccionaste los siguientes ingredientes:\n");
            for(int i=2;i<=6;i++){
                switch (i){
                    case 2:
                        if(tabla[cliente][i]==1){
                            printf("tomate, ");
                        }
                    break;
                    case 3:
                        if(tabla[cliente][i]==1){
                            printf("Jamon, ");
                        }
                    break;
                    case 4:
                        if(tabla[cliente][i]==1){
                            printf("Madurito, ");
                        }
                    break;
                    case 5:
                        if(tabla[cliente][i]==1){
                            printf("Brocoli, ");
                        }
                    break;
                    case 6:
                        if(tabla[cliente][i]==1){
                            printf("Peperoni.");
                        }
                    break;
                }
            }
        }
    }//tomo orden de los ingredientes
    
    error=1;
    ingredientes tama[]={ //se predeterminan los tamaños.
        "Pequeña",//[0]
        "Mediana",//[1]
        "Grande",//[2]
    };
    
    while(error!=0){
        printf("\n\nDe que tamaño necesita la pizza:\n");
        for(int i=0;i<3;i++){
            printf("%i.%s\n",i+1,tama[i]);
        }
        scanf("%i",&x);
        switch(x){
            case 1:
                printf("usted seleciono tamaño de la pizza: %s\n",tama[x-1]);
                tabla[cliente][7]=1;
                error=0;
            break;
            case 2:
                printf("usted seleciono tamaño de la pizza: %s\n",tama[x-1]);
                tabla[cliente][8]=1;
                error=0;
            break;
            case 3:
                printf("usted seleciono tamaño de la pizza: %s\n",tama[x-1]);
                tabla[cliente][9]=1;
                error=0;
            break;
            default:
                printf("Marcacion incorrecta.\n marca 1, 2 o 3.\n");
                error=1;
            break;
        }
    } //tomo orden de el tamaño de la pizza
}

int calcular(int cliente){
    int total=0;
    int can_ingre=0;
    printf("\n\nEste sera el valor de tu pizza:\n");
        for(int i=0;i<=10;i++){
            if(tabla[cliente][i]==1){
                switch(i){
                    case 0:
                    printf("-Masa de pizza delgada:3000\n");
                    total=total+3000;
                    break;
                    case 1:
                    printf("-Masa de pizza Gruesa:4500\n");
                    total=total+4500;
                    break;
                    case 2:
                    printf("Ingrediente: tomate\n");
                    can_ingre=can_ingre+1;
                    break;
                    case 3:
                    printf("Ingrediente: Jamon\n");
                    can_ingre=can_ingre+1;
                    break;
                    case 4:
                    printf("Ingrediente: Madurito\n");
                    can_ingre=can_ingre+1;
                    break;
                    case 5:
                    printf("Ingrediente: Brocolo\n");
                    can_ingre=can_ingre+1;
                    break;
                    case 6:
                    printf("Ingrediente: Peperoni\n");
                    can_ingre=can_ingre+1;
                    break;
                    case 7:
                    printf("-Tamaño de la pizza Pequeña:5000\n");
                    total=total+5000;
                    break;
                    case 8:
                    printf("-Tamaño de la pizza Mediana:8500\n");
                    total=total+8500;
                    break;
                    case 9:
                    printf("-Tamaño de la pizza Grande:12500\n");
                    total=total+12500;
                    break;
                }
            }
        }
        if(can_ingre<=2){
            printf("Total de ingredientes:%i\n",can_ingre);
            printf("No tienes costo adicional.\n\n");
        } else {
            printf("Total de ingredientes:%i\n",can_ingre);
            printf("Adicional de: %i por %i ingredientes.\n\n",(can_ingre-2)*500,can_ingre);
            total=total+((can_ingre-2)*500);
        }
        printf("El costo total de la pizza es de:%i.\n",total);
        return total;
}

void mostrarorden(int cliente){
    printf("\n\nAsi queda tu pizza:\n");
    for(int i=0;i<=10;i++){
            if(tabla[cliente][i]==1){
                switch(i){
                    case 0:
                    printf("-Masa de pizza delgada.\n");
                    break;
                    case 1:
                    printf("-Masa de pizza Gruesa.\n");
                    break;
                    case 2:
                    printf("-Ingrediente: tomate\n");
                    break;
                    case 3:
                    printf("-Ingrediente: Jamon\n");
                    break;
                    case 4:
                    printf("-Ingrediente: Madurito\n");
                    break;
                    case 5:
                    printf("-Ingrediente: Brocolo\n");
                    break;
                    case 6:
                    printf("-Ingrediente: Peperoni\n");
                    break;
                    case 7:
                    printf("-Tamaño de la pizza Pequeña.\n");
                    break;
                    case 8:
                    printf("-Tamaño de la pizza Mediana.\n");
                    break;
                    case 9:
                    printf("-Tamaño de la pizza Grande.\n");
                    break;
                }
            }
    }
}    

int main()
{
    int ventas[500];
    int costo=0;
    int x=1;
    int y=1;
    
    while(y!=0){
    printf("\t ------ Bienvenido a la Mejor Pizzeria ----- \t\n");
    printf("Cliente No.%i",cliente+1);
        x=1;
        while(x!=0){
            tomarorden(cliente);
            costo=calcular(cliente);
            mostrarorden(cliente);
            printf("Deseas volver a crear tu pizza? \t1.si o 2.no\n");
            scanf("%i",&x);
            if(x==1||x==2){
                if(x==1){
                    x=1;
                    for(int i=0;i<10;i++){
                        tabla[cliente][i]=0;
                    }
                }
                if(x==2){
                    x=0;
                }
            } else {
                printf("Marca 1 o 2.\n");
                x=1;
            }
        }
        
    ventas[cliente]=costo;
    cliente++;
    printf("Para finalziar marque 0.\n si quiere seguir tomando ordenes marque cualquier numero.\n");
    scanf("%i",&y);
    }
    int sumatoria=0;
    printf("ventas totales del dia.\n");
    for(int i=0;i<cliente;i++){
        printf("%i.%i\n",i+1,ventas[i]);
        sumatoria+=ventas[i];
    }
    printf("Total:%i",sumatoria);
}


