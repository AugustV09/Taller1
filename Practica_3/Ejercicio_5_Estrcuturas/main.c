#include <stdio.h>
#include <stdlib.h>
#define ESPADA 'E'
#define BASTO 'B'
#define COPA 'C'
#define ORO 'O'


typedef struct{
    char palo;
    int numero;
} carta;

void inicializarMazo(carta *);
void barajarMazo(carta *);
carta sacarCarta (carta *);
void imprimirCarta (carta *,carta);

int main()
{
    srand(3);
    const int dimf = 50;
    carta mazo[dimf];
    inicializarMazo(mazo);
    barajarMazo(mazo);
    carta carta_sacada = sacarCarta(mazo);
    imprimirCarta(mazo, carta_sacada);

    return 0;
}

void inicializarMazo(carta *cartas){
    int i;
    for (i = 0; i<12; i++){
        (cartas+i)->palo = ESPADA;
        (cartas+i)->numero = i+1;
    }
    for (; i<24; i++){
        (cartas+i)->palo = BASTO;
        (cartas+i)->numero = i+1-12;
    }
    for (; i<36; i++){
        (cartas+i)->palo = COPA;
        (cartas+i)->numero = i+1-24;
    }
    for (; i<48; i++){
        (cartas+i)->palo = ORO;
        (cartas+i)->numero = i+1-36;
    }
    for (; i<50;i++){
        (cartas+i)->palo = 'Z';
        (cartas+i)->numero = 0;
    }

}

void barajarMazo (carta *cartas){
    carta aux;
    int i;
    for (i=0; i<50; i++){
        int pos_rand = rand()%50;
        aux = *(cartas + i);
        *(cartas + i) = *(cartas + pos_rand);
        *(cartas + pos_rand) = aux;
    }
}

carta sacarCarta (carta *cartas){
    return (*cartas);
}

void imprimirCarta(carta *cartas,carta c){
    int i=0,j=1;

    while (i<50 && j){
        if (((cartas+i)->palo == c.palo) && ((cartas+i)->numero == c.numero)){
            printf("Carta numero: %d y de palo: %c",(cartas+i)->numero,(cartas+i)->palo);
            j=0;
        }
        i++;
    }
}
