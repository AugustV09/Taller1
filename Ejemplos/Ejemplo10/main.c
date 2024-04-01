#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cant_car = 9;
    int car_veces;
    int cant_blancos, aux;  /*Se me ocurre crear acá el caluclo de cant_blancos (en otra variable) y despues irle restando uno y sumando uno*/

    for(car_veces = 1; car_veces <= cant_car; car_veces = car_veces + 2){
        for(cant_blancos = (cant_car - car_veces)/2; cant_blancos; cant_blancos--)  /*Alguna mejora que se me ocurre es crear una variable para el calculo de cant_blancos*/
            printf(" ");
        for(aux = car_veces; aux; aux--)
            printf("*");
        for(cant_blancos = (cant_car - car_veces)/2; cant_blancos; cant_blancos--)
            printf(" ");
        printf("\n");
    }

    for(car_veces = cant_car - 2; car_veces > -1; car_veces = car_veces - 2){
        for(cant_blancos = (cant_car - car_veces)/2; cant_blancos; cant_blancos--)
            printf(" ");
        for(aux = car_veces; aux; aux--)
            printf("*");
        for(cant_blancos = (cant_car - car_veces)/2; cant_blancos; cant_blancos--)
            printf(" ");
        printf("\n");
    }

    return 0;
}
