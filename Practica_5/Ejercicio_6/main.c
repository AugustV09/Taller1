#include <stdio.h>
#include <stdlib.h>
#define CANT_ET 3
#define CANT 50

void crearMatriz (double***, int, int);
void inicializar (double**, int, int);
void liberar (double ***, int, int);

int main()
{
    FILE *ar_read = fopen("../Prctica-5---Recursos/vinos.csv", "r");
    if (ar_read == NULL){
        printf("ERROR EN LA LECTURA\n");
        return 1;
    }

    FILE *ar_write = fopen("../Prctica-5---Recursos/reporte_vinos.txt", "w");

    if (ar_write == NULL){
        printf("ERROR EN LA LECTURA\n");
        return 1;
    }

    int max_col = 8, i,j, cantFilas=0;
    char *etiquetas[CANT_ET] = {"Promedio", "Minimo", "Maximo"}, columna[CANT];
    double **valores, valor_aux;
    crearMatriz(&valores, CANT_ET, max_col);
    inicializar(valores, CANT_ET, max_col);



    fprintf(ar_write, "Atributo\t");
    for(i=0; i<max_col; i++){
        fscanf(ar_read,"%[^;];",  columna);
        fprintf(ar_write, "%s\t",columna);
    }
    fprintf(ar_write, "\n");
    fgets(columna, CANT, ar_read);


    fscanf(ar_read,"%lf;", &valor_aux);
    while (!feof(ar_read)){

        for(i=0; i<max_col; i++){
            valores[0][i]+=valor_aux;
            if (valor_aux<valores[1][i]) valores[1][i]=valor_aux;
            if (valor_aux>valores[2][i]) valores[2][i]=valor_aux;
            fscanf(ar_read,"%lf;", &valor_aux);
        }

        cantFilas++;
        fgets(columna, CANT, ar_read);
        fscanf(ar_read,"%lf;", &valor_aux);
    }


    for (i=0; i<max_col; i++){
        valores[0][i] /= cantFilas;
    }

    for(i=0; i<CANT_ET; i++){
        if (i==0) fprintf(ar_write, "%s\t", etiquetas[i]);
        else fprintf(ar_write, "%s\t\t", etiquetas[i]);

        for(j=0; j<max_col; j++){
            fprintf(ar_write, "%lf\t", valores[i][j]);
        }
        fprintf(ar_write, "\n");
    }

    liberar(&valores, CANT_ET, max_col);
    fclose(ar_read);
    fclose(ar_write);
    return 0;
}

void crearMatriz (double ***m, int f, int col){
    int i;
    *m = (double **) malloc(f*sizeof(double *));

    for(i=0; i<f; i++){
        (*m)[i] = (double *) malloc (col*sizeof(double));
    }

}

void inicializar(double **m, int f, int col){
    int i,j;
    for (i=0; i<f; i++){
        for(j=0; j<col; j++){
            if (i!=1) m[i][j]=0;
            else m[i][j] = 1000000;
        }
    }
}

void liberar (double ***m, int f, int col){
    int i;
    for(i=0; i<f;i++){
        free((*m)[i]);
    }

    free(*m);

    *m = NULL;
}

