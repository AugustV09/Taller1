#include <stdio.h>
#include <stdlib.h>
#include "istack.h"

Stack s_create (){
    return NULL;
}

int s_push(Stack* s, int n){
    Stack aux= (Stack) malloc (sizeof(nodo));
    aux->numero = n;
    aux->ant = (*s);
    (*s) = aux;
    return n;
}

int s_pop (Stack* s){
    int num = 0;
    if ((*s) != NULL){
        Stack aux = (*s);
        num = aux->numero;
        (*s) = (*s)->ant;
        free(aux);
    }
    return num;
}

int s_top (Stack s){
    if (s == NULL) return 0;
    return (s->numero);
}

int s_empty(Stack s){
    if (s == NULL) return 1;
    return 0;
}

int s_length(Stack s){
    int cant = 0;
    if (s != NULL){
        while (s != NULL){
            cant++;
            s = s->ant;
        }
    }

    return cant;
}
