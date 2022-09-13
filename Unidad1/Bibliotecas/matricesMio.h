#ifndef MATRICESMIO_H
#define MATRICESMIO_H

#include <stdio.h>
#include <stdlib.h>

#define TAM 5
#define FIL 5
#define COL 5

/*double mat[FIL][COL]={
        { 1, 2, 3, 4, 5},
        {11,12,13,14,15},
        {21,22,23,24,25},
        {31,32,33,34,35},
        {41,42,43,44,45}
    };*/
/*double mat[FIL][COL]={
        {1, 2, 3, 4, 5},
        {2, 4, 6, 8,10},
        {3, 6, 9,12,15},
        {4, 8,12,16,20},
        {5,10,15,20,25}
    };
*/
/*
int mat[FIL][COL]={
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 1}
    };
*/

//MOSTRAR MATRICES
void mostrarMatrizEnt(int mat[TAM][TAM], int f, int c);
void mostrarMatrizReal(double mat[TAM][TAM], int f, int c);

//punto 29
double sumMatSupConDiagPrin(double mat[TAM][TAM], int f, int c);
double sumMatSupSinDiagPrin(double mat[TAM][TAM], int f, int c);
double sumMatSupConDiagSecun(double mat[TAM][TAM], int f, int c);
double sumMatSupSinDiagSecun(double mat[TAM][TAM], int f, int c);

double sumMatInfConDiagPrin(double mat[TAM][TAM], int f, int c);
double sumMatInfSinDiagPrin(double mat[TAM][TAM], int f, int c);
double sumMatInfConDiagSecun(double mat[TAM][TAM], int f, int c);
double sumMatInfSinDiagSecun(double mat[TAM][TAM], int f, int c);

//punto 30
int trazaDiagPrin(int mat[TAM][TAM], int f, int c);
int trazaDiagSecun(int mat[TAM][TAM], int f, int c);

//punto 31
int esMatDiagonal(int mat[TAM][TAM], int f, int c);

//punto 32
int esMatIdentidad(int mat[TAM][TAM], int f, int c);

//punto 33
int esMatSimetrica(int mat[TAM][TAM], int f, int c);

#endif // MATRICESMIO_H
