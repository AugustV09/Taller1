#include <stdio.h>
#include <stdlib.h>
#define COL 10
#define FIL 5

void multiplicarMatriz (int [][COL], int);

int main()
{
    int m[FIL][COL]={{1,0}}, c =3;
    multiplicarMatriz(m,c);
    printf("%d",m[0][0]);
    return 0;
}

void multiplicarMatriz (int m[][COL], int c){
    int i,j;

    for(i=0; i<FIL;i++){
        for(j=0; j<COL;j++){
            m[i][j] *= c;
        }
    }
}

