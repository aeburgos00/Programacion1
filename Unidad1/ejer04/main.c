#include <stdio.h>
#include <stdlib.h>
#include "../mathMio.h"

int main()
{
    float x, tol;
    x = ingresoDeNumPositivo();
    printf("Ingrese un valor de tolerancia (valor entre 0 y 1): ");
    scanf("%f", &tol);
    printf("\nEl valor de %.2f^(1/2) es %.2f", x, raizCuadrada(x, tol));
    return 0;
}
