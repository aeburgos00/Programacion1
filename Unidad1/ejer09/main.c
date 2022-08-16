#include <stdio.h>
#include <stdlib.h>
#include "../mathMio.h"

int main()
{
    int n1, n2;
    n1 = ingresoDeEntNoNegativo();
    n2 = ingresoDeMayorQue(1);
    printf("El cociente entre %d y %d da como resultado %d, y el resto es %d", n1, n2, cocienteDeEnteros(n1, n2), restoDeEnteros(n1,n2));
    return 0;
}
