#include <stdio.h>
#include <stdlib.h>

typedef enum {LUN = 1, MAR, MIER, JUE, VIE, SAB, DOM} diasSemana;

void imprimir (int);
void imprimir2 (int);

int main()
{
    imprimir(1);
    imprimir2(1);
    return 0;
}

void imprimir (int dia){
    char *p []={"", "Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo"};
    printf("%s\n", p[dia]);
}

void imprimir2 (int dia){
    char *p []={"Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo"};
    printf("%s\n", p[dia-1]);
}

