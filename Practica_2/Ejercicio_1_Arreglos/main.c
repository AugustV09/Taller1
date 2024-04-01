#include <stdio.h>
#include <stdlib.h>
#define DIMF 50

void carga (int []);
void parImpar (int [], int*, int*);

int main()
{
    srand(3);
    int ar[DIMF], pares = 0, impares = 0;
    carga(ar);
    parImpar(ar,&pares,&impares);
    printf("La cantidad de numeros pares en posiciones impares es %d y la cantidad de numeros impares en posiciones pares es %d.", pares,impares);
    return 0;
}

void carga (int ar[]){
    int i;

    for(i = 0; i<DIMF; i++ ){
        ar[i] = rand();
    }
}

void parImpar (int ar[], int *pares, int *impares){
    int i;

    for (i=0; i<DIMF; i++){
        printf("%d\n", ar[i]);
        if (i%2){
            if ((ar[i]%2) == 0) ++*pares;  /* *pares++ no me funciona!!!!!!!!!! */
        }
        else {
            if ((ar[i]%2) != 0) ++*impares;  /* *impares++ no me funciona!!!!!!!!!! */
        }
    }
}

