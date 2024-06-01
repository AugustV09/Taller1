#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LONG 30
#define CORTE "ZZZ"

typedef struct {
    char nombre[LONG];
    char apellido[LONG];
    unsigned int edad;
    unsigned int titulos;
    unsigned int ranking;
    double fortuna;
} jugador;

int modificarJugador(char*, char*, int);
void leerEntrada(char*,char*, int*);
void imprimirJugador(jugador j);

int main()
{
    char nombre[LONG], apellido[LONG];
    int rank;
    leerEntrada(nombre,apellido,&rank);
    while (strcmp(nombre,CORTE)){
        if (!modificarJugador(nombre,apellido,rank)) printf("ERROR EN EL PREVIO INTENTO DE MODIFICACION\n");
        leerEntrada(nombre,apellido,&rank);
    }

    jugador j;
    FILE *f =fopen("../Prctica-5---Recursos/jugadores", "rb");
    int cant = fread(&j,sizeof(jugador),1,f);
    while (cant){
        imprimirJugador(j);
        cant = fread(&j,sizeof(jugador),1,f);
    }
    fclose(f);
    return 0;
}


int modificarJugador(char *nombre, char *apellido, int ranking){

    FILE *f = fopen("../Prctica-5---Recursos/jugadores", "rb+");
    if (f == NULL) return 0;

    jugador j;
    int reemplazo = 0 , cant = fread(&j, sizeof(jugador),1,f);
    while (cant && !reemplazo){
        if (!strcmp(j.nombre,nombre) && !strcmp(j.apellido,apellido)){
            reemplazo = 1;
            j.ranking = ranking;
            fseek(f,-sizeof(jugador),SEEK_CUR);
            fwrite(&j,sizeof(jugador),1,f);
        }
        else cant = fread(&j,sizeof(jugador),1,f);
    }
    fclose(f);
    return reemplazo;
}

void leerEntrada(char *nombre,char *apellido, int *rank){
    printf("Ingrese nombre (Corte - ZZZ): ");
    scanf("%s", nombre);
    if (strcmp(nombre,CORTE)){
        printf("Ingrese apellido: ");
        scanf("%s", apellido);
        printf("Ingrese el ranking: ");
        scanf("%d",rank);
    }
    printf("\n");
}

void imprimirJugador(jugador j){

    printf("Nombre: %s\n",j.nombre);
    printf("Apellido: %s\n",j.apellido);
    printf("edad: %u\n",j.edad);
    printf("titulos: %u\n",j.titulos);
    printf("Ranking: %u\n",j.ranking);
    printf("Fortuna: %.2lf\n",j.fortuna);
}
