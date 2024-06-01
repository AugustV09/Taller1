#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CANT 20

typedef struct {
    char nombre[30];
    char apellido[30];
    unsigned int edad;
    unsigned int titulos;
    unsigned int ranking;
    double fortuna;
} jugador;

typedef struct {
    char nombre[30];
    char apellido[30];
    int cantidad;
} maximo;

void leerJUgador(jugador*);

int main()
{
    FILE *f = fopen("../Prctica-5---Recursos/jugadores", "wb");
    jugador j;
    int i, cant;

    for (i=0; i<CANT; i++){
        leerJUgador(&j);
        fwrite(&j,sizeof(jugador),1,f);
    }
    fclose(f);

    f= fopen("../Prctica-5---Recursos/jugadores", "rb");

    maximo porRanking = {"0","0",999999}, porTitulos = {"0","0",0};

    cant = fread(&j, sizeof(jugador),1, f);
    while (cant){
        if (j.ranking<porRanking.cantidad){
            strcpy(porRanking.nombre,j.nombre);
            strcpy(porRanking.apellido,j.apellido);
            porRanking.cantidad = j.ranking;
        }
        if (j.titulos>porTitulos.cantidad){
            strcpy(porTitulos.nombre,j.nombre);
            strcpy(porTitulos.apellido,j.apellido);
            porTitulos.cantidad = j.titulos;
        }
        cant = fread(&j, sizeof(jugador),1, f);
    }
    fclose(f);

    printf("El jugador con mas titulos es %s %s.\n", porTitulos.nombre, porTitulos.apellido);
    printf("El jugador con mayor ranking es %s %s.\n", porRanking.nombre, porRanking.apellido);
    return 0;
}

void leerJUgador(jugador *j){
    printf("Ingrese nombre: ");
    scanf("%s", j->nombre);
    printf("Ingrese apellido: ");
    scanf("%s", j->apellido);
    printf("Ingrese edad: ");
    scanf("%u", &(j->edad));
    printf("Ingrese cantidad de titulos: ");
    scanf("%u", &(j->titulos));
    printf("Ingrese ranking: ");
    scanf("%u", &(j->ranking));
    printf("Ingrese fortuna: ");
    scanf("%lf", &(j->fortuna));
    printf("\n");
}
