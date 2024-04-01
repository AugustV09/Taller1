#include <stdio.h>
#include <stdlib.h>


void valores (float[], const int, int*,int*,int*);

int main()
{
    int dimf;
    scanf(" %d", &dimf);

    int a[dimf], posMaximo = -1, minimo = 2147000000, promedio = 0;
    valores (a,dimf, &posMaximo,&minimo,&promedio);

    printf("Hello world!\n");
    return 0;

}



void valores (float a[], const int DIMF, int *posMaximo,int *minimo, int*promedio)
{
    register int i,max= -2147000000;

    for(i=0; i<DIMF; i++)
    {
        if (a[i]< *minimo) *minimo = a[i];
        if (a[i]> max)
        {
            max = a[i];
            *posMaximo = i;
        }
        *promedio += a[i];
    }

    *promedio /= DIMF;
}


