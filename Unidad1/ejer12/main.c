#include <stdio.h>
#include <stdlib.h>
#include "../mathMio.h"

int main()
{
    int num;
    num=ingresoDeEntNoNegativo();
    printf("La suma de los primeros numeros naturales pares menores que %d es %d",num, sumaParesNaturalesMenoresQueN(num));
    return 0;
}
