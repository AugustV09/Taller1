#include <stdio.h>
#include <stdlib.h>
#define CANT_DATOS 10

int main()
{
    /*int *datos[CANT_DATOS]={0};
    opcion4(datos);*/
    int j =15;

    printf("%d",j*85.2);
    return 0;
}

void opcion1(int datos[]){
    int i;
    for (i=0; i<CANT_DATOS; i++){
        datos[i] = datos[i]*0.5;
    }
}
//0.5 se trunca a 0 porque un entero no se puede multiplicar por un decimal y guradarse como un entero. No da errores o warnings

void opcion2(int *datos){
    int i;
    for (i=0; i<CANT_DATOS; i++){
        (*datos++) = (*datos)/2;
    }
}
/**datos++ se supone que constituye un puntero a un vector de enteros, que se va a ir desplazando en posiciones mientras divide por 2 los elementos del vector. El problema es que
el compilador solo sabe que es un puntero y te avisa que la operacion aplicada al puntero tal vez este indefinida porque no sabe que es un vector y que se supone siempre apunte a enteros*/

void opcion3(int *datos){
    int i;
    for (i=0; i<CANT_DATOS; i++, datos++){
        *datos= *datos*0.5;
    }
}
/*Multiplica por 0 a lo que apunta datos, lo cual se supone que es un vector, y no da Warning en este caso porque el desplazamiento del puntero se da por separado en el for*/

void opcion4(int datos[]){
    int i;
    for (i=0; i<CANT_DATOS; i++){
        *datos++= *datos/2;
    }
}
//PREGUNTAR POR QUE NO DA ERROR SI LE ASIGNA EL +1 A DATOS Y ESTE ES UN VECTOR

void opcion5(int datos[]){
    int i;
    for (i=0; i<CANT_DATOS; i++, datos--){
        *datos++= *datos++*0.5;
    }
}
//PREGUNTAR POR QUE NO DA ERROR SI LE ASIGNA EL +1 A DATOS Y ESTE ES UN VECTOR

