#include <stdio.h>
#include <stdlib.h>
#include "../mathMio.h"

int main()
{
    int num1, num2;
    printf("Ingrese un valor entero (0 para terminar): ");
    scanf("%d", &num1);
    while(num1){
        printf("\nIngrese otro valor entero: ");
        scanf("%d", &num2);
        printf("\nLa multiplicacion rusa de %d y %d da como resultado %d", num1, num2, multiplicacionRusa(num1, num2));
        printf("\n\nIngrese un valor entero (0 para terminar): ");
        scanf("%d", &num1);
    };
    return 0;
}
