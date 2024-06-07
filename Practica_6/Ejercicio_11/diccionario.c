#include <stdio.h>
#include <stdlib.h>
#include "diccionario.h"
#include <string.h>

vectorDinamico d_crearDiccionario(){
    vectorDinamico vd;
    vd.cantidad = 0;
    vd.capacidad = 10;
    vd.palabras = (char**) malloc (vd.capacidad*sizeof(char*));
}

int d_agregarPalabra(vectorDinamico* vd, char * palabra){
    char ** palabras;
    if (vd->cantidad == vd->capacidad){
        (vd->capacidad) *=2;
        palabras = (char**) malloc((vd->capacidad)*sizeof(char*));
    }

    int ini = 0;
    int fin = vd->cantidad;
    int medio = (ini+fin)/2;
    int comp = strcmp((vd->palabras)[medio],palabra);

    while ((ini<fin) && comp){
        if (comp < 0) ini = medio +1;
        else fin = medio-1;
        medio = (ini + fin)/2;
        comp = strcmp((vd->palabras)[medio],palabra);
    }

    if (comp){
        if (comp < 0){  //La palabra en el arreglo es menor que la pasada, por ende, inserto adelante de medio

        }
        return 1;
    }
    return 0;
}
