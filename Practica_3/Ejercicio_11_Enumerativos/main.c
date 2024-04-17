#include <stdio.h>
#include <stdlib.h>

typedef enum {Bluetooth=128, Wifi=64, GPS=32, atos=16, Frontal=8, Trasera=4, Linterna=2, Vibrar=1, ENCENDIDO = 255, APAGADO = 0} Estado;

void activar (Estado *, Estado);
void desactivar (Estado *, Estado);
void invertir (Estado *, Estado);
int detMod (Estado, Estado);

int main()
{
    Estado estado = APAGADO;
    activar(&estado, Wifi+Bluetooth);
    desactivar(&estado,Bluetooth);
    //invertir(&estado, Wifi);
    //printf("%d\n", estado);
    printf("%d", detMod(estado,Wifi+Vibrar));
    return 0;
}

void activar (Estado *estado, Estado e){
    *estado |= e;
}

void desactivar(Estado *estado, Estado e){
    *estado &= ~e;
}

void invertir(Estado *estado, Estado e){
    *estado ^= e;
}

int detMod (Estado estado, Estado e){
    estado &= e;
    return estado;
}
