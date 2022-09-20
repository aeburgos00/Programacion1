#include <stdio.h>
#include <stdlib.h>

#define REDONDEO(X) ((X-(int)X)>=0.5?(int)X+1:(int)X)
#define MIN(A,B) (((A)<(B))?(A):(B))
#define MAX(A,B) (((A)>(B))?(A):(B))

#define INTERCAMBIOINT(A,B) { \
                            (*A)=(*A)+(*B);\
                            (*B)=(*A)-(*B); \
                            (*A)=(*A)-(*B);\
                            }

/*
#define INTERCAMBIOINT(A,B) { \
                            (*A)^=(*B);\
                            (*B)^=(*A); \
                            (*A)^=(*B);\
                            }
*/ ///ESTA FORMA FUNCIONA PERO NO SE MUY BIEN COMO ANDA EL ^ //INVESTIGAR


double menorEntreEnt(double n1, double n2);
void intercambioEnteros(int* n1, int* n2);

int main()
{
    int a=9, b=5;
    float var= 5.5;
    printf("%.2f REDONDEADO es %d", var, REDONDEO(var));
    printf("\nEl minimo entre %d y %d es %d",a,b,MIN(a,b));
    printf("\nEl maximo entre %d y %d es %d",a,b,MAX(a,b));

    printf("\na=%d  b=%d", a,b);
    intercambioEnteros(&a,&b);
    printf("\nFuncion intercambio: a=%d  b=%d", a,b);
    INTERCAMBIOINT(&a,&b);
    printf("\nMacro intercambio: a=%d  b=%d", a,b);


    return 0;
}

double menorEntreEnt(double n1, double n2){
    return n1<n2?n1:n2;
}

void intercambioEnteros(int* n1, int* n2){
    int aux;
    aux = *n1;
    *n1 = *n2;
    *n2 = aux;
}
