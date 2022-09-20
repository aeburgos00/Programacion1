#include "funciones.h"
#include "../../misBibliotecasReplicas/string/stringMio.h"

int main()
{
    FILE
    /*int a = 25;
    int b = 10;

    printf("a=%d\n",a);
    mem_cpy(&a,&b,1);
    printf("Dsp del memcpy con b\na=%d\n",a);
*/
/*
    char cadmm[]="tito el bambino";
    printf("Cad  pre MM: %s",cadmm);
    mem_move(cadmm+1,cadmm,sizeof(cadmm)/sizeof(cadmm[0]));
    printf("\nCad post MM: %s",cadmm);

    char cadmc[]="tito el bambino";
    printf("\nCad  pre MC: %s",cadmc);
    mem_move(cadmc+1,cadmc,sizeof(cadmc)/sizeof(cadmc[0]));
    printf("\nCad post MC: %s",cadmc);
*/

    ///TEST ALGORITMO DE SELECCION
    ///ENTEROS
    int vec[]={13,5,1,2,9,12,3,7,10,4,14,6,8,15,11};
    mostrarVecGenerico(vec,sizeof(vec[0]),sizeof(vec)/sizeof(vec[0]),mostrarEntero);
    algSeleccion(vec, sizeof(vec)/sizeof(vec[0]), sizeof(vec[0]), cmpEntAsc);
    printf("\n");
    mostrarVecGenerico(vec,sizeof(vec[0]),sizeof(vec)/sizeof(vec[0]),mostrarEntero);

    ///CHARS
//    char cad[]={"asdfvhbnjdiopioez"};
//    mostrarVecGenerico(cad,sizeof(cad[0]),sizeof(cad)/sizeof(cad[0]),mostrarChar);
//    algSeleccion(cad, sizeof(cad)/sizeof(cad[0]), sizeof(cad[0]), cmpCharAsc);
//    printf("\n");
//    mostrarVecGenerico(cad,sizeof(cad[0]),sizeof(cad)/sizeof(cad[0]),mostrarChar);

    ///FLOAT (Porque no lo ordena???)
//    double vec[]={13.2,5.1,1.5,2.1,9.02, 5.05,12.12,3.7,7.33,10,4.18,14.7,6.6,8,15.22,5.01,11.11};
//    mostrarVecGenerico(vec,sizeof(vec[0]),sizeof(vec)/sizeof(vec[0]),mostrarFloat);
//    algSeleccion(vec, sizeof(vec)/sizeof(vec[0]), sizeof(vec[0]), cmpFloAsc);
//    printf("\n");
//    mostrarVecGenerico(vec,sizeof(vec[0]),sizeof(vec)/sizeof(vec[0]),mostrarFloat);

    ///ALUMNOS
//    t_alumno vecAlum[5]={
//        {"Agustin Burgos", 42572887, {04,06,2000},8.20},
//        {"Tobias Spinelli", 42572999, {24,06,2000},8.5},
//        {"Juan Mercuri", 42570111, {03,12,1999},4.20},
//        {"Antonio El Emperador", 10234555, {15,07,1940},10},
//        {"Pipa Benedetto", 29333666, {23,02,1990},6}
//    };
//    mostrarVecGenerico(vecAlum, sizeof(vecAlum[0]), sizeof(vecAlum)/sizeof(vecAlum[0]),mostrarAlum);
//    printf("\n\nOrdenado por: Fecha de nacimiento, nombre y apellido, dni (ASCENDENTE)\n");
//    algSeleccion(vecAlum, sizeof(vecAlum)/sizeof(vecAlum[0]), sizeof(vecAlum[0]), cmpAlumAsc);
//    mostrarVecGenerico(vecAlum, sizeof(vecAlum[0]), sizeof(vecAlum)/sizeof(vecAlum[0]),mostrarAlum);
//    printf("\n");


    return 0;
}
