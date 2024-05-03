#include <stdio.h>
#include <stdlib.h>

int* reserva (int);
void inicializacion (int *,int);
int maximo(int*,int);

int main()
{
    srand(3);
    int cant;
    printf("Ingrese cuantos elementos debe tener el vector: ");
    scanf("%d",&cant);
    int *p = reserva(cant);
    inicializacion(p,cant);
    printf("El maximo es: %d", maximo(p,cant));
    free(p);
    return 0;
}

int* reserva(int cant){
    int *p = (int *) malloc(cant*sizeof(int));

    return p;
}

void inicializacion(int *p, int cant){
    int i;

    for (i=0; i<cant; i++){
        p[i]= rand();
    }
}

int maximo (int *p, int cant){
    int max = p[0], i;

    for (i=1; i<cant;i++){
        if (max < p[i]) max = p[i];
    }

    return max;
}
