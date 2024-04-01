#include <stdio.h>
#include <stdlib.h>

int main()
{
    short int a;
    unsigned short int b;
    int c;
    unsigned int d;
    long int e;
    unsigned long int f;
    printf("%d\n", sizeof(a));
    printf("%d\n", sizeof(b));
    printf("%d\n", sizeof(c));
    printf("%d\n", sizeof(d));
    printf("%d\n", sizeof(e));
    printf("%d\n", sizeof(f));
    return 0;
}

/*
a)Para representar enteros pueden usarse el tipo de dato int, short int, long int y todos esos pero sin signo
 (unsigned)

b) Con el INT  se pueden utilizar el modificador short, el long y el unsigned

c)LO que ocupa en bytes esta hecho previamente, el sistemo de representacion binario para los tipos de datos unsigned
es BSS y para los demas es CA2. El rango de representacion se encuentra en la teoria.

*/
