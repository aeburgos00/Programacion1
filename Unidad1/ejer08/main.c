#include <stdio.h>
#include <stdlib.h>
#include "../mathMio.h"

int main()
{
    int n1, n2;
    n1 = ingresoDeEntNoNegativo();
    n2 = ingresoDeEntNoNegativo();
    printf("El producto entre %d y %d da como resultado %d", n1, n2, productoXSumasSucesivas(n1, n2));
    return 0;
}
