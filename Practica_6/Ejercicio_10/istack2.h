#ifndef ISTACK_H_INCLUDED
#define ISTACK_H_INCLUDED

typedef struct _nodo {
    int numero;
    struct _nodo *ant;
} nodo;

typedef nodo* Stack;

typedef struct {
    Stack stc;
    int cant;
} StackOpt;


StackOpt s2_create (); /*– Retorna una nueva pila. Se debe invocar antes de
manipular cualquiera de ellas.*/
int s2_push(StackOpt* s, int n); /*– Apila n en s. Retorna el elemento apilado.*/
int s2_pop (StackOpt* s); /*– Desapila un elemento de s.*/
int s2_top (StackOpt s); /*– Retorna el próximo elemento que será desapilado.*/
int s2_empty(StackOpt s); /*– Retorna 1 si s está vacía, 0 en caso contrario.*/
int s2_length(StackOpt s); /*– Retorna la cantidad de elementos apilados en s.*/


#endif // ISTACK2_H_INCLUDED
