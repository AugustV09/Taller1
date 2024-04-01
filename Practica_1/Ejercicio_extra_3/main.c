#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calculo_pi ();
double calculo_pi2 ();

int main()
{
    printf("%.9f\n",calculo_pi());
    printf("%.9lf",calculo_pi2());

    /*Si se habilitan los suficientes decimales, el resultado con tipo double es un poco mas preciso que el de tipo float*/
    return 0;
}


float calculo_pi(){
    float resultado = 3, error = 1.0/10000000, termino, aux = 2;
    register int i = 0;


    do{
        termino = 4/(aux*(aux+1)*(aux+2));
        resultado = resultado + pow(-1,i)*termino;
        aux += 2;
        i++;
    } while (error < termino);

    return resultado;
}

double calculo_pi2(){
    double resultado = 3, error = 1.0/10000000, termino, aux = 2;
    register int i = 0;


    do{
        termino = 4/(aux*(aux+1)*(aux+2));
        resultado = resultado + pow(-1,i)*termino;
        aux += 2;
        i++;
    } while (error < termino);

    return resultado;
}
