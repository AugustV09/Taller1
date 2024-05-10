#include <stdio.h>
#include <stdlib.h>

void reservaTri (int ***,int);
void inicializacionTri (int **, int);
void impresionTri (int **, int);
void liberarTri (int ***, int);

int main()
{
    srand(3);
    int **m;
    int n;
    printf("Ingrese el orden de la matriz: ");
    scanf("%d", &n);
    reservaTri(&m,n);
    inicializacionTri(m,n);
    impresionTri(m,n);
    liberarTri(&m,n);
    return 0;
}

void reservaTri (int ***matriz, int n){
    *matriz = (int **) malloc (n*sizeof(int *));

    int i;
    for (i=0; i<n; i++){
        *((*matriz)+i) = (int *) malloc ((i+1)*sizeof(int));
    }
}

void inicializacionTri (int **matriz, int n){
    int i,j;

    for (i=0; i<n; i++){
        /*/La condicion de este FOR (j<=i) se basa en que en la fila 0 tengo un elemento, en la fila 1 tengo 2 elementos, etc. Es decir, se ejecuta siempre y cuando el valor de j sea menor o igual
        al valor de i, repitiendo eso por fila y aumentando el valor de i y, por ende, hasta donde llega j*/
        for (j=0; j<= i; j++){
            matriz[i][j] = rand()%21;
        }
    }
}

void impresionTri (int **matriz, int n){
    int i,j;

    for (i=0; i<n; i++){
        for (j=0; j<=i; j++) printf("%5d", matriz[i][j]);   //La logica de la condicion de este FOR es la misma que con la INICIALIZACION
        for (; j<n; j++) printf("%5d",0);
        printf("\n");
    }

}

void liberarTri (int ***matriz, int n){
    int i;

    for (i=0; i<n; i++){
        free(*((*matriz)+i));
        *((*matriz)+i) = NULL;
    }

    free(*matriz);
    *matriz = NULL;
}

