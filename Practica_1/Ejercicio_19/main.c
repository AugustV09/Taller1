#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int i, resultado,a,b, puntos = 0;
    for(i = 4; i; i--){
        a = rand() % (100+1);
        b = rand() % (100+1);
        printf("La operacion a realizar es %d + %d y el resultado es:\n", a,b);
        scanf(" %d", &resultado);
        if ((a+b) == resultado) ++puntos;


    }

    switch (puntos){
        case 4: printf("Su nota es una A");
                break;
        case 3: printf("Su nota es una B");
                break;
        case 2: printf("Su nota es una C");
                break;
        case 1: printf("Su nota es una D");
                break;
        case 0: printf("Su nota es una E");
                break;
    }
    return 0;
}
