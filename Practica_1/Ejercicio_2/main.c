#include <stdio.h>
#include <stdlib.h>

int main(){
    char c= 'a';
    int x= 64;
    printf("char c= %c\n", x);
    printf("int x= %d\n", c);

    x = 2*32+10%2-1;
    printf("%d",x);
    return 0;
}


/*
a) El programa no da error y yampoco me da warnings ya que es posble esta operacion:
imprime el numero del char que le corresponde en ASCII e imprime el char que le corresponde al numero aun se haya
pasado del rango de representacion

b) La diferencia entre float y double s la cantidad de bytes asignados para cada uno, pero pueden asignarse entre si

c)Las operaciones se hacen de izquierda a derecha, respetando los parentesis; luego dando prioridad a la
multiplicacion, division y modulo; y finalmente a la suma y a la resta

d)El operador sizeof sirve para calcular el tamaño que ocupan los tipos de datos
*/
