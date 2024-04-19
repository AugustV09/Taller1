#include <stdio.h>
#include <stdlib.h>

typedef struct {
    unsigned int hora: 5;
    unsigned int minutos: 6;
    unsigned int segundos: 5; //Se pierde precision en los segundos porque 5 bits te dan lugar a 2^5=32 combinaciones o hasta el numero 31.
}hora;

hora leerHora ();
void imprimirHora (hora);

int main()
{
    hora h = leerHora();
    imprimirHora(h);
    return 0;
}

hora leerHora(){

    /*Tengo que usar variables auxiliares porque no puedo acceder a la posicion en
    memoria ya que no hay una posicion en memoria para cada pedazo (no hay forma de que
    el compilador se de que cuenta de donde a donde va una variable cuando "juego" con
    los bits de la variable)
    NO PUEDO USAR & PERO SI PUEDOMANDAR LA STRCUT COMO PUNTERO*/

    unsigned int d1;
    unsigned int d2;
    unsigned int d3;

    printf("Ingrese la hora:");
    scanf(" %u", &d1);
    printf("Ingrese los minutos:");
    scanf(" %u", &d2);
    printf("Ingrese los segundos:");
    scanf(" %u", &d3);

    hora h = {d1,d2,d3};  //Se recortan las cadenas de bits hasta que correspondan
    return h;
}

void imprimirHora(hora h){
    printf("%u:%u:%u",h.hora,h.minutos,h.segundos);
}
