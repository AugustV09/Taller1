#include <stdio.h>
#include <stdlib.h>
#define CANT_DATOS 10

int main()
{
    /*int *datos[CANT_DATOS]={0};
    opcion4(datos);*/
    int j =15;

    printf("%d",(int)(j*1.3)); //Si no casteo, la operacion me va a dar cualquier cosa porque el printf no castea por si solo
    return 0;
}

void opcion1(int datos[]){
    int i;
    for (i=0; i<CANT_DATOS; i++){
        datos[i] = datos[i]*0.5;
    }
}
//La funcion divide a la mitad todos los numeros del vector datos. Primero multiplica por 0.5 y despues castea a INT.

void opcion2(int *datos){
    int i;
    for (i=0; i<CANT_DATOS; i++){
        (*datos++) = (*datos)/2;
    }
}
/*La funcion divide a la mitad todos los elementos a los que apunte datos (se supone que datos contiene la direccion
 de un vector de enteros). Me da warning porque al compilador no le gusta que hagas el datos++ en la misma asignacion
ya que pude suponer que accedas a una posicion en memoria indefinida*/

void opcion3(int *datos){
    int i;
    for (i=0; i<CANT_DATOS; i++, datos++){
        *datos= *datos*0.5;
    }
}
/*La funcion divide a la mitad todos los elementos a los que apunte datos (se supone que datos contiene la direccion
 de un vector de enteros) pero no da warning porque el incremento de datos se da aprte en otra instruccion*/

void opcion4(int datos[]){
    int i;
    for (i=0; i<CANT_DATOS; i++){
        *datos++= *datos/2;
    }
}
/*La funcion divide a la mitad todos los elementos del vector datos pero da warning porque me desplazo en el vector
utilizando datos como un puntero e incrementando en la misma asignacion. LOS VECTORES COMO PARAMETROS NO SON PUNTEROS
CONSTANTES*/

void opcion5(int datos[]){
 void opcion6(int *datos){
int i;
for (i=0; i<CANT_DATOS; i++){
*datos= *datos++*0.5;
}
}   int i;
    for (i=0; i<CANT_DATOS; i++, datos--){
        *datos++= *datos++*0.5;
    }
}
/*La funcion divide a la mitad todos los elementos del vector datos pero da warning porque me desplazo en el vector
utilizando datos como un puntero e incrementando en la misma asignacion (el doble incremento en la asignacion en
realidad es solo uno porque luego se decrementa en las acciones posteriores del for). LOS VECTORES COMO PARAMETROS NO
SON PUNTEROS CONSTANTES*/

void opcion6(int *datos){
    int i;
    for (i=0; i<CANT_DATOS; i++){
        *datos= *datos++*0.5;
    }
}

/*La funcion divide a la mitad todos los elementos a los que apunta datos (se supone que datos contiene la direccion
 de un vector de enteros) pero da warning porque me desplazo en el vector utilizando datos como un puntero e
 incrementando en la misma asignacion*/

void opcion7(int datos[]){
    int i;
    for (i=0; i<CANT_DATOS; i++){
        datos[i]= *(datos+i)*0.5;
    }
}

/*La funcion divide a la mitad todos los elementos del vector datos pero no da warning ya que no se incrementa la posicion
de datos en la misma asignacion de datos*/

void opcion8(int *datos){
    int i;
    for (i=0; i<CANT_DATOS; i++){
        *(datos+i)= datos[i]/2;
    }

}

/*La funcion divide a la mitad todos los elementos a los que apunta datos (se supone que datos contiene la direccion
 de un vector de enteros) y no da warning porque el desplazamiento lo hago sin asignacion y porque puedo usar un
 puntero como si fuera un vector*/


