#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *archivo = fopen("../Prctica-5---Recursos/apuestas.txt","r");

    if (archivo == NULL){
        printf("ERROR EN LA LECTURA\n");
        return 1;
    }

    int codigo;
    float apuesta, totalApuestas =0;

    fscanf(archivo,"%d|%f;", &codigo, &apuesta);
    while (!feof(archivo)){
        totalApuestas+=apuesta;
        fscanf(archivo,"%d|%f;", &codigo, &apuesta);

    }


    printf("El total de las apuestas es %f", totalApuestas);
    fclose(archivo);
    return 0;
}
