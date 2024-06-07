#include <stdio.h>
#include <stdlib.h>
#include "istack2.h"

StackOpt s2_create (){
    StackOpt s = {NULL, 0};
    return s;
}

int s2_push(StackOpt* s, int n){
    Stack aux= (Stack) malloc (sizeof(nodo));
    aux->numero = n;
    aux->ant = s->stc;
    (s->stc) = aux;
    (s->cant)++;
    return n;
}

int s2_pop (StackOpt* s){
    int num = 0;
    if ((s->stc) != NULL){
        Stack aux = (s->stc);
        num = aux->numero;
        (s->stc) = (s->stc->ant);
        free(aux);
    }
    return num;
}

int s2_top (StackOpt s){
    if (s.cant == 0) return 0;
    return (s.stc->numero);
}

int s2_empty(StackOpt s){
    if (s.cant == 0) return 1;
    return 0;
}

int s2_length(StackOpt s){
    return s.cant;
}

