#include <stdio.h>
#include <stdlib.h>

int binario (int);
int binario_recursivo(int);
int invertir (int);

int main()
{
    /*a)*/
    printf("%d\n",binario(11));

    /*b)*/
    printf("%d",binario_recursivo(11));
    return 0;
}

int binario (int x){
    register int resultado = 0;

    while (x > 0){
        resultado = resultado*10 + x%2;
        x /= 2;
    }

    return (invertir(resultado));
}


int invertir (int x){
    register int resultado = 0;

    while (x){
        resultado = resultado*10 + x%10;
        x /=10;
    }

    return resultado;
}


int binario_recursivo (int x){
    static int resultado = 0;

    if (x){
        resultado = binario_recursivo(x/2)*10;
        resultado += x%2;
        return resultado;;
    }
    else return 0;
}
