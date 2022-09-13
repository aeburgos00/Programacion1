#ifndef FCMEMDINAMICA_H
#define FCMEMDINAMICA_H

#include <stdio.h>
#include <stdlib.h>

#define TAM 31

typedef struct{
    int dia;
    int mes;
    int anio;
}t_fecha;

typedef struct{
    char nya[TAM];
    int dni;
    t_fecha fNac;
    float prom;
}t_alumno;

///FUNCIONES DE MOSTRAR
void mostrarEntero(void * dato);
void mostrarFloat(void* dato);
void mostrarChar(void* dato);
void mostrarAlum(void* dato);
///FUNCIONES DE COMPARACION
int cmpCharAsc(const void* v1, const void* v2);
int cmpEntAsc(const void* v1, const void* v2);
int cmpFloAsc(const void* v1, const void* v2);
int cmpAlumAsc(const void* v1, const void* v2);

void mostrarMatrizEnt(int **mat, int f, int c);

int** crearMatDinamica(int cantFilas, int cantCol);

void mostrarVecGenerico(void* vec, int tamElem, int cantElem, void (*mostrar)(void*));


#endif // FCMEMDINAMICA_H
