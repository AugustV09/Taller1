#include <stdio.h>
#include <stdlib.h>

int invertir (unsigned int);

int main()
{
    printf("%d", invertir(1234));
    return 0;
}

int invertir (unsigned int x){
    unsigned int resultado = 0;
    while (x > 0){
        resultado = resultado*10 + x%10;
        x /= 10;
    }

    return resultado;
}
