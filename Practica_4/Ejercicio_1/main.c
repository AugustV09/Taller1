#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*a) malloc y calloc son muy parecidas pero calloc deja reservar tantos espacios en memoria
    como le indique en uno de sus espacios y ademas inicializa las posiciones en cero. El realloc, por otro lado, puede utilizarse como un malloc
    si se le proporciona un puntero NULL pero sino re-aloca la memoria reservada y elimina la memoria
    que previamente habias reservado mientras el malloc solo reserva memoria nueva y no puede re-alocar*/

    /*b) Puede utilizarse realloc en vez de malloc pero es necesario proporcionarle un puntero nulo
    en el campo de puntero. Si realloc se invoca con 0 en el parametro de size y, suponiendo que el
    puntero no sea nulo y corresponda a un puntero para el cual se reservó memoria, libera el espacio reservado*/

    /*c) sizeof() es util para determinar el espacio de aquello para lo que quiero reservar memoria*/
    return 0;
}
