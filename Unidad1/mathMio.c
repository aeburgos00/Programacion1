#include <stdio.h>
#include "mathMio.h"

//FUNCION FACTORIAL

int factorial(int num) {
    unsigned long int i, fac=1;
    if(num!=0)
        for(i=1;i<=num;i++)
            fac*=i;
    return fac;
    //HACERLO UNSIGNED LONG AL FACTORIAL
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

double senX(double x, double tol) {
    double seno=0, term;
    int i=1, signo=1;
    do{
        term = (potencia(x,i)/factorial(i));
        i+=2;
//        if(!signo) {
//            seno+=term;
//            signo=1;
//        } else {
//            seno-=term;
//            signo=0;
//        }
        //ESTE ERA EL MIO ANTES
        seno+=term*signo;
        signo*=-1;
        //FORMA MAS OPTIMA DE HACERLO
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

//NATURAL PERFECTO, DEFICIENTE O ABUNDANTE

void numPerfDefAbun(int num) {
    int sum=0, i;
    for(i=1;i<num;i++){
        if(!(num%i))
            sum+=i;
    }
    printf("El numero %d es %s", num, (num==sum? "Perfecto":(num<sum)?"Abundante":"Deficiente"));
}

//PRODUCTO POR SUMAS SUCESIVAS

int productoXSumasSucesivas(int num1, int num2){
    int resul=0,i;
    for(i=0;i<num2;i++){
        resul+=num1;
    }
    return resul;
}

//COCIENTE Y RESTO ENTEROS
int cocienteDeEnteros(int num1, int num2){
    return (num1/num2);
}
int restoDeEnteros(int num1, int num2){
    return (num1%num2);
}

//SUMA PRIMEROS N NATURALES
int sumaPrimerosNNaturales(int n){
    int suma=0;
    for(int i=0;i<=n;i++)
        suma+=i;
    return suma;
}
//PARES
int sumaPrimerosNParesNaturales(int n){
    int suma=0,i;
    for(i=1;i<=n;i++){
        suma+=i*2;
    }
    return suma;
}
//PARES MENORES A N
int sumaParesNaturalesMenoresQueN(int n){
    int suma=0,i;
    for(i=0;i<n;i+=2){
        suma+=i;
    }
    return suma;
}

//NATURAL PRIMO
int naturalPrimo(int num){
    int div=0, i=1;
    do{
        if((num%i)==0)
            div++;
        i++;
    }while(i<num && div<2);
    return ((div==1)?1:0);
}

//MULTIPLICACION RUSA
int multiplicacionRusa(int num1, int num2){
    int resul=0;
    while(num1!=1){
        if(num1%2){
            resul+=num2;
        }
        num1/=2;
        num2*=2;
    }
    resul+=num2;
    return resul;
}

//PARTE ENTERA DE UN REAL
int parteEnteraDeUnReal(double num){
    return (int)num;
}
