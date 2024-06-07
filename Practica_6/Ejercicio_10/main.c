#include <stdio.h>
#include <stdlib.h>
#include "istack.h"
#include "istack2.h"


int main()
{
    int num;
    Stack s = s_create();

    printf("Ingrese un numero: ");
    scanf("%d", &num);

    while (num){
        s_push(&s, num);
        printf("Ingrese un numero: ");
        scanf("%d", &num);
    }
    printf("\n");

    while (s!= NULL) printf("Numero: %d\n", s_pop(&s));

    return 0;
}
