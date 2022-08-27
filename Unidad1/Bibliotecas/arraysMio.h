#ifndef ARRAYSMIO_H
#define ARRAYSMIO_H

#include <stdio.h>
#include <stdlib.h>

int validarEntre(int men, int may);

void mostrarVec(int *vec, int tam);

//punto 22
void insertarSegunPos(int* vec, int pos, int tam, int valor, int cantElem);

//punto 23
void insertarEnVecOrdAsc(int* vec, int tam, int valor);

#endif // ARRAYSMIO_H
