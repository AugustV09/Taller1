#include <stdio.h>
int main(){

    char a, b;
    printf("Ingrese el primer caracter:\n");

    scanf("%c", &a);

    printf("Se leyó el caracter: %c\n", a);

    printf("Ingrese el segundo caracter:\n");

    scanf(" %c", &b); /*CORRECION*/

    printf("Se leyó el caracter: %c\n", b);

    return 0;
}

/*
-Uno de los errores es que el segundo scanf se come el ENTER ingresado en el primer scanf
CORRECION: colocar un espacio en el segundo scanf (el espacio se traga BLANCOS y ENTERS pero no lo demas)
*/
