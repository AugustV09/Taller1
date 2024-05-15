#include <stdio.h>
#include <stdlib.h>
#define CANT 10
#include <math.h>

int main()
{
    int num, *divisores = NULL, i, cont =0;
    printf("Ingrese un numero: ");
    scanf("%d", &num);

    if (num != 0){
        i=1;
        while (i != fabs(num)+1){   //Es fabs() es para que funcione para numeros negativos

            //Si cont es divisible por CANT significa que no tengo mas espacio para incluir mas elementos en el ARRAY
            if ((cont % CANT) == 0) divisores = (int *) realloc(divisores, (CANT+cont)*sizeof(int));
            //(CANT+cont) representa que a la cantidad de elementos cont de mi ARRAY hay que agregarle CANT espacios más

            if (num % i == 0){
                divisores[cont] = i;
                cont++;
            }
            i++;
        }
    }

    printf("El numero ingresado fue %d\n", num);
    if (divisores != NULL){
        printf("Sus divisores son: ");
        for (i=0; i<cont; i++){
            printf("%d-", divisores[i]);
        }
    }
    return 0;
}
