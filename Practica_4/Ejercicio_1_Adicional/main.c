#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct _nodo{

    int entero;
    struct _nodo *sig;

} nodo;

typedef nodo* lista;

typedef struct _lista{

    int cant;
    lista inicio_lista;

}listaOpt;



void inicializar(listaOpt*);
void eliminar (listaOpt *);
void agregaralPrincipio (listaOpt*,int);
void agregaralFinal (listaOpt*,int);
void agregarOrdenado (listaOpt*, int);
int cantElementos (listaOpt);
void imprimirElementos (listaOpt);

int main()
{
    srand(time(NULL));
    int i,aux;
    listaOpt l;
    inicializar(&l);
    for (i=0; i<10;i++){
        aux= rand()%10;
        agregarOrdenado(&l,aux);
    }
    printf("Hay %d elementos\n", cantElementos(l));
    imprimirElementos(l);
    eliminar(&l);
    return 0;
}

void inicializar(listaOpt *l){
    l->inicio_lista = NULL;
    l->cant=0;
}

void eliminar (listaOpt *l){

    lista aux;
    while ((l->inicio_lista) != NULL){
        aux = l->inicio_lista;
        l->inicio_lista = l->inicio_lista->sig;
        free(aux);
    }
}

void agregaralPrincipio (listaOpt *l, int num){
    lista aux = (lista) malloc(sizeof(nodo));
    aux->entero=num;
    aux->sig=l->inicio_lista;
    l->inicio_lista = aux;
    l->cant++;
}

void agregaralFinal (listaOpt *l,int num){
    lista nodoNuevo = (lista) malloc(sizeof(nodo));
    nodoNuevo->entero= num;
    nodoNuevo->sig=NULL;

    if ((l->inicio_lista) != NULL){
        lista aux = l->inicio_lista;
        while (aux->sig != NULL){
            aux = aux->sig;
        }
        aux->sig = nodoNuevo;
    }
    else l->inicio_lista = nodoNuevo;

    l->cant++;
}

void agregarOrdenado (listaOpt *l, int num){
    printf("%d\n",num);

    lista aux = (lista) malloc(sizeof(nodo));
    aux->entero = num;


    if ((l->inicio_lista == NULL) || (l->inicio_lista->entero >= num)){

        aux->sig=l->inicio_lista;
        l->inicio_lista = aux;
    }

    else{

        lista act = l->inicio_lista, ant;

        while((act != NULL) && (act->entero < num)){
            printf("act: %p - act.sig: %p - %d < %d\n", act, act->sig, act->entero,num);
            ant = act;
            act = act->sig;
        }

        ant->sig = aux;
        aux->sig = act;
    }

    l->cant++;

}

int cantElementos (listaOpt l){
    return l.cant;
}

void imprimirElementos (listaOpt l){
    while ((l.inicio_lista) != NULL){
        printf("%d",(l.inicio_lista)->entero);
        l.inicio_lista = (l.inicio_lista)->sig;
        if (l.inicio_lista != NULL) printf(", ");
    }
}


