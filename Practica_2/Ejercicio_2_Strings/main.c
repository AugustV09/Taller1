#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char palabra[100], corte[] = "XXX";
    int cant = 0;

    printf("Ingrese una palabra: ");
    scanf("%s", palabra);

    while (strcmp(palabra, corte)){
        if (palabra[strlen(palabra)-1] == 'o') cant++;
        printf("Ingrese una palabra: ");
        scanf("%s", palabra);
    }

    printf("La cantidad de palabras que terminan con la letra 'o' son: %d",cant);
    return 0;
}
