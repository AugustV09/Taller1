#include <stdio.h>
#include <stdlib.h>

typedef struct{
    unsigned int red :5;
    unsigned int green :6;
    unsigned int blue :5;
}RGB16;

typedef struct{
    unsigned char red;
    unsigned char green;
    unsigned char blue;
}RGB24;

RGB16 conv24To16 (RGB24);
RGB24 conv16To24 (RGB16);

int main()
{
    RGB16 r1 = {29,63,31};
    RGB24 r2 = {200,255,255};
    /*Debo hacer que los metodos devuelvan el RGB convertido porque sino no me alcanzan
    los bits cuando quiero hacer que el de 16 se convierta en 24*/
    printf("ROJO DEL RGB16 TO RGB24: %u\n", conv16To24(r1).red);
    printf("ROJO DEL RGB24 TO RGB16: %u\n", conv24To16(r2).red);
    return 0;
}

RGB16 conv24To16 (RGB24 pixel){
    RGB16 p = {(pixel.red*31)/255,(pixel.green*31)/255,(pixel.blue*31)/255};
    return p;
}

RGB24 conv16To24 (RGB16 pixel){
    RGB24 p = {(pixel.red*255)/31,(pixel.green*255)/31,(pixel.blue*255)/31};
    return p;
}
