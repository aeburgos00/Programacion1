#include <stdio.h>
#include <stdlib.h>
#include "../mathMio.h"

int main()
{
    int num;
    num = ingresoDeEntNoNegativo();
    if(perteneceFibonacci(num))
        printf("%d Pertenece a la serie de Fibonacci", num);
    else
        printf("%d No pertenece a la serie de Fibonacci", num);
    return 0;
}
