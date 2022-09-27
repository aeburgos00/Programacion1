#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ERR_ARCH 3
#define TAM_CAD 25
#define TAM_CAD_PARSEO 100

typedef struct{
    int dia,mes,anio;
}t_fecha;

typedef struct{
    int dni;
    char sexo;
    char apellido[TAM_CAD];
    char nombre[TAM_CAD];
    float promedio;
    t_fecha fProm;
}t_estudiantes;

void binarioATextoFijo(const char* nomArcBin, const char* nomArcTxt);
void binarioATextoVar(const char* nomArcBin, const char* nomArcTxt);

int crearLoteDePruebaEst();
/*
void textoFijoABinario(const char* nomArcTxt, const char* nomArcBin);
void textoVarABinario(const char* nomArcTxt, const char* nomArcBin);
*/
void textoABinario(const char* nomArcTxt, const char* nomArcBin, void (*parsearLong)(const char*, void*));

void txtVarABinAMano(const char*cad, void* dato);
void txtVarABin(const char*cad, void* dato);

#endif // FUNCIONES_H_INCLUDED
