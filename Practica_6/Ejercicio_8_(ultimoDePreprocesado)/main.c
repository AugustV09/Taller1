#include <stdio.h>
#include <stdlib.h>
#define LONG 1000
#define DEBUG 0


void inicializar (int*,int);
int busqueda (int*, int, int);

int main()
{
    int numeros[LONG];
    inicializar(numeros,LONG);
    if ((busqueda(numeros,LONG, 5)) != (-1)) printf("ENCONTRADO\n");
    else printf("NO ENCONTRADO\n");

    return 0;
}

void inicializar (int *numeros, int dimf){
    srand(3);
    int i;

    for (i=0; i<dimf;i++){
        numeros[i] = rand();
    }
}

int busqueda (int *numeros, int dimf, int num){
    int i, result = -1, cant =0;

    for (i=0; i<dimf; i++){
        #if DEBUG
            cant++;
        #endif
        if (numeros[i] == num){
            result = i;
            break;
        }
    }

    #if DEBUG
        printf("Se ingresaron %d veces al arreglo para encontrar el archivo.\n", cant);
    #endif
    return result;
}
