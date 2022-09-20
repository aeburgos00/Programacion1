#ifndef ARCHIVOS_H
#define ARCHIVOS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ERR_ARCH 3
#define TAM_CAD 21

typedef struct{
    int dni;
    char apellido[TAM_CAD];
    char nombre[TAM_CAD];
    double sueldo;
}t_empleados;

typedef struct{
    int dni;
    char apellido[TAM_CAD];
    char nombre[TAM_CAD];
    float promedio;
}t_estudiantes;

//void generarArcLoteDePrueba(const char* nombreArchivo, void(*cargar)(void* dato));
int crearLoteDePruebaEmp();
int crearLoteDePruebaEst();

int actualizarEmpConEst();

void mostrarArchivoEstudiantes();
void mostrarArchivoEmpleados();

#endif // ARCHIVOS_H
