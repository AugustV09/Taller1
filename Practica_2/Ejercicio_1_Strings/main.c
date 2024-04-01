#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char palabra[100], corte[]= "ZZZ";
    int cant =0;

    printf("Ingrese una palabra: ");
    scanf("%s", palabra);

    while (strcmp(palabra,corte))
    {
        if (strlen(palabra) == 5) cant++;
        printf("Ingrese una palabra: ");
        scanf("%s", palabra);
    }

    printf("La cantidad de palabras con 5 caracteres: %d", cant);
    return 0;
}
