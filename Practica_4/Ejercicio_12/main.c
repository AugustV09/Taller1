#include <stdio.h>
#include <stdlib.h>

void reservar (int**,int,int);
void inicializar (int*,int,int);
void impresion (int*,int,int);
void liberar (int**);

int main()
{
    int n,m;
    int *matriz;
    printf("Ingrese cantidad de filas: ");
    scanf("%d", &n);
    printf("Ingrese cantidad de columnas: ");
    scanf("%d", &m);
    reservar(&matriz,n,m);
    inicializar(matriz,n,m);
    impresion(matriz,n,m);
    liberar(&matriz);
    return 0;
}

void reservar (int **matriz,int n, int m){
    *matriz = (int *) malloc(n*m*sizeof(int));
}

void inicializar (int *matriz,int n,int m){
    int i,j;

    for (i=0; i<n; i++){
        for (j=0; j<m; j++){
            printf("Ingrese un numero en la posicion (%d,%d): ", i,j);
            scanf("%d", matriz+m*i+j);
        }
    }
}

void impresion (int *matriz, int n,int m){
    int i,j;

    for (i=0; i<n; i++){
        for (j=0; j<m; j++){
            if (*(matriz+m*i+j) % 3 == 0) printf("(%d,%d)", i,j);
        }
    }
}

void liberar (int ** matriz){
    free(*matriz);
    *matriz = NULL;
}
