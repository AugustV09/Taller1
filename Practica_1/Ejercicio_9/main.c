#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2;
    char operador;

loop: printf("Ingrese un numero: ");
      scanf("%d",&num1);
      printf("Ingrese otro numero: ");
      scanf(" %d",&num2);
      printf("Ingrese el operador: ");
      scanf(" %c", &operador);

      switch (operador){
        case '+':
            printf("%d",num1+num2);
            break;
        case '-':
            printf("%d",num1-num2);
            break;
        case '*':
            printf("%d",num1*num2);
            break;
        case '/':
            printf("%d",num1/num2);
            break;
        default:
            printf("ERROR. Ingrese operador.\n");
            goto loop;
      }

    return 0;
}
