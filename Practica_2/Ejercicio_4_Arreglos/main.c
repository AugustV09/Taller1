#include <stdio.h>
#include <stdlib.h>
#define DIMF 3


void traspuesta (int [][DIMF]);

int main()
{
    int A[DIMF][DIMF]= {{1,4,5},{2,10,34},{54,67,98}};
    traspuesta(A);
    return 0;
}

void traspuesta (int A[][DIMF])
{
    int i,j;

    for(i=0; i<DIMF; i++)
    {
        for(j=0; j<DIMF; j++)
        {
            printf("%d\t", A[j][i]);
        }
        printf("\n");
    }
}

