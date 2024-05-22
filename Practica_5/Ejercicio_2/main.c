#include <stdio.h>
#include <stdlib.h>


int main()
{
    FILE *archivo;
    char car;
    int min=0, mayus=0,dig=0;

    archivo = fopen("../Prctica-5---Recursos/prueba.txt","r");
    if (archivo == NULL){
        printf("ERROR EN LA LECTURA\n");
        return 1;
    }

    fscanf(archivo, "%c", &car);
    while (!feof(archivo)){
        if (car>='a' && car<='z') min++;
        else if (car>='A' && car<='Z') mayus++;
        else if (car>='0' && car<='9') dig++;
        fscanf(archivo, "%c", &car);
    }

    printf("Min: %d\nMayus: %d\nDig: %d",min,mayus,dig);
    fclose(archivo);

    return 0;
}
