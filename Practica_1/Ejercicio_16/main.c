#include <stdio.h>
#include <stdlib.h>

void swap(int *, int *);

int main()
{
    int x, y;
    x = 10;
    y = 20;
    printf("x=%d\ty=%d\n",x,y);

    swap(&x, &y);  /*El swap NO funcionaba porque los parametros se pasaban por valor y no como referencia*/

    printf("x=%d\ty=%d\n",x,y);
    return 0;
}

void swap(int *a, int *b)  /*NO funcionaba porque los parametros se pasaban por valor y no como referencia*/
{
    int tmp;

    tmp = *a; // guarda el valor de a
    *a = *b;   // almacena b en a
    *b = tmp; // almacena a en b
}
