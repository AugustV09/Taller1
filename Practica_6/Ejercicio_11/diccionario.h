#ifndef DICCIONARIO_H_INCLUDED
#define DICCIONARIO_H_INCLUDED

typedef struct {
    int cantidad;
    int capacidad;
    char** palabras;
} vectorDinamico;

vectorDinamico d_crearDiccionario();
int d_agregarPalabra(vectorDinamico*, char*);
int d_existePalabra(vectorDinamico, char*);
int d_eliminarPalabra (vectorDinamico, char*);
int d_cargarArchivo(vectorDinamico, char*); //Le mando la direccion del archivo
int d_guardarArchivo(vectorDinamico, char*); //Le mando la direccion del archivo
int d_destruirDiccionario(vectorDinamico*);
#endif // DICCIONARIO_H_INCLUDED
