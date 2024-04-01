#include <stdio.h>
#include <stdlib.h>

unsigned int factorialIte (unsigned int);
unsigned int factorialRecu (unsigned int);

int main()
{
    /*a)*/
    printf("%u\n", factorialIte(5));

    /*b)*/
    printf("%u\n", factorialRecu(5));

    return 0;
}

/*a)*/
unsigned int factorialIte (unsigned int x){
    unsigned int resultado = 1;

    if (x > 1)
        for (; x > 1; x--){
            resultado = resultado * x;
    }

    return resultado;
}

/*b)*/
unsigned int factorialRecu (unsigned int x){
    if (x > 1)
        return (x * factorialRecu(x-1));
    else
        return 1;
}
