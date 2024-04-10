#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char calle[50];
    char ciudad[50];
    int codigo_postal;
    char pais [40];
} direccion;

typedef struct{
    char apellido[50];
    char nombre [50];
    char legajo [8];
    float promedio;
    direccion domicilio;
} alu;

typedef alu alumno;

typedef struct{
    char *nombre;
    char *apellido;
    float promedio;
} max_alum;

void inicializarAlumno(alumno *);
void inicializarDireccion(direccion *);

int main()
{
    int i;
    const int dimf = 30;
    alumno alumnos[dimf];

    for (i=0; i<dimf;i++){
        inicializarAlumno(alumnos[i]);
    }

    max_alum maximo = {,,-1};

    for (i =0; i<dimf; i++){
        if (alumnos[i].promedio>max_alum.promedio){
            max_alum.promedio = alumnos[i].promedio;
            max_alum.apellido = alumnos[i].apellido;
            max_alum.nombre = alumnos[i].nombre;
        }
    }

    return 0;
}

void inicializarAlumno(alumno *alum){
    printf("Ingrese Nombre: ");
    scanf(" %s", alum->nombre);
    printf("Ingrese apellido: ");
    scanf(" %s", alum->apellido);
    printf("Ingrese legajo: ");
    scanf(" %s", alum->legajo);
    printf("Ingrese promedio: ");
    scanf(" %f", &alum->promedio);
    inicializarDireccion (&alum->domicilio);
}

void inicializarDireccion(direccion *d){
    printf("Ingrese Calle: ");
    scanf(" %s", d->calle);
    printf("Ingrese ciudad: ");
    scanf(" %s", d->ciudad);
    printf("Ingrese pais: ");
    scanf(" %s", d->pais);
    printf("Ingrese codigo postal: ");
    scanf(" %d", &d->codigo_postal);

}

