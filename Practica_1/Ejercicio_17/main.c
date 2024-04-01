#include <stdio.h>
#include <stdlib.h>

void maximos (int, float *, float *);

int main()
{
    int n = 5;
    float min, max;
    maximos(n, &min, &max);
    printf("Maximo: %.2f\t Minimo: %.2f", max,min);
    return 0;
}

void maximos (int n, float *min, float *max){
    float mi = 9999999;
    float ma = -9999999;
    float num;
    for (; n; n--){
        printf("Ingrese un numero: ");
        scanf(" %f", &num);
        printf("\n");
        if (num > ma) ma = num;
        if (num < mi) mi = num;
    }

    *min = mi;
    *max = ma;
}
