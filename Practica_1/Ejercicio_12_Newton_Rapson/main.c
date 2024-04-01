#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    double y,x;

    printf("Introduce el numero del cual quieres saber su raiz cuadrada: ");
    scanf("%lf", &y);
    printf("Introduce una aproximacion de esa raiz: ");
    scanf(" %lf",&x);

    for (i = 0; i<=100; i++){
        x = x+(y-x*x)/(2*x);
        /*Se llega a esta expresion mediante la derivada de la funcion que utilizo como base,
        que en este caso es X^2 para buscar entre los X y no entre los Y. Pero el resultado seria el mismo con la raiz*/
    }

    printf("La raiz cuadrada de %.2lf es: %.10lf", y,x);
    return 0;
}
