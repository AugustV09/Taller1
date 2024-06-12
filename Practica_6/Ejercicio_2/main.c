#include <stdio.h>
#include <stdlib.h>
#define CANT 5

int main(int argc, char * argv[])
{
    if (argc < CANT){
        printf("INSUFICIENTES ARGUMENTOS\n");
        return 1;
    }

    int suma = 0, i;

    for (i =1; i<CANT; i++){
        suma+= atoi(argv[i]);
    }

    printf("El promedio de los 4 numeros ingresados corresponde: %.2f", (float) suma / (CANT - 1));
    return 0;
}
