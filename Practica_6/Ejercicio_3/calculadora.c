#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
    if (argc < 4){
        printf("INSUFICIENTES ARGUMENTOS\n");
        return 1;
    }

    int num1 = atoi(argv[1]), num2 = atoi(argv[2]);
    switch (argv[3][0]){
        case '+':  printf("%d + %d = %d", num1, num2, num1+num2);
                   break;
        case '-':  printf("%d - %d = %d", num1, num2, num1-num2);
                   break;
        case 'x':  printf("%d * %d = %d", num1, num2, num1*num2);
                   break;
        case '/':  printf("%d / %d = %d", num1, num2, num1/num2);
                   break;
        default: printf("ERROR, EL OPERADOR NO CORRESPONDE\n");
    }

    return 0;
}
