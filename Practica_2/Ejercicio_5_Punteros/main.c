#include <stdio.h>
#include <stdlib.h>
#define COL 10

void swap (int *,int *);
void swapVectores (int []);
void swapVectores2 (int []);
void swapVectores3 (int []);


int main()
{
    int numeros[COL]= {1,2,3,4,5,6,7,8,9,10},i;
    swapVectores3(numeros);

    for(i=0; i<COL; i++){
        printf("%d",numeros[i]);
    }
    return 0;
}

void swap(int *a, int *b)
{
    *a ^= *b;
    *b ^= *a;
    *a ^= *b;
}

void swapVectores (int v[]){

    int *a = v,*b=&v[COL-1];

    while (a<b){
        swap(a++,b--);
    }
}

void swapVectores2 (int v[]){

    int i;

    for(i=0; i<COL/2;i++){    //es hasta i<COL/2 porque sino cambiaria los valores 2 veces y resultado final seria el mismo
        swap(&(v[i]),&v[COL-1-i]);
    }
}

void swapVectores3 (int v[]){

    int i;

    for(i=0; i<COL/2;i++){   //es hasta i<COL/2 porque sino cambiaria los valores 2 veces y resultado final seria el mismo
                             //una alternativa menos eficiente seria v+1<v+COL-1-i

        swap(v+i,v+COL-1-i);
    }
}
