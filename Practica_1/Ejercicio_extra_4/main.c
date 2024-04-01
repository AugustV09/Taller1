#include <stdio.h>
#include <stdlib.h>

void suma_digitos(int);

int main()
{
    int num;

    do{
        printf("Ingrese un numero: ");
        scanf(" %d", &num);
        suma_digitos(num);
    } while (num > 0);

    return 0;
}

void suma_digitos (int num){
    int resultado = 0,aux = num;
    while (aux/10){
        resultado += num%10;
        num /= 10;
        printf("Hasta ahora tenemos que la suma de los digitos es: %d\n", resultado);
        if (num == 0){
            num = resultado;
            aux = resultado;
            resultado = 0;
        }
    }
}
