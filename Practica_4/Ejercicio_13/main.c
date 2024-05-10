#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=2, y=3;
    int * m= (int*) malloc(x*y*sizeof(int));

    /* a) m puede utilizarse para modelar un vector de X*Y elementos o para modelar una matriz de X filas e Y columnas o de Y filas y X filas

    b) Como dijimos antes se puede modela una matriz con m, simulando el acceso a filas y columnas a traves de la siguiente expresion: *(m + FIL*Y + COL)
    donde FIL y COL son la fila y la columna que quiero, respectivamente e Y es el total de columnas.
    */

    int i,j;

    for (j=0; j<y; j++){
        for (i=0; i<x; i++){
            printf("Ingrese un numero en la posicion (%d,%d): ", i,j);
            scanf("%d", m+j+i*y);
        }
    }

    for (j=0; j<y; j++){
        for (i=0; i<x; i++){
            printf("Posicion (%d,%d): %d\n", i,j, *(m+j+i*y));
        }
    }
    return 0;
}
