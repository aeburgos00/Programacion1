#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

#define ERR_ARCH 3
#define TAM_CAD 21

typedef struct{
    int dni;
    char apellido[TAM_CAD];
    char nombre[TAM_CAD];
    char carrera[TAM_CAD];
    char bajaLogica;
}t_Alumnos;

typedef struct{
    int dni;
    char apellido[TAM_CAD];
    char nombre[TAM_CAD];
    char carrera[TAM_CAD];
    char actualizacion;
}t_AlumnosActualizar;

int crearLoteDePruebaAlum();
int crearLoteDePruebaAlumAct();

void mostrarArchivoAlumnos(const char* nombreArch);
void mostrarArchivoAlumnosAct(const char* nombreArch);

int compararAlumDni(const void* al1, const void* al2);

void algoritmoMerge(const char* maestro, const char* novedades, int tamElemMae, int tamElemNov, int(*comparar)(const void*, const void*));



#endif // FUNCIONES_H_INCLUDED
