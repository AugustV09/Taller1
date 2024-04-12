#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char apellido[30];
    char nombre[30];
    int legajo;
    int dni;
}estArg;


typedef struct{
    char apellido[30];
    char nombre[30];
    int legajo;
    char pasaporte[20];
}estExt;

typedef union{
    estArg est1;
    estExt est2;
} estudiante;

void leerEstudiante (estudiante *);
void imprimir (estudiante);

int main()
{
    estudiante e1,e2;
    leerEstudiante(&e1);
    imprimir(e1)
    leerEstudiante(&e2);
    imprimir(e2);
    return 0;
}

void leerEstudiante (estudiante *e){
    printf("Ingrese el ")
}
