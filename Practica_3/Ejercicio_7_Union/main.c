#include <stdio.h>
#include <stdlib.h>

typedef struct{ //CAMPO DE BITS
    unsigned int dia:5;
    unsigned int mes:6;
    unsigned int anio:21;
}fecha;

typedef struct{
    unsigned char dia;
    unsigned char mes;
    unsigned short int anio;
}fecha_bien;

typedef union{
    fecha_bien f;
    int comp;
} fecha_comp;

int main()
{
    fecha_comp a={30,12,2012},b={30,12,2012}; //lo que hace esta linea es asginar la llave entera a la primera estructura que encuentre o asigna el primer numero de las llaves al primer entero que encuentre

    if (a.comp ==b.comp)
        printf("%d/%d/%d",a.f.dia, a.f.mes, a.f.anio);
    return 0;
}

/*La comparacion de igualdad va a ser siempre correcta sin importar la arquitectura pero las comparaciones de mayor o menor
si van a cambiar dependiendo de si la arequitectura es Big-Endian o Little-Endian ya que en una el dia va a tener los bits
mas significativos y en otro los va a tener el año*/
