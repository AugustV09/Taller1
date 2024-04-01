#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num_final;
    int total = 0;

    for(num_final = 230; num_final; num_final = num_final -2){
        total = total + num_final;
    }

    printf("La suma de todos los numeros pares entre 2 y 230 es %d", total);
    return 0;
}
