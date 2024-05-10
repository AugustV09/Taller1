#include <stdio.h>
#include <stdlib.h>

typedef struct listaEnlazada{
    int entero;
    struct listaEnlazada *sig;
} nodo;

typedef nodo* lista;

void inicializar(lista*);
void eliminar (lista *);
void agregaralPrincipio (lista*,int);
void agregaralFinal (lista*,int);
int cantElementos (lista);
void imprimirElementos (lista);
void eliminarCoincidencias(lista*,int);

int main()
{
    int num;
    lista l;
    inicializar(&l);
    printf("Ingrese un numero entero desde teclado: ");
    scanf("%d", &num);
    while (num){
        agregaralPrincipio(&l,num);
        printf("Ingrese un numero entero desde teclado: ");
        scanf("%d", &num);
    }
    imprimirElementos(l);
    printf("\n");
    printf("Ingrese otro numero entero desde teclado: ");
    scanf("%d", &num);
    printf("%d\n",num);
    eliminarCoincidencias(&l,num);
    imprimirElementos(l);
    return 0;
}

void inicializar(lista *l){
    *l = NULL;
}

void eliminar (lista *l){

    lista aux;
    while ((*l) != NULL){
        aux = *l;
        (*l) = aux->sig; //Es equivalente a (*l)->sig;
        free(aux);
    }
}

void agregaralPrincipio (lista *l, int num){
    lista aux = (lista) malloc(sizeof(nodo));
    aux->entero=num;
    aux->sig=*l;
    *l = aux;
}

void agregaralFinal (lista *l,int num){
    lista nodoNuevo = (lista) malloc(sizeof(nodo));
    nodoNuevo->entero= num;
    nodoNuevo->sig=NULL;

    if ((*l) != NULL){
        lista aux = *l;
        while (aux->sig != NULL){
            aux = aux->sig;
        }
        aux->sig = nodoNuevo;
    }
    else *l = nodoNuevo;
}

int cantElementos (lista l){
    int cant =0;
    while (l != NULL){
        cant++;
        l = l->sig;
    }

    return cant;
}

void imprimirElementos (lista l){
    while (l != NULL){
        printf("%d",l->entero);
        l = l->sig;
        if (l != NULL) printf(", ");
    }
}

void eliminarCoincidencias(lista* l, int num){
    lista aux, aux2, aux3;

    while (( (*l) != NULL)  && ((*l)->entero % num == 0) ){
        aux = *l;
        *l = aux->sig;
        free(aux);
    }

    aux = *l;

    while (aux != NULL){

        if (aux->entero % num == 0){
            aux2= aux;
            aux = aux->sig;
            aux3->sig = aux;
            free(aux2);
        }

        else{
            aux3 = aux;
            aux = aux->sig;
        }
    }
}

