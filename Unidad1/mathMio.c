#include <stdio.h>

//FUNCION FACTORIAL

int factorial(int num) {
    int i, fac=1;
    if(num!=0)
        for(i=1;i<=num;i++)
            fac*=i;
    return fac;
}

//VALIDACIONES
// --> CAMBIAR VALIDACIONES PARA QUE PASE EL DATO POR PARAMETRO Y SOLO SE HAGA MAYOR, MAYOR IGUAL, MENOR IGUAL, ENTRE RANGOS, IGUAL A

double ingresoDeNumPositivo() {
    double num;
    printf("Ingresar un numero positivo: ");
    do{
        scanf("%lf", &num);
        if(num<=0)
            printf("Error, por favor ingrese un numero positivo: ");
    }while(num<=0);
    return num;
}

int ingresoDeEntNoNegativo(){
    int num;
    printf("Ingresar un entero positivo: ");
    do{
        scanf("%d", &num);
        if(num<0)
            printf("Error, por favor ingrese un entero positivo: ");
    }while(num<0);
    return num;
}

int ingresoDeMayorQue(int n){
    int m;
    printf("Ingresar un entero mayor o igual que %d: ", n);
    do{
        scanf("%d", &m);
        if(m<n)
            printf("Error, por favor ingrese un entero mayor o igual que %d: ", n);
    }while(m<n);
    return m;
}

//COMBINATORIA

int combinatoria(int mayor, int menor) {
    return (float)(factorial(mayor)/(factorial(menor)*factorial(mayor-menor)));
}

//POTENCIA

float potencia(float num, int pot){
    int resul = 1;
    for(int i=0;i<pot;i++)
        resul *= num;
    return resul;
}

// FUNCIONES MATEMATICAS

float eALaX(float x, float tol) {
    int i=0;
    float eTotal = 0, termCalc;
    do{
        termCalc = (potencia(x,i)/factorial(i));
        eTotal += termCalc;
        i++;
    }while(termCalc>=tol);
    return eTotal;
}

double valorAbsoluto(double num) {
    if(num<0)
        num *= -1;
    return num;
}

float raizCuadrada(float x, float tol) {
    float diferencia, termAnt, termAct = 1;
    do{
        termAnt = termAct;
        termAct = (termAnt+(x/termAnt))/2;
        diferencia = valorAbsoluto(termAct-termAnt);
    }while(diferencia>=tol);
    return termAct;
}

float senX(float x, float tol) {
    float seno=0, term;
    int i=1, signo=0;
    do{
        term = (potencia(x,i)/factorial(i));
        i+=2;
        if(!signo) {
            seno+=term;
            signo=1;
        } else {
            seno-=term;
            signo=0;
        }
    }while(term>tol);
    return seno;
}

//FIBONACCI

int perteneceFibonacci(int num) {
    int termAntAnt,termAnt=1, termAct=1;
    do{
        termAntAnt = termAnt;
        termAnt = termAct;
        termAct= termAnt + termAntAnt;
        if(num==termAct)
            return 1;
    }while(num>termAct);
    return 0;
}