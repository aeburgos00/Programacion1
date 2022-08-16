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
double senX(double x, double tol);

//punto 7
void numPerfDefAbun(int num);

//punto 8
int productoXSumasSucesivas(int num1, int num2);

//punto 9
int cocienteDeEnteros(int num1, int num2);
int restoDeEnteros(int num1, int num2);

//punto 10
int sumaPrimerosNNaturales(int n);

//punto 11
int sumaPrimerosNParesNaturales(int n);

//punto 12
int sumaParesNaturalesMenoresQueN(int n);

//punto 13
int naturalPrimo(int num);

#endif // MATHMIO_H
