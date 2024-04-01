#include <stdio.h>
#include <stdlib.h>
#define COL 10
#define FIL 5

void sumaMatrices (int [][COL], int [][COL],int [][COL]);

int main()
{
    int A[FIL][COL]={{1,0}}, B[FIL][COL]={{1,0}}, C[FIL][COL];
    sumaMatrices(A,B,C);
    printf("%d",C[0][0]);
    return 0;
}

void sumaMatrices (int A[][COL], int B[][COL],int C[][COL]){
    int i,j;

    for(i=0; i<FIL;i++){
        for(j=0; j<COL;j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

