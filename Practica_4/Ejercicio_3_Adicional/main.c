#include <stdio.h>
#include <stdlib.h>
#define CANTB 10
#define MAXIMO_MUESTRA 8

typedef enum {MARCA='?', ES_BOMBA=0xeb, NO_ES_BOMBA=0, OCULTA = 0xB1} caracteres;

typedef struct{
    caracteres visibilidad;
    caracteres marca;
    caracteres esBomba;
    unsigned bomVecinas;
} casilla;

typedef struct {
    unsigned filas;
    unsigned columnas;
    unsigned casillas_si;
    unsigned marcas_colocadas;
    casilla ** casillas;
} tablero;

void crearTablero(tablero*, unsigned, unsigned);
void inicializarTablero (tablero);
void jugada (tablero*,int*);
void imprimirTablero (tablero);
void mostrarCasillas (tablero*,int,int);

int main()
{
    srand(3);
    tablero T;
    unsigned filas,columnas;
    int perdedor=0;
    printf("Ingrese cantidad de filas: ");
    scanf("%u",&filas);
    printf("Ingrese cantidad de columnas: ");
    scanf("%u",&columnas);
    printf("\n");
    crearTablero(&T,filas,columnas);

    while (T.casillas_si>0 && !perdedor){
        jugada(&T,&perdedor);
        imprimirTablero(T);
    }

    if (perdedor) printf("PERDISTE\n");
    else printf("GANASTE\n");

    return 0;
}

void crearTablero(tablero *t, unsigned filas, unsigned columnas){
    t->filas = filas;
    t->columnas = columnas;
    t->casillas_si= filas*columnas - CANTB;
    t->marcas_colocadas =0;
    t->casillas = (casilla **) malloc (filas*sizeof(casilla*));

    int i;

    for (i=0; i<filas; i++){
        (t->casillas)[i] = (casilla *) calloc (columnas,sizeof(casilla));
    }

    inicializarTablero(*t);
}

void inicializarTablero (tablero t){
    int i=0,j;
    unsigned f,c;

    while (i<CANTB){
        f = rand()%8;
        c= rand()%8;
        if (!(t.casillas[f][c].esBomba)){

            t.casillas[f][c].esBomba = ES_BOMBA;

            if (f!=0 || c!=0){
                if (c!= 0){
                    if (f!=0) t.casillas[f-1][c-1].bomVecinas+=1;
                    if (f!=(t.filas-1)) t.casillas[f+1][c-1].bomVecinas+=1;
                    t.casillas[f][c-1].bomVecinas+=1;
                }

                if (f!=0){
                    t.casillas[f-1][c].bomVecinas+=1;
                    if (c!=(t.columnas-1)) t.casillas[f-1][c+1].bomVecinas+=1;
                }
            }

            if (f!=(t.filas-1) || c!=(t.columnas-1)){
                if (c!=(t.columnas-1)){
                    t.casillas[f][c+1].bomVecinas+=1;
                    if (f!=(t.filas-1)) t.casillas[f+1][c+1].bomVecinas+=1;
                }

                if (f!=(t.filas-1)) t.casillas[f+1][c].bomVecinas+=1;


            }
            i++;
        }
    }

    for (i=0; i<t.filas;i++){
        for (j=0; j<t.columnas; j++){
            t.casillas[i][j].visibilidad = OCULTA;
        }
    }

}


void jugada (tablero *t,int *perdedor){
    unsigned fila;
    unsigned char columna;
    char car =0;

    do{
        printf("Ingrese una fila entre 0 y 7: ");
        scanf("%u",&fila);
    } while (!(fila>= 0 && fila<= 7));


    do{
        printf("Ingrese una columna entre A y H: ");
        scanf(" %c",&columna);
    } while (!(columna>= 'A' && columna<= 'H'));

    columna -= 'A';
    printf("Ingrese '?' para marcar/desmarcar la casilla y cualquier otro caracter en caso contrario: ");
    scanf(" %c", &car);
    printf("\n");

    if (car == MARCA){
        t->casillas[fila][columna].marca = car;
        t->marcas_colocadas++;
    }

    else{
        t->casillas[fila][columna].visibilidad =0;
        if (t->casillas[fila][columna].esBomba == ES_BOMBA) *perdedor = 1;
        else{
            t->casillas_si--;
            //if (t->casillas[fila][columna].bomVecinas == 0) mostrarCasillas(t,fila,columna);
        }

    }
}

void imprimirTablero (tablero t){
    int i,j;

    for (i=0; i<t.filas; i++){
        for (j=0; j<t.columnas; j++){
            if (t.casillas[i][j].marca == MARCA) printf("%c  ", MARCA);
            else if (t.casillas[i][j].visibilidad == OCULTA) printf("%c  ", OCULTA);
            else if (t.casillas[i][j].esBomba == ES_BOMBA) printf("%c  ", ES_BOMBA);
            else printf("%u  ", t.casillas[i][j].bomVecinas);
        }
        printf("\n");
    }
    printf("\n");
}


void mostrarCasillas (tablero *t, int fila, int columna){

}


