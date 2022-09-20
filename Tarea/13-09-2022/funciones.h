#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include <stdio.h>
#include <string.h>

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

///FUNCIONES
void mostrarVecGenerico(void* vec, int tamElem, int cantElem, void (*mostrar)(void*));

void algSeleccion(void* vec, int cantElem, int tamElem, int (*comparar)(const void*, const void*));

void intercambio(void* e1, void* e2, int tamElem);

void* buscarMenor(void*vec, int cantElem, int tamElem, int (*comparar)(const void*, const void*));


#endif // FUNCIONES_H_INCLUDED
