#include <stdio.h>
#include <stdlib.h>

int esPalindromo (char[]);
int esPalindromo2 (char[]);

int main()
{
    char palabra[]="plya";
    printf("%d",esPalindromo2(palabra));
    return 0;
}

int esPalindromo (char palabra[]){
    int ini=0, fin = strlen(palabra)-1, resultado=1;

    while ((resultado) && (ini<fin))
        if((palabra[ini++]) != (palabra[fin--])) resultado=0;

    return resultado;

}

// int * a; a++;
// float * g; g+1;

int esPalindromo2 (char palabra[]){
    char *ini=&palabra[0], *fin = &palabra[strlen(palabra)-1];
    int resultado=1;

    while ((resultado) && (ini<fin))
        if(*ini++ != *fin--) resultado=0;
        //Estas operaciones a direciones en memoria hacen que el puntero se mueva tantos bytes hasta llegar a la siguiente direccion segun corresponda para cada tipo de dato

    return resultado;
}
