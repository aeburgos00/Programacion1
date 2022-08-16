#include <stdio.h>
#include <stdlib.h>
#include "../mathMio.h"

int main()
{
    float x, tol;
    printf("Ingrese un valor de X para la funcion e^x: ");
    scanf("%f", &x);
    printf("Ingrese un valor de tolerancia (valor entre 0 y 1): ");
    scanf("%f", &tol);
    printf("\nEl valor de e^%.2f es %.2f", x, eALaX(x, tol));
    return 0;
}
