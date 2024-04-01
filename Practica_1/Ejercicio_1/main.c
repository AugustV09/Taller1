#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*a)*/
    double pi= 3.14;
    int y= 5;
    printf("pi= %lf\n", pi);

    /*b)*/
    int x=10;
    if (x==5)
        printf("x = 5\n");

    return 0;
}

/*El error impide la ejecucion pero los warnings te avisen si no usaste algo o si los tipos
no coninciden con las mascaras pero permiten la ejecucion*/
