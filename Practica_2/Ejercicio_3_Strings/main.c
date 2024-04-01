#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* reemplazo (char[], char, char);  /*Si devuelvo algo, debe ser un vector a chars porque despues apuntara al vector*/

int main()
{
    char palabra[] = "Buenas compañero, todo bien?";
    printf("%s",reemplazo(palabra,'a','o'));
    return 0;
}

char* reemplazo (char cadena[], char a, char b){
    int i;

    for(i=0; cadena[i]; i++){
        if (cadena[i]==a)cadena[i]=b;
    }

    return cadena;   /*Es innecesario hacer esto porque la cadena ya se modifica por si sola*/
}
