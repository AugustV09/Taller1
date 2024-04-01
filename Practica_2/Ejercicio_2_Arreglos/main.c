#include <stdio.h>
#include <stdlib.h>


float promedio (float[], const int);
float minimo (float[],const int);
int posMaximo (float[],const int);

int main()
{
    int dimf;
    scanf(" %d", &dimf);
    int a[dimf];

    printf("Hello world!\n");
    return 0;

}



float promedio (float a[], const int DIMF)
{
    int i,suma = 0;

    for(i=0; i<DIMF; i++)
    {
        suma += a[i];
    }

    return (suma/DIMF);
}

float minimo (float a[],const int DIMF)
{

    int i,min = 21700000;

    for(i = 0; i < DIMF; i++)
    {
        if (a[i]<min) min = a[i];
    }

    return min;
}

int posMaximo (float a[],const int DIMF)
{
    int i, max = -21700000, pos = -1;

    for(i=0; i<DIMF; i++)
    {
        if (a[i]> max)
        {
            max = a[i];
            pos = i;
        }
    }

    return pos;
}
