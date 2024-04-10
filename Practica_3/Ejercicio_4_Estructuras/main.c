#include <stdio.h>
#include <stdlib.h>

struct pun3D{
    float x;
    float y;
    float z;
};

typedef struct pun3D punto3D;

int main()
{
    punto3D p[4];
    printf("%d\n", sizeof(struct pun3D)); //12 bytes
    printf("%d\n", sizeof(punto3D)); //12 bytes
    printf("%d",sizeof(p)); //48 bytes
    return 0;
}

/*sizeof() con struct pun3D o con punto3D da lo mismo porque el typedef solo genera un alias, mas no cambia el tipo de dato.
La impresion es correcta porque todos los elementos de la estructura sin del mismo tipo.

La impresion del espacio es correcta ya que no hya huecos por ser todos los elementos del mismo espacio.

Sin embargo, si coloco tipos de datos que ocupen diferentes espacio se generaran huecos ya que cada campo va a ocupar el espacio que ocupe el campo de
mayor tamaño*/
