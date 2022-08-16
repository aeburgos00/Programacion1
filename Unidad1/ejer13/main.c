#include <stdio.h>
#include <stdlib.h>
#include "../mathMio.h"

int main()
{
    int num;
    num = ingresoDeEntNoNegativo();
    printf("El numero %d %s primo", num, (naturalPrimo(num))?"es":"no es");
    return 0;
}
