#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void inicializar(int *,const int);
void impresion (int *, const int);
void ordenar (int *,const int);

int main()
{
    srand(time(NULL));

    int dimf = 10;
    int numeros[dimf];
    inicializar(numeros,dimf);
    impresion(numeros,dimf);
    ordenar(numeros,dimf);
    printf("\n");
    impresion(numeros,dimf);
    return 0;
}

void inicializar(int *numeros, const int dimf){
    int i;

    for(i=0; i<dimf;i++){
        *(numeros+i) = rand()%9+1;
    }
}

void impresion (int *numeros, const int dimf){
    int i;

    for(i = 0; i<dimf;i++){

        printf("%d\n",*(numeros+i));
    }
}

void ordenar (int *numeros,const int dimf){
    int i,j,min,pos_min,aux;

    for(i=0; i<dimf; i++){
        min = *(numeros+i);
        pos_min = i;
        for (j=i+1; j<dimf;j++){
            if (min>*(numeros+j)) {      //a xor b     b xor a        a xor b
                    min = *(numeros+j);
                    pos_min = j;
            }
        }

        (*(numeros+i)) = (int)((*(numeros+i)) ^ (*(numeros+pos_min)));
        (*(numeros+pos_min))= (int)((*(numeros+pos_min)) ^ (*(numeros+i)));
        (*(numeros+i)) = (int)((*(numeros+i)) ^ (*(numeros+pos_min)));

        /*int a = *(numeros+i);
        int b= *(numeros+pos_min);

        a ^=b;
        b^=a;
        a^=b;

        *(numeros+i)=a;
        *(numeros+pos_min)=b;*/

        /*aux = *(numeros+pos_min);
        *(numeros+pos_min) = *(numeros+i);
        *(numeros+i) = aux;*/
    }
}
