#include <stdio.h>
#include <stdlib.h>

int main()
{
    float km,milla;
    milla = 1.61;

    printf("Ingrese una cantidad de kilometros: ");
    scanf("%f",&km);

    printf("%.2f KM equivalen a %.2f millas", km, milla*km);
    return 0;
}
