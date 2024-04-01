#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define DIMF 50

int main()
{
    char abc[] = "abcdefghijklmnopqrstuvwxyz", palabra[DIMF];
    int cants['z'-'a'] = {0}, i,j;
    scanf("%s", palabra);

    for(i=0; palabra[i]; i++)
    {
        int pos=palabra[i] - 'a';
        cants[pos]++;
    }

    for(j= 0; abc[j]; j++) printf("%c: %d\n",abc[j],cants[j]);
    return 0;
}
