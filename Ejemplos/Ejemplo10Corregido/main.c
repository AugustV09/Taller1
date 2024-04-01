#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cant_car = 9;
    int car_veces = 1;
    int cant_blancos, aux;
    int aux_blancos = (cant_car - car_veces)/2;

    for(; car_veces <= cant_car; car_veces = car_veces + 2){
        for(cant_blancos = aux_blancos; cant_blancos; cant_blancos--)
            printf(" ");
        for(aux = car_veces; aux; aux--)
            printf("*");
        --aux_blancos;
        printf("\n");
    }

    ++aux_blancos;
    for(car_veces = cant_car - 2; car_veces > -1; car_veces = car_veces - 2){
        ++aux_blancos;
        for(cant_blancos = aux_blancos; cant_blancos; cant_blancos--)
            printf(" ");
        for(aux = car_veces; aux; aux--)
            printf("*");
        printf("\n");
    }

    return 0;
}
