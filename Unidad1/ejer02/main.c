#include <stdio.h>
#include <stdlib.h>
#include "..\mathMio.h"

int main()
{
    int num1, num2;
    num1 = ingresoDeEntNoNegativo();
    num2 = ingresoDeMayorQue(num1);
    printf("\nLa combinatoria de %d tomados de %d es %d", num2, num1, combinatoria(num2, num1));
    return 0;
}
