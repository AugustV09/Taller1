#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arc1 = fopen("../Prctica-5---Recursos/numeros.txt", "w");

    if (arc1 == NULL){
        printf("ERROR EN LA LECTURA\n");
        return 1;
    }

    FILE *arc2 = fopen("../Prctica-5---Recursos/numeros.dat", "wb");

    if (arc2 == NULL){
        printf("ERROR EN LA LECTURA\n");
        return 1;
    }

    int num;
    printf("Ingrese un numero: ");
    scanf("%d", &num);

    while(num<10){
        /*fputc(num,arc1) NO sirve porque me imprimiria el numero entero como literalmente un caracter y el numero 9
        NO es el caracter '9'*/
        fprintf(arc1,"%d",num);
        fwrite(&num,sizeof(int),1,arc2);
        printf("Ingrese un numero: ");
        scanf("%d", &num);
    }

    fclose(arc1);
    fclose(arc2);
    return 0;
}
