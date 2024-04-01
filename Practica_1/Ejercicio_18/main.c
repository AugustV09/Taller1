#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    srand(3);
    int i;

    for(i = 0; i<15; i++)
        printf("%d\n",rand());

    /*Va a generar los mismos numeros cada vez que lo ejecute porque la semilla del srand() es siempre la misma
    y eso ser asi aunque no ponga el srand() porque entonces usaria una semilla predeterminada.
    Deberia usar srand(time(NULL)) con la libreria time.h*/

    return 0;
}
