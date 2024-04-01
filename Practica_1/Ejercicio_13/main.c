#include <stdio.h>
#include <stdlib.h>

int primo(unsigned int);

int main()
{
    int contador = 5;
    int num;

    /*a)*/
    if (primo(101)) printf("Es primo");
    else printf("No es primo");
    printf("\n");

    /*b)*/
    while (contador){
        printf("Ingrese un numero: ");
        scanf("%d",&num);
        if (primo(num)){
            printf("%d es primo\n", num);
            --contador;
        }
    }
    return 0;
}

int primo (unsigned int x){
    int resultado = 1;
    int aux = 2;

    if (x > 1)
        while (aux < x){
            if ((x%aux++) == 0) resultado = 0;
        }
    else resultado = 0;

    return resultado;
}
