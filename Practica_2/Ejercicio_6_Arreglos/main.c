#include <stdio.h>
#include <stdlib.h>
#define DIMF 10

void coincidencia (int [], int);

int main()
{

    int v[DIMF]= {0}, num,i;
    scanf("%d", &num);

    coincidencia(v,num);
    printf("SALII :D\n");

    for (i = 0; i<DIMF; i++) printf("%d", v[i]);
    return 0;
}

void coincidencia(int v[],int num)
{
    do
    {   printf("Entra con %d\n", num);
        v[num%10]++;
        num = num/10;
        printf("%d\n", num);
    }
    while (num);
}

