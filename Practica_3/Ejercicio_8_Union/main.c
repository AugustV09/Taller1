#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char apellido[30];
    char nombre[30];
    int legajo;
    int tipo;
    union ide{
        int dni;
        char pasaporte[20];
    } identidad;
}estudiante;


void leerEstudiante (estudiante *);
void imprimir (estudiante);

int main()
{
    estudiante e1,e2;
    leerEstudiante(&e1);
    imprimir(e1);
    leerEstudiante(&e2);
    imprimir(e2);
    return 0;
}

void leerEstudiante (estudiante *e){
    printf("Ingrese el Nombre del estudiante: ");
    scanf(" %s", e->nombre);
    printf("Ingrese el Apellido del estudiante: ");
    scanf(" %s", e->apellido);
    printf("Ingrese el legajo del estudiante: ");
    scanf(" %d", &e->legajo);
    printf("Ingrese 0 si el estudiante es extranjero o cualquier otro numero en caso contrario: ");
    scanf(" %d", &e->tipo);
    if (e->tipo){
        printf("Ingrese el DNI del estudiante: ");
        scanf(" %d", &e->identidad.dni);
    }
    else{
        printf("Ingrese el PASAPORTE del estudiante: ");
        scanf(" %s", e->identidad.pasaporte);
    }

}

void imprimir (estudiante e){
    if (e.tipo) printf("El estudiante %s %s, de legajo: %d y de DNI: %d\n", e.apellido, e.nombre, e.legajo, e.identidad.dni);
    else printf("El estudiante %s %s, de legajo: %d y de DNI: %s\n", e.apellido, e.nombre, e.legajo, e.identidad.pasaporte);
}
