#ifndef MATHMIO_H
#define MATHMIO_H

//validaciones
double ingresoDeNumPositivo();
int ingresoDeEntNoNegativo();
int ingresoDeMayorQue(int n);

//punto 1
int factorial(int num);

//punto 2
int combinatoria(int mayor, int menor);

//punto 3
float potencia(float num, int pot);
float eALaX(float x, float tol);

//punto 4
double valorAbsoluto(double num);
float raizCuadrada(float x, float tol);

//punto 5
int perteneceFibonacci(int num);

//punto 6
float senX(float x, float tol);

#endif // MATHMIO_H
