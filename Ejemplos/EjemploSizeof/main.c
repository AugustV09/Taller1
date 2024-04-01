#include <stdio.h>

int main()
{
    char car;
    int entero;
    float flotante;
    double doble;
    long double gran_doble;

    printf("El caracter ocupa %d\n", sizeof(car));
    printf("El entero ocupa %d\n", sizeof(entero));
    printf("El flotante ocupa %d\n", sizeof(flotante));
    printf("El doble ocupa %d\n", sizeof(doble));
    printf("El gran_doble ocupa %d", sizeof(gran_doble));
    return 0;
}
