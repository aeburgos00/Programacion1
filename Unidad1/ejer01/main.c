#include <stdio.h>
#include <stdlib.h>
#include "../mathMio.h"

int main()
{
    int num;
    printf("Ingrese un numero para calcular su factorial: ");
    scanf("%d", &num);
    printf("\nEl factorial de %d es %d", num, factorial(num));
    return 0;
}

