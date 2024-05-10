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

int main()
{
    int num;
    lista ordenIngresado, ordenInvertido, aux;
    inicializar(&ordenIngresado);
    inicializar(&ordenInvertido);
    printf("Ingrese un numero entero positivo desde teclado: ");
    scanf("%d", &num);
    while (num){
        agregaralFinal(&ordenIngresado,num);
        printf("Ingrese un numero enteropositivodesde teclado: ");
        scanf("%d", &num);
    }

    aux = ordenIngresado;
    while (aux != NULL){
        agregaralPrincipio(&ordenInvertido, aux->entero);
        aux = aux->sig;
    }
    printf("La lista de numeros ordenados por ingreso tiene %d elementos y corresponde a \n", cantElementos(ordenIngresado));
    imprimirElementos(ordenIngresado);
    printf("\n");
    printf("La lista de numeros ordenados inversamente por ingreso tiene %d elementos y corresponde a \n", cantElementos(ordenInvertido));
    imprimirElementos(ordenInvertido);
    eliminar(&ordenIngresado);
    eliminar(&ordenInvertido);
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


