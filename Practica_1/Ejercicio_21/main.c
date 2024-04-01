#include <stdio.h>
int incremento(int);

int main(){
    float i;
    for(i=6; i>0.5; i/=2)
    printf("i=%5.1f j=%5d\n", i, incremento(i));
    return 0;
}

int incremento(int N){
    static int j=0;
    j++;
    return (N%2 ? N : N+j);
}


/*i=  6.0  j=    7
  i=  3.0  j=    3
  i=  1.5  j=    1
  i=  0.8  j=    4*/
