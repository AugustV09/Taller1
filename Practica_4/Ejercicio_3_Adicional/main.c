#include <stdio.h>
#include <stdlib.h>
#define CANTB 10

typedef enum {MARCA='?', ES_BOMBA=0xeb, NO_ES_BOMBA=0} caracteres;

typedef struct{
    caracteres marca;
    caracteres esBomba;
    unsigned bomVecinas;
} casilla;

typedef struct {
    unsigned filas;
    unsigned columnas;
    unsigned casillas_si;
    casilla ** casillas;
} tablero;

void crearTablero(tablero*, unsigned, unsigned);
void inicializarTablero (tablero);
void jugada (tablero*,int*);

int main()
{
    srand(3);
    tablero T;
    unsigned filas,columnas, perdedor=0;
    scanf("%u",&filas);
    scanf("%u",&columnas);
    crearTablero(&T,filas,columnas);

    while (T.casillas_si>0 && !perdedor){
        jugada(&tablero,&perdedor);
    }

    if (perdedor) printf("PERDISTE");
    else printf("GANASTE");

    return 0;
}

void crearTablero(tablero *t, unsigned filas, unsigned columnas){
    t->filas = filas;
    t->columnas = columnas;
    t->casillas_si= filas*columnas - CANTB;
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
        if !(t.casillas[f][c].esBomba){

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
                if (c!=(t.columnas-1))}
                    t.casillas[f][c+1].bomVecinas+=1;
                    if (f!=(t.filas-1)) t.casillas[f+1][c+1].bomVecinas+=1;
                }

                if (f!=(t.filas-1)) t.casillas[f+1][c].bomVecinas+=1;


            }
            i++
        }
    }

}


void jugada (tablero *t,int *perdedor){
    unsigned fila;
    unsigned char columna;
    caracteres car =0;

    do{
        printf("Ingrese una fila entre 0 y 7: ");
        scanf("%u",&fila);
    } while (!(fila>= 0 && fila<= 7));


    do{
        printf("Ingrese una columna entre A y H: ");
        scanf("%c",&columna);
    } while (!(columna>= 'A' && columna<= 'H'));

    printf("Ingrese '?' para marcar/desmarcar la casilla: ");
    scanf("%d", &car);
}


