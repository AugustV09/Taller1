#include <stdio.h>
#include <stdlib.h>

typedef struct{
    float x;
    float y;
    float ancho;
    float alto;
} rectangulo1;

typedef struct{
    float p1[2];
    float p2[2];
} rectangulo2;

typedef struct{
    float p1[4];
} rectangulo3;

typedef union{
    rectangulo1 rec1;
    rectangulo2 rec2;
    rectangulo3 rec3;
} rectangulosX;

int main()
{
    rectangulosX recX;
    recX.rec1.x = 12.5;
    recX.rec2.p1[0]=13;
    printf("%f\n",recX.rec1.x);
    return 0;
}
