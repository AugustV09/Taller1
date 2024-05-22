#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LONG 50
#define CORTE "ZZZ"

typedef struct _nodo{
    char * palabra;
    struct _nodo * sig;
} nodo;

typedef nodo* lista;

typedef struct _listaOpt{
    lista inicial;
    lista fin;
} listaOpt;

void agregarFinal (listaOpt*, char*);
int buscar (listaOpt, char*);
void liberar (listaOpt*);

int main()
{
    FILE *archivo = fopen("../Prctica-5---Recursos/DICCIONARIO.txt", "r");
    if (archivo == NULL){
        printf("ERROR EN LA LECTURA\n");
        return 1;
    }

    listaOpt l = {NULL,NULL};
    char palDic[LONG];

    fscanf(archivo, "%s", palDic);
    while (!feof(archivo)){
        agregarFinal(&l, palDic);
        fscanf(archivo, "%s", palDic);
    }
    fclose(archivo);

    printf("Ingrese una palabra: ");
    scanf("%s", palDic);
    while (strcmp(palDic,CORTE)){
        if (buscar(l,palDic)) printf("La palabra se encuentra en el diccionario.\n");
        else printf("La palabra no se encuentra en el diccionario.\n");
        printf("Ingrese una palabra: ");
        scanf("%s", palDic);
    }

    liberar(&l);
    return 0;
}

void agregarFinal(listaOpt *l, char *palDic){

    lista nodoNuevo = (lista) malloc(sizeof(nodo));
    nodoNuevo->palabra = (char*) malloc((strlen(palDic)+1)*sizeof(char));
    strcpy(nodoNuevo->palabra,palDic);
    nodoNuevo->sig = NULL;

    if (l->inicial == NULL){
        l->inicial = l->fin = nodoNuevo;
    }
    else{
        l->fin->sig = nodoNuevo;
        l->fin = nodoNuevo;
    }
}

int buscar (listaOpt l, char* palDic){

    while (l.inicial != NULL){
        if (!strcmp(l.inicial->palabra, palDic)) return 1;
        l.inicial = l.inicial->sig;
    }

    return 0;
}

void liberar (listaOpt *l){
    lista aux;

    while (l->inicial != NULL){
        aux = l->inicial;
        l->inicial = l->inicial->sig;
        free(aux->palabra);
        free(aux);
    }

    l->fin = NULL;
}
