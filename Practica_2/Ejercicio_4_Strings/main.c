#include <stdio.h>
#include <stdlib.h>

int cantCaracteres (char[]);

int main()
{
    char palabra[] = "Hola";
    printf("%d",cantCaracteres(palabra));
    return 0;
}

int cantCaracteres (char palabra[])
{
    int i;

    for(i=0; palabra[i]; i++);

    return (i);
}
