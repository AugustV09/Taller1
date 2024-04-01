#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*a)*/
     int edad = 58;  /*La variable edad no tenia valor asignado*/

     if (edad >= 40) /*El ; al final del if "corta" el if y ejecuta sus acciones si o si*/

        printf("Tiene %d años o más", 40);  /*El & me da la direccion en memoria*/

     else

        printf("Tiene menos de %d años",40);

    printf("\n");

    /*b)*/
     int total, x = 1;  /*Esta operacio solo asigna valor a x y no a total*/
     total = 0;
     while (x <= 10) {
         total += x;
         ++x;
     }
     printf("Total = %d",total);  /*La mascara estaba mal y no funcionaba*/

     printf("\n");

     /*c)*/
     int valor;
     scanf("%d",&valor);
     switch (valor % 2) {
         case 0:
             printf("El valor es par");     /*Faltaba el BREAK*/
             break;
         case 1:
             printf("El valor es impar");    /*Faltaba el BREAK*/
             break;
     }

     printf("\n");

     /*d)*/
     int j, y;
     scanf("%d",&j);       /*Faltaba el & para el scanf*/
     scanf("%d",&y);       /*Faltaba el & para el scanf*/
     printf("j + y = %d ",j+y);


    return 0;
}
