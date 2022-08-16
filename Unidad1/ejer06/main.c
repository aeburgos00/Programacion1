#include <stdio.h>
#include <stdlib.h>
#include "../mathMio.h"

int main()
{
    float x, tol;
    printf("Ingrese un valor de X para la funcion sen(X): ");
    scanf("%f", &x);
    printf("Ingrese un valor de tolerancia (valor entre 0 y 1): ");
    scanf("%f", &tol);
    printf("\nEl valor de sen(%.2f) es %.3f", x, senX(x, tol));
    return 0;
}
