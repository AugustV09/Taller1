#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *archivo = fopen("../Prctica-5---Recursos/precipitaciones.txt","r");

    if (archivo == NULL){
        printf("ERROR EN LA LECTURA\n");
        return 1;
    }

    int mayorPre = -99, maxDia, prec,dia=1;

    fscanf(archivo, "%d-",&prec);
    while (!feof(archivo)){
        if (prec>mayorPre){
             mayorPre=prec;
             maxDia=dia;
        }
        dia++;
        fscanf(archivo, "%d-",&prec);
    }

    printf("El dia del mes con mas precipitaciones fue %d",maxDia);
    fclose(archivo);
    return 0;
}
