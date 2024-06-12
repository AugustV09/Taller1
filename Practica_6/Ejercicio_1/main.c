#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * argv[]) {

    printf("\nargc = %d",argc);
    printf("\nargv[0] => %s",argv[0]);
    return 0;
}

/*Imprime argc = 1 porque solo recibe un parametro (porque estamos tratandolo por
defecto), el cual corresponde a la ruta del archivo .c en el que estamos trabajando*/
