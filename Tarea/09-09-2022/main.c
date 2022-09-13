#include "fcMemDinamica.h"

int main()
{
    /*int** mat;
    int cantFilas=4, cantCol=4;
    int i,j;

    mat = crearMatDinamica(cantFilas, cantCol);
    if(!mat)
        return -1;

    for(i=0;i<cantFilas;i++)
        for(j=0;j<cantCol;j++)
            mat[i][j]=1+i+j;

    mostrarMatrizEnt(mat, cantFilas, cantCol);*/

    printf("---CHAR---\n");
    char cad[]="Hola a todos";
    mostrarVecGenerico(cad,sizeof(cad[0]),sizeof(cad)/sizeof(cad[0]),mostrarChar);
    printf("\n");
    qsort(cad, sizeof(cad)/sizeof(cad[0]), sizeof(cad[0]),cmpCharAsc);
    mostrarVecGenerico(cad,sizeof(cad[0]),sizeof(cad)/sizeof(cad[0]),mostrarChar);
    printf("\n");

    printf("\n---ENTEROS---\n");
    int vecEnt[10]={2,9,3,6,1,4,7,8,10,6};
    mostrarVecGenerico(vecEnt, sizeof(vecEnt[0]), sizeof(vecEnt)/sizeof(vecEnt[0]),mostrarEntero);
    printf("\n");
    qsort(vecEnt, sizeof(vecEnt)/sizeof(vecEnt[0]), sizeof(vecEnt[0]),cmpEntAsc);
    mostrarVecGenerico(vecEnt, sizeof(vecEnt[0]), sizeof(vecEnt)/sizeof(vecEnt[0]),mostrarEntero);
    printf("\n");

    printf("\n---FLOAT---\n");
    float vecF[10]={7.5,4.2,1.33,2,8.96,3.43,10,5,6.7,9.01};
    mostrarVecGenerico(vecF, sizeof(vecF[0]), sizeof(vecF)/sizeof(vecF[0]),mostrarFloat);
    printf("\n");
    qsort(vecF, sizeof(vecF)/sizeof(vecF[0]),sizeof(vecF[0]),cmpFloAsc);
    mostrarVecGenerico(vecF, sizeof(vecF[0]), sizeof(vecF)/sizeof(vecF[0]),mostrarFloat);
    printf("\n");  ///OJO QUE ORDENA MAL EL 3.43 Y EL 4.2

    printf("\n---ALUMNO---\n");
    t_alumno vecAlum[5]={
        {"Agustin Burgos", 42572887, {04,06,2000},8.20},
        {"Tobias Spinelli", 42572999, {24,06,2000},8.5},
        {"Juan Mercuri", 42570111, {03,12,1999},4.20},
        {"Antonio El Emperador", 10234555, {15,07,1940},10},
        {"Pipa Benedetto", 29333666, {23,02,1990},6}
    };
    mostrarVecGenerico(vecAlum, sizeof(vecAlum[0]), sizeof(vecAlum)/sizeof(vecAlum[0]),mostrarAlum);
    printf("\n\nOrdenado por: Fecha de nacimiento, nombre y apellido, dni (ASCENDENTE)\n");
    qsort(vecAlum, sizeof(vecAlum)/sizeof(vecAlum[0]),sizeof(vecAlum[0]),cmpAlumAsc);
    mostrarVecGenerico(vecAlum, sizeof(vecAlum[0]), sizeof(vecAlum)/sizeof(vecAlum[0]),mostrarAlum);
    printf("\n");  ///NO ORDENO NADA

    return 0;
}
