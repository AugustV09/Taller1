#include <stdio.h>
#include <stdlib.h>

int main()
{
    register int i;
    int codigo,cant,min1 = 2147000, min2 = 2147000, codM1, codM2, cant_pais = 0, cant_pais_total = 2;

    for(i = cant_pais_total; i; i--){
        printf("Ingrese el codigo del pais: ");
        scanf(" %d", &codigo);
        printf("Ingrese la cantidad de aves: ");
        scanf(" %d", &cant);
        if (min1 > cant){
            min2 = min1;
            min1 = cant;
            codM2 = codM1;
            codM1 = codigo;
        }
        else if (min2 > cant){
            min2 = cant;
            codM2 = codigo;
        }

        if (cant > 40){
            cant_pais++;
        }
    }

    printf("Los paises con menor cantidad de aves son %d y %d, respectivamente.\n", codM1, codM2);
    printf("El porcentaje de paises con mas de 40 tipos de aves es: %.2f", ((float)cant_pais*100)/cant_pais_total);
    return 0;
}
