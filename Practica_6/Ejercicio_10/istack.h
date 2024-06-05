#ifndef ISTACK_H_INCLUDED
#define ISTACK_H_INCLUDED

Stack* s_create () – Retorna una nueva pila. Se debe invocar antes de
manipular cualquiera de ellas.
b. int s_push(stack* s, int n) – Apila n en s. Retorna el elemento apilado.
c. int s_pop (stack* s) – Desapila un elemento de s.
d. int s_top (stack s) – Retorna el próximo elemento que será desapilado.
e. int s_empty(stack s) – Retorna 1 si s está vacía, 0 en caso contrario.
f. int s_length(stack s) – Retorna la cantidad de elementos apilados en s.

#endif // ISTACK_H_INCLUDED
