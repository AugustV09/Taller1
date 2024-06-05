#include <stdio.h>
#include <stdlib.h>
#define size 25

void imprimir(int * v, int s){
/*Que este escrito size hacia que se reemplace y el compilador no entendia que
haya un numero donde corresponde un identificador de parametro*/
    int i;
    for (i=0; i<s; i++){
        printf("v[%d]= %d", i, v[i]);
    }
}

int main(){
    int v[size];
    imprimir(v, size);
    return 0;
}
