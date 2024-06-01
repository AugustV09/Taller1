#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *archivo_read = fopen("../Prctica-5---Recursos/archivo_para_7.txt", "r");

    if (archivo_read == NULL){
        printf("ERROR EN LA LECTURA\n");
        return 1;
    }
    //A)
    FILE *arc1 = fopen("../Prctica-5---Recursos/archivo_para_7_escribir_1.txt", "w");

    if (arc1 == NULL){
        printf("ERROR EN LA LECTURA\n");
        return 1;
    }

    int car = fgetc(archivo_read);
    while (!feof(archivo_read)){
        fputc(car, arc1);
        car = fgetc(archivo_read);
    }

    fseek(archivo_read,0,SEEK_SET);

    fclose(arc1);

    //B)
    FILE *arc2 = fopen("../Prctica-5---Recursos/archivo_para_7_escribir_2.txt", "w");

    if (arc2 == NULL){
        printf("ERROR EN LA LECTURA\n");
        return 1;
    }

    char linea[300];

    fgets(linea,300,archivo_read);
    while (!feof(archivo_read)){
        fputs(linea, arc2);
        fgets(linea,300,archivo_read);
    }

    fseek(archivo_read,0,SEEK_SET);

    fclose(arc2);

    //C)
    FILE *arc3 = fopen("../Prctica-5---Recursos/archivo_para_7_escribir_3.txt", "wb");

    if (arc3 == NULL){
        printf("ERROR EN LA LECTURA\n");
        return 1;
    }

    int cant = fread(linea,sizeof(char),300,archivo_read);
    while (cant){
        /*Se recomienda leer asi con los archivos binarios porque, a diferencia de los demas, el fread no tiene que hacer una lectura más sobre el EOF
        para que FEOF() establezca que hay que cortar con el respectivo while. Eso hace que el patron que usamos con fgets(), por ejemplo, no funciona
        si usamos fread().*/
        fwrite(linea,sizeof(char),cant,arc3);
        cant=fread(linea,sizeof(char),300,archivo_read);
    }

    fclose(arc3);
    fclose(archivo_read);
    return 0;
}
