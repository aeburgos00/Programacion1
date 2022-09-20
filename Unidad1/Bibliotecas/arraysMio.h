#ifndef ARRAYSMIO_H
#define ARRAYSMIO_H

#include <stdio.h>
#include <stdlib.h>

#define TAMCAD 21

#define ESBLANCO(ch) ((ch)==' ' || (ch)=='\n' || (ch)=='\t' || (ch)=='\r')
#define TOLOWER(ch)  (((ch)>='A' && (ch)<='Z')? (ch) + ' ': (ch))

int validarEntre(int men, int may);

void mostrarVec(int *vec, int tam);

//punto 22
void insertarSegunPos(int* vec, int pos, int tam, int valor, int cantElem);

//punto 23
void insertarEnVecOrdAsc(int* vec, int tam, int valor);

//punto 24
void eliminarSegunPos(int* vec, int pos, int *cantElem);

//punto 25
void eliminarPrimeraAparicion(int* vec, int valor,int*cantElem);

//punto 26
void eliminarElemDeUnVec(int* vec, int valor, int *cantElem);

//punto 27
int esPalindromo(char* cad);

#endif // ARRAYSMIO_H
