#include <stdio.h>
#include <stdlib.h>

typedef struct {

    unsigned int tipo: 2;

    union figuras{
        struct conRectas{
            double base;
            union lados{

                struct lados4{
                    double lado1;
                    double lado2;
                    double lado3;
                    double lado4;
                } ladoRecCuac;

                struct lados3{
                    double lado1;
                    double lado2;
                    double lado3;
                } ladoTri;

            }

        } recCuacTri;

        struct curvas {

            union especiales{

                double radio;

                struct extrasElip{
                    double a;
                    double b;
                } focos;

            } circElip;

        } CircElip;

    } figura;

} figuraGeo;

double superficie (figuraGeo);

int main()
{
    printf("Hello world!\n");
    return 0;
}

double superficie(figuraGeo f){

    switch f.tipo {
        case 0: return (f.figura.recCuacTri.base * );
    }

}
