#include <stdio.h>
#include <stdlib.h>

int damePar();

int main()
{
    int n;
    printf("Ingrese un numero: \n");
    scanf(" %d", &n);
    for (; n; n--) printf("%d\n", damePar());
    return 0;
}

int damePar(){
    static int x = -2;
    x = x+2;
    return x;
}
