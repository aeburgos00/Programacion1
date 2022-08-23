#include <stdio.h>
#include <stdlib.h>

#define REDONDEO(X) ((X-(int)X)>=0.5?(int)X+1:(int)X)
#define MIN(A,B) (((A)<(B))?(A):(B))
#define MAX(A,B) (((A)>(B))?(A):(B))
///Escriba una función que intercambie dos enteros que recibe por puntero
///Escriba una macro multilínea que cumpla con el mismo cometido

double menorEntreEnt(double n1, double n2);

int main()
{
    int a=9, b=5;
    float var= 5.5;
    printf("%d", REDONDEO(var));
    printf("\n%d",MIN(a,b));
    return 0;
}

double menorEntreEnt(double n1, double n2){
    return n1<n2?n1:n2;
}
