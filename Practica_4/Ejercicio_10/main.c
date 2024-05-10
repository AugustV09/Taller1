#include <stdio.h>
#include <stdlib.h>

void reserva (double **, int);
void inicializacionA (double *);
double promedioA (double *);
void eliminar (double **);

void inicializacionB (double *);
double promedioB (double *);

int main()
{
    double *arreglo;
    int num;
    printf("Ingrese la cantidad de elementos: ");
    scanf("%d", &num);
    reserva(&arreglo, num);
    return 0;
}

void reserva (double **ar, int cant){
    *ar = (double *) malloc(cant*sizeof(double));
}
