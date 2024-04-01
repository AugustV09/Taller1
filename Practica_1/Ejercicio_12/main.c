#include <stdio.h>
#include <stdlib.h>
# include <math.h>

int main()
{
    int i;
    for (i = 1; i<=10; i++){

        /*sqrt(i) devuelve un numero double*/
        printf("La raiz cuadrada de %d es: %.2lf, ", i,sqrt(i));

        printf("el cuadrado de %d: %d, ", i, i*i);

        /*pow(i) devuelve un numero double*/
        printf("el cubo de %d es: %.0lf\n", i, pow(i,3));

    }
    return 0;
}
