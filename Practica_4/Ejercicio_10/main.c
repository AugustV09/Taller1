#include <stdio.h>
#include <stdlib.h>

void reserva (double **, int);
void inicializacionA (double *,int);
double promedioA (double *, int);
void eliminar (double **);

void inicializacionB (double *, int);
double promedioB (double *, int);

int main()
{
    double *arreglo;
    int num;
    printf("Ingrese la cantidad de elementos: ");
    scanf("%d", &num);
    reserva(&arreglo, num);
    inicializacionA(arreglo, num);
    inicializacionB(arreglo, num);
    printf("%lf",promedioA(arreglo, num));
    promedioB(arreglo, num);
    return 0;
}

void reserva (double **ar, int cant){
    *ar = (double *) malloc(cant*sizeof(double));
}

void eliminar (double **ar){
    free(*ar);
    *ar = NULL;
}

void inicializacionA(double *ar, int num){
    int i;
    for (i =0; num; i++,num--){
        printf("Ingrese un numero: ");
        scanf("%lf", (ar+i));
    }
}

void inicializacionB(double *ar, int num){
    int i;
    for (i =0; num; i++,num--){
        printf("Ingrese un numero: ");
        scanf("%lf", &ar[i]);
    }
}

double promedioA(double *ar, int cant){
    double promedio = 0;
    int i;

    for (i=0; i < cant; i++){
        promedio += *(ar+i);
    }

    promedio /= cant;
    return promedio;
}

double promedioB(double *ar, int cant){
    double promedio = 0;
    int i;

    for (i=0; i < cant; i++){
        promedio += ar[i];
    }

    promedio /= cant;
    return promedio;
}
