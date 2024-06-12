#include <stdio.h>
#include <stdlib.h>
#include "imath.h"

int imath_potencia(int x, int y){
    int i, result = x;

    for (i=1; i<y; y++){
        result *= x;
    }

    return result;
}

int imath_cuadrado(int x){
    return ((x)*(x));
}

int imath_cubo(int x){
    return ((x)*(x)*(x));
}

int imath_absoluto(int i){
    if (i<0) return (-i);
    return i;
}

int imath_factorial (int i){
    if (i==1) return 1;

    return (i*imath_factorial(i-1));
}

int imath_sumatoria (int i){
    int j, result =0;

    for (j=0; j<i; j++){
        result += j;
    }

    return result;
}

int imath_multiplo (int x, int y){

    return ((x % y) == 0) ? 1 : 0;
}

int imath_divisor (int x, int y){

    return ((y % x) == 0) ? 1 : 0;
}

int imath_par (int i){
    if ((i%2) == 0) return 1;
    else return 0;
}

int imath_impar (int i){
    if ((i%2) != 0) return 1;
    else return 0;
}

