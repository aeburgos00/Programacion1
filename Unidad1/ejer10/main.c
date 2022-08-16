#include <stdio.h>
#include <stdlib.h>
#include "../mathMio.h"

int main()
{
    int num;
    num=ingresoDeEntNoNegativo();
    printf("La suma de los primeros %d numeros naturales es %d",num, sumaPrimerosNNaturales(num));
    return 0;
}
