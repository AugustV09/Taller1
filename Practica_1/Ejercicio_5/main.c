#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*a)*/
    int num;
    for(num = 1; num<=50;num++){
        if (num%5 == 0)
            printf("%d es un multiplo de 5\n", num);
    }
    printf("\n");
    /*b)*/
    for(num = 5; num<=50; num = num + 5){
        printf("%d es un multiplo de 5\n", num);
    }
    return 0;
}
