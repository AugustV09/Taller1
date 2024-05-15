#include <stdio.h>
#include <stdlib.h>

void crearPiramide (int ***,int);
void imprimirPiramide (int **, int);
void destruirPiramide (int ***, int);

int main()
{
    int **piramide,n;
    printf("Ingrese la cantidad de filas de la piramide de pascal: ");
    scanf("%d", &n);
    crearPiramide(&piramide,n);
    imprimirPiramide(piramide,n);
    return 0;
}


void crearPiramide(int ***piramide, int n){
    int i,j;

    *piramide = (int **) malloc(n*sizeof(int *));
    for(i=0; i<n; i++){
        *((*piramide)+i) = (int *) malloc ((i+1)*sizeof(int));
    }

    for (i=0; i<n; i++){
        j=1;
        (*piramide)[i][j-1] = 1;    //Pongo un 1 en la primera posicion de cada fila de la piramide

        for (; j<i; j++){   //Este FOR solo se mueve entre los dos unos de cada fila (SIEMPRE Y CUANDO HAYA MAS DE 2 ELEMENTOS EN LA FILA)

            (*piramide)[i][j] = (*piramide)[i-1][j-1] + (*piramide)[i-1][j];

        }

        if (j<(i+1))(*piramide)[i][j] = 1;    //Pongo un 1 en la ultima posicion de cada fila de la piramide
    }
}

void imprimirPiramide (int **piramide, int n){
    int i,j,k;
    for (i=0; i<n; i++){
        j=1;
        printf("%d)",i);
        for(k=i; k<n; k++ )printf("  ");    //Esto es para dejar los espacios y que se note la piramide
        printf("%5d",1);
        for (; j<i; j++){
            printf("%5d ",piramide[i][j]);
        }
        if (j<(i+1))printf("%5d\n",1);
        else printf("\n");
    }
}

void destruirPiramide (int ***piramide, int n){
    int i;
    for (i=0; i<n; i++){
        free(*((*piramide)+i));
    }

    free(*piramide);
    *piramide = NULL;
}

