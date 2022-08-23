#include "fechasMio.h"

//FUNCIONES INTERNAS
int cantDiasDelMes(int mes, int anio);
int esBisiesto(int anio);
int diasDelAnio(int d, int m, int a);
int cantDiasDelAnio(int anio);


//FECHA VALIDA
int fechaValida(int d, int m, int a)
{
    return (a>=ANIO_BASE && m>=1&&m<=12 && d>=1 && d<=cantDiasDelMes(m, a));
}

//DIA SIGUIENTE
tFecha diaSiguiente(int d, int m, int a)
{
    tFecha diaSig;
    if(d == cantDiasDelMes(m,a))
    {
        diaSig.dia = 1;
        if(m!=12)
        {
            diaSig.mes = m+1;
            diaSig.anio = a;
        }
        else
        {
            diaSig.mes = 1;
            diaSig.anio = a+1;
        }
    }
    else
    {
        diaSig.dia = d+1;
        diaSig.mes = m;
        diaSig.anio = a;
    }
    return diaSig;
} ///esta funcion se puede mejorar como hice en SUMAR N DIAS A FECHA o RESTAR N DIAS A FECHA

//SUMAR N DIAS A FECHA
tFecha sumarNDiasAFecha(int d, int m, int a, int n){
    int cmd;
    tFecha fechaSum;
    fechaSum.dia = d+n;
    fechaSum.mes = m;
    fechaSum.anio = a;

    while(fechaSum.dia > (cmd=cantDiasDelMes(fechaSum.mes,fechaSum.anio))){
        fechaSum.dia -= cmd;
        fechaSum.mes++;
        if(fechaSum.mes==13){
            fechaSum.mes=1;
            fechaSum.anio++;
        }
    }
    return fechaSum;
}

//RESTAR N DIAS A FECHA
tFecha restarNDiasAFecha(int d, int m, int a, int n){
    int cmd;
    tFecha fechaRes;
    fechaRes.dia = d-n;
    fechaRes.mes = m;
    fechaRes.anio = a;

    while(fechaRes.dia<=0){
        fechaRes.mes--;
        cmd=cantDiasDelMes(fechaRes.mes, fechaRes.anio);
        fechaRes.dia+=cmd;
        if(fechaRes.mes==0){
            fechaRes.mes=13;
            fechaRes.anio--;
        }
    }
    return fechaRes;
}

//DIFERENCIA DE DIAS ENTRE FECHAS
int difDiasEntreFechas(int d1, int m1, int a1, int d2, int m2, int a2){
    int dif, anioAux;
    dif = diasDelAnio(d2,m2,a2)-diasDelAnio(d1,m1,a1);
    for(anioAux=a1;anioAux<a2;anioAux++)
        dif+=cantDiasDelAnio(anioAux);
    return (dif<0)?dif*-1:dif;
} ///REPASARLO BIEN ESTE Y VER SI SE PUEDE OPTIMIZAR


//DESARROLLO DE FUNCIONES INTERNAS
int cantDiasDelMes(int mes, int anio){
    static int cantDiasMeses[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    if(mes==2 && esBisiesto(anio))
        return 29;
    return cantDiasMeses[mes];
}

int esBisiesto(int anio)
{
    return (anio%4==0 && (anio%400==0 || anio%100!=0));
}

int diasDelAnio(int d, int m, int a){
    static int cantDiasTranscurridos[][13] ={
    //   - E F  M  A  M   J   J   A   S   O   N   D
        {0,0,31,59,90,120,151,181,212,243,273,304,334},
        {0,0,31,60,91,121,152,182,213,244,274,305,335}
    };
    return cantDiasTranscurridos[esBisiesto(a)][m]+d;
}

int cantDiasDelAnio(int anio) {
    return (esBisiesto(anio)?366:365);
}
