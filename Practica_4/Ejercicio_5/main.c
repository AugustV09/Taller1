#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ORACIONES 10

void minMayus (char *);

int main()
{
    int cant = 100,i;
    char *p = (char *) calloc(cant, sizeof(char));

    for (i = 0; i<ORACIONES; i++){
        printf("Ingrese una oracion: \n");
        fgets(p,cant,stdin);
        minMayus(p);
    }

    free(p);

    return 0;
}

void minMayus (char *p){
    int mayus =0, minus =0,i;
    for (i=0; p[i];i++){
        if ((p[i]>= 'a') && (p[i]<='z')) minus++;
        if ((p[i]>= 'A') && (p[i]<='Z')) mayus++;
    }

    printf("La oracion tiene %d minusculas y %d mayusculas\n", minus, mayus);
}
