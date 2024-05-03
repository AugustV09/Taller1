#include <stdio.h>
#include <stdlib.h>

float* reserva (int);
void inicializacion (float *,int);
float promedio(float*,int);

int main()
{
    int cant;
    printf("Ingrese cuantos elementos debe tener el vector: ");
    scanf("%d",&cant);
    float *p = reserva(cant);
    inicializacion(p,cant);
    printf("El promedio es: %.2f", promedio(p,cant));
    free(p);
    return 0;
}

float* reserva(int cant){
    float *p = (float *) malloc(cant*sizeof(float));

    return p;
}

void inicializacion(float *p, int cant){
    int i;

    for (i=0; i<cant; i++){
        printf("Ingrese un numero flotante: ");
        scanf("%f", (p+i));
    }
}

float promedio (float *p, int cant){

    int i;
    float prom = 0;

    for (i=0; i<cant;i++){
        prom += p[i];
    }

    return (prom/cant);
}
