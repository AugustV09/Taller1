#include <stdio.h>
#include <stdlib.h>
#define DEBUG 0
int main(){
    int x= 15;
    while (x<50){
    #if DEBUG
        printf("x= %d", x);
        y= y+1;
    #endif
    x++;
    }
    return 0;
}

/*a) el codigo compila porque DEBUG=0 indica que no se ejecute su bloque, lo cual permite
que no se compile la linea y=y+1 la cual da error porque no esta definida la variable y.
b) Al cambiar DEBUG a 1 da error la compilacion porque no esta definida la variable y.
c) No es posible cambiar el valor de DEBUG en tiempo de ejecucion porque deja de estar
presente despues del procesado.
d) No incide el valor de DEBUG con la directiva ifdef debido a que ifdef se refiere a si
DEBUG esta o no definida
*/
