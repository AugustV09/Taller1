#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    /*a)*/
    for (i = 0; i <= 11; i++)
        printf("%d\n",i);
    /*Se imprimen todos los numeros enteros entre 0 y 11 inclusive porque se coloco i<=11*/

    /*b)*/
    for (i = 0; i <= 11; ++i)
        printf("%d\n",i);
    /*Realiza lo mismo que el ejercicio a) ya que i++ o ++i es lo mismo para el for porque esa parte de la estructura
    se ejecuta como si estuviera sola en una linea (lo cual lleva al mismo resultado)*/

    /*c)*/
    for (i = 2; i <= 11; i+=2)
        printf("%d\n",i);
    /*Se imprimen los numeros pares 2,4,6,8,10 porque i arranca en 2 y se incrementa en 2 unidades en cada vuelta*/

    /*d)*/
    for (i = 1; i <= 11; i*=2)
        printf("%d\n",i);
    /*Se imprimen 1,2,4,8 como si fuera una serie con termino general 2^X*/

    /*e)*/
    for (i = 11; i >= 1; i-=2)
        printf("%d\n",i);
    /*Se imprimen 11,9,7,5,3,1 porque i arranca en 11 y se reduce en 2 unidades en cada vuelta*/

    /*f)*/
    for (i = 11; i > 1; i=+1)
        printf("%d\n",i);
    /*Se imprime solo el 11 porque i arranca en 11 pero en la siguiente vuelta se le asigna el valor 1 (+1 se asigna como si fuera 1 positivo).
    Eso pasó porque el operador NO es el de suma y asignacion.*/
    return 0;
}
