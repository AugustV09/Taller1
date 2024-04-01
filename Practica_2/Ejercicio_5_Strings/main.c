#include <stdio.h>
#include <stdlib.h>

char* strcopiar (char[], char[]);

int main()
{
    char palabra1[]="Buenas";
    char palabra2[]="Chau";
    printf("%s",strcopiar(palabra1,palabra2));
    return 0;
}

char* strcopiar (char palabra1[], char palabra2[])
{
    int i;

    for(i=0; palabra2[i]; i++) palabra1[i]=palabra2[i];

    palabra1[i] = palabra2[i];

    return palabra1;
}
