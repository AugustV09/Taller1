#include <stdio.h>
#include <stdlib.h>

#define PI 3.1416
#define AREA_CIRCULO(r) ((PI) * (r) * (r))

int main()
{
    srand(3);
    int i;

    for (i=0; i<10; i++){
        int r = rand() % 10 + 1;
        printf("AREA_CIRCULO(%d) = %.2f\n", r, AREA_CIRCULO(r));
    }
    return 0;
}
