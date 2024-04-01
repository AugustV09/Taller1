#include <stdio.h>
#include <stdlib.h>
#define MESES 12
#define DIAS 30
#define ANOS 10

void valores (int[], float*,int[][MESES][DIAS]);

int main()
{
    int min_lluvias[ANOS]={100000,100000,100000,100000,100000,100000,100000,100000,100000};
    int lluvias[ANOS][MESES][DIAS]={0};
    float promedio = 214700000;

    valores(min_lluvias,&promedio,lluvias);
    printf("%.2f",promedio);
    return 0;
}

void valores (int min_lluvias[], float *promedio, int lluvias [][MESES][DIAS]){
    int i,j,k;

    for(i=0; i<ANOS;i++){

        int lluv_ano = 0;

        for(j=0;j<MESES;j++){

            int lluv_mes=0;

            for(k=0; k<DIAS; k++){
                lluv_mes +=lluvias[i][j][k];

            }

            lluv_ano += lluv_mes;
            if (lluv_mes < min_lluvias[i]) min_lluvias[i]=lluv_mes;
        }


        if ((lluv_ano/MESES)< *promedio) *promedio = lluv_ano/MESES;

    }
}
