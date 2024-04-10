#include <stdio.h>
#include <stdlib.h>

typedef struct {
    float base;
    float altura;
} rectangulo;

void inicializar (rectangulo *);
float calcularArea (rectangulo r);
void menorArea (rectangulo *, rectangulo *);

int main()
{
    rectangulo r;
    rectangulo *ptrRec = &r;

    /*INICIO b)*/
    inicializar(ptrRec);
    printf("%.2f\n",r.altura);
    /*Fin b)*/

    /*INICIO c)*/
    float area = calcularArea(r);
    printf("%.2f\n",area);
    /*FIHN c)*/

    /*INICIO d)*/
    int i,pos =-1;
    const int dimf =10;
    rectangulo rectangulos[dimf];
    float menor = 420000000;

    for (i=0; i<dimf; i++){
        inicializar(&rectangulos[i]);
    }

    for (i =0; i<dimf; i++){
        float aux = calcularArea(rectangulos[i]);
        if (aux<menor){
            menor = aux;
            pos = i;
        }
    }

    printf("%d", pos);
    /*FIN d)*/

    return 0;
}

void inicializar (rectangulo *rec){

    printf("Ingrese el valor de la base: ");
    scanf("%f",&rec->base);
    printf("Ingrese el valor de la altura: ");
    scanf("%f",&(rec->altura));
}

float calcularArea (rectangulo r){
    return (r.altura * r.base);
}
