#include <stdio.h>
#include <stdlib.h>

void upperStr (char *);
void lowerStr (char *);
void numToStr (int, char*);
void numToText (int, char *);

int main()
{
    //INICIO a)

    char palabra[]= "Hola"; //Si escribis un String como un puntero de char, TENES QUE IMPRIMIRLO CARACTER POR CARACTER (la mascara no funciona)
    upperStr(palabra);
    printf("%s\n",palabra);

    //FIN a)

    //INICIO b)

    char palabra2[]= "HOLa";
    lowerStr(palabra2);
    printf("%s\n",palabra2);

    //FIN b

    //INICIO c)

    char palabra3[21];
    numToStr(124,palabra3);
    printf("%s\n",palabra3);

    //FIN c)

    //INICIO d)

    char palabra3[21];
    numToStr(124,palabra3);
    printf("%s\n",palabra3);

    //FIN d)

    return 0;
}

void upperStr (char *palabra){    //¿Debo pensar en los caracteres especiales?
    int difer = 'b'- 'B';

    for (; *palabra; palabra++){
        if ((*palabra)>='a')*palabra = *palabra - difer;
    }
}

void lowerStr (char *palabra){
    int difer = 'b'-'B';

    for (; *palabra; palabra++){
        if ((*palabra)<'a') *palabra = *palabra + difer;
    }
}

void numToStr (int num,char *p){
    int cant_dig=1, aux,difer = '0'-0;


    for (aux = num; aux>9; aux/=10){
        cant_dig++;
    }

    *(p+cant_dig--)= '\0';
    for (; cant_dig>=0; cant_dig--){
        *(p+cant_dig) = (num%10) + difer;
        num /= 10;
    }
}

void numToText (int num, char *p){
}
