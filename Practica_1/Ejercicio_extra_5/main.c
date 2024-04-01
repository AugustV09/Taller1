#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int x,y;
    const int CARAS = 6;

    do {
        printf("Presione la letra C para tirar los dados: ");
        scanf(" c",x);
        x= rand()%(CARAS) + 1;
        y= rand()%(CARAS) + 1;
        printf("Usted ha sacado: %d + %d = %d\n", x,y,(x+y));
    } while (((x+y)!= 2) && ((x+y)!= 12) && ((x+y)!= 7) && ((x+y)!= 11));

    if (((x+y)== 2) || ((x+y)!= 12)) printf("Usted ha ganado");
    else printf("Usted ha perdido");
    return 0;
}
