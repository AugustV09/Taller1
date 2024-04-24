#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef enum {CUADRADO, RECTANGULO, TRIANGULO, CIRCULO, ELIPSE} FIGURAS;

typedef struct {

    unsigned int tipo: 3;

    union figuras{

        struct conRectas{

            double base;
            union difLados{

                struct lados1{
                    double lado1;
                } cuad;

                struct lados2{
                    double lado1;
                    double lado2;
                } rectan;

                struct lados3{
                    double lado1;
                    double lado2;
                    double lado3;
                } tri;

            } lados;

        }recCuacTri;

        struct curvas {

            union especiales{

                double radio;

                struct extrasElip{
                    double eje_mayor;
                    double eje_menor;
                } ejes;

            } medidasEsp;

        } CircElip;

    } figura;

} figuraGeo;

double superficie (figuraGeo);

int main()
{
    figuraGeo f;
    unsigned int i;
    printf("Ingrese el tipo de figura: ");
    scanf("%u", &i);
    f.tipo = i;

    switch (f.tipo) {
        case CUADRADO: printf("Ingrese la base: ");
                       scanf("%lf", &f.figura.recCuacTri.base);
                       f.figura.recCuacTri.lados.cuad.lado1 = f.figura.recCuacTri.base;
                       break;

        case RECTANGULO: printf("Ingrese la base: ");
                         scanf("%lf", &f.figura.recCuacTri.base);
                         f.figura.recCuacTri.lados.rectan.lado1 = f.figura.recCuacTri.base;
                         printf("Ingrese el alto del rectangulo: ");
                         scanf("%lf", &f.figura.recCuacTri.lados.rectan.lado2);
                         break;

        case TRIANGULO: printf("Ingrese la base: ");
                        scanf("%lf", &f.figura.recCuacTri.base);
                        f.figura.recCuacTri.lados.tri.lado1 = f.figura.recCuacTri.base;
                        printf("Ingrese la medida del lado 2 del triangulo: ");
                        scanf("%lf", &f.figura.recCuacTri.lados.tri.lado2);
                        printf("Ingrese la medida del lado 3 del triangulo: ");
                        scanf("%lf", &f.figura.recCuacTri.lados.tri.lado3);
                        break;

        case CIRCULO: printf("Ingrese el radio de la circunferencia: ");
                      scanf("%lf", &f.figura.CircElip.medidasEsp.radio);
                      break;

        case ELIPSE: printf("Ingrese el eje menor de la elipse: ");
                     scanf("%lf", &f.figura.CircElip.medidasEsp.ejes.eje_menor);
                     printf("Ingrese el eje mayor de la elipse: ");
                     scanf("%lf", &f.figura.CircElip.medidasEsp.ejes.eje_mayor);
                     break;
    }

    printf("El area de la figura es: %.2f", superficie(f));

    return 0;
}

double superficie(figuraGeo f){

    double s = (f.figura.recCuacTri.lados.tri.lado1+f.figura.recCuacTri.lados.tri.lado2+f.figura.recCuacTri.lados.tri.lado3)/2;

    switch (f.tipo) {
        case CUADRADO: return (f.figura.recCuacTri.base*f.figura.recCuacTri.base);

        case RECTANGULO: return (f.figura.recCuacTri.lados.rectan.lado1*f.figura.recCuacTri.lados.rectan.lado2);

        case TRIANGULO: return (sqrt(s*(s-f.figura.recCuacTri.lados.tri.lado1)*(s-f.figura.recCuacTri.lados.tri.lado2)*(s-f.figura.recCuacTri.lados.tri.lado3)));

        case CIRCULO: return(M_PI*pow(f.figura.CircElip.medidasEsp.radio,2));

        case ELIPSE: return(M_PI*f.figura.CircElip.medidasEsp.ejes.eje_menor*f.figura.CircElip.medidasEsp.ejes.eje_mayor);
    }

}
