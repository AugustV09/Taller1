#include <stdio.h>

int main()
{
  int x[5]={1,2,3,4,5};
    int * p = x;

    printf("La direccion memoria de p es %p \n", &p);  //Posicion en memoria de p
    printf("La direccion la que apunta p es %p \n", p); //Posicion en memoria del primer elemento del vector
    printf("El valor al que apunta p es %d \n", *p);  //Valor al que apunta p (primer valor del vector)

    p++; /*Incrementar en uno el valor de p hace que el puntero se desplace todos los bytes que ucope el tipo de dato al que apunta, lo cual permite que apunte al siguiente entero (en este caso)*/

    printf("La direccion memoria de p ahora es %p \n", &p); //Posicion en memoria de p
    printf("La direccion la que apunta p ahora es %p \n", p); //Posicion en memoria del segundo elemento del vector
    printf("El valor al que apunta p ahora es %d \n", *p); //Valor al que apunta p (siguiente valor del vector)


    /*Cabe recalcar que las direcciones en memoria son de 64 bits u 8 bytes; que cada posicion en memoria ocupa 8 bits u 1 byte; y que es necesaria una gran cantidad de RAM para utilizar todas las
    direcciones por completo*/

    return 0;
}
