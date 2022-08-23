#ifndef FECHASMIO_H
#define FECHASMIO_H

#include <stdio.h>
#include <stdlib.h>

#define ANIO_BASE 1601

typedef struct
{
    int dia,
        mes,
        anio;
} tFecha;


//punto 14
int fechaValida(int d, int m, int a);

//punto 15
tFecha diaSiguiente(int d, int m, int a);

//punto 16
tFecha sumarNDiasAFecha(int d, int m, int a, int n);

//punto 17
tFecha restarNDiasAFecha(int d, int m, int a, int n);

//punto 18
int difDiasEntreFechas(int d1, int m1, int a1, int d2, int m2, int a2);

#endif // FECHASMIO_H
