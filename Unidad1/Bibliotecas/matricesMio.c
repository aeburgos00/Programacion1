#include "matricesMio.h"

///MOSTRAR MATRIZ
void mostrarMatrizEnt(int mat[TAM][TAM], int f, int c){
    int i, j;
    for(i=0;i<f;i++){
        for(j=0;j<c;j++)
            printf("%d\t", mat[i][j]);
        printf("\n");
    }
}

void mostrarMatrizReal(double mat[TAM][TAM], int f, int c){
    int i, j;
    for(i=0;i<f;i++){
        for(j=0;j<c;j++)
            printf("%5.2lf\t", mat[i][j]);
        printf("\n");
    }
}

///PUNTO 29
//SUMATORIA DE MATRIZ SUPERIOR CON DIAGONAL PRINCIPAL
double sumMatSupConDiagPrin(double mat[TAM][TAM], int f, int c){
    int i,j;
    double suma=0;
    for(i=0;i<f;i++)
        for(j=0;j<c;j++)
            if(i<=j)
                suma+=mat[i][j];
    return suma;
}

//SUMATORIA DE MATRIZ SUPERIOR CON DIAGONAL PRINCIPAL
double sumMatSupSinDiagPrin(double mat[TAM][TAM], int f, int c){
    int i,j;
    double suma=0;
    for(i=0;i<f;i++)
        for(j=0;j<c;j++)
            if(i<j)
                suma+=mat[i][j];
    return suma;
}

//SUMATORIA DE MATRIZ SUPERIOR CON DIAGONAL SECUNDARIA
double sumMatSupConDiagSecun(double mat[TAM][TAM], int f, int c){
    int i,j;
    double suma=0;
    for(i=0;i<f;i++)
        for(j=0;j<c;j++)
            if( j<=(c-1-i))
                suma+=mat[i][j];
    return suma;
}

//SUMATORIA DE MATRIZ SUPERIOR SIN DIAGONAL SECUNDARIA
double sumMatSupSinDiagSecun(double mat[TAM][TAM], int f, int c){
    int i,j;
    double suma=0;
    for(i=0;i<f;i++)
        for(j=0;j<c;j++)
            if( j<(c-1-i))
                suma+=mat[i][j];
    return suma;
}

//SUMATORIA DE MATRIZ INFERIOR CON DIAGONAL PRINCIPAL
double sumMatInfConDiagPrin(double mat[TAM][TAM], int f, int c){
    int i,j;
    double suma=0;
    for(i=0;i<f;i++)
        for(j=0;j<c;j++)
            if(j<=i)
                suma+=mat[i][j];
    return suma;
}

//SUMATORIA DE MATRIZ INFERIOR SIN DIAGONAL PRINCIPAL
double sumMatInfSinDiagPrin(double mat[TAM][TAM], int f, int c){
    int i, j;
    double suma=0;
    for(i=0;i<f;i++)
        for(j=0;j<c;j++)
            if(j<i)
                suma+=mat[i][j];
    return suma;
}

//SUMATORIA DE MATRIZ INFERIOR CON DIAGONAL SECUNDARIA
double sumMatInfConDiagSecun(double mat[TAM][TAM], int f, int c){
    int i,j;
    double suma=0;
    for(i=0;i<f;i++)
        for(j=0;j<c;j++)
            if(j>=(c-1-i))
                suma+=mat[i][j];
    return suma;
}

//SUMATORIA DE MATRIZ INFERIOR SIN DIAGONAL SECUNDARIA
double sumMatInfSinDiagSecun(double mat[TAM][TAM], int f, int c){
    int i,j;
    double suma=0;
    for(i=0;i<f;i++)
        for(j=0;j<c;j++)
            if(j>(c-1-i))
                suma+=mat[i][j];
    return suma;
}

///PUNTO 30

//TRAZA DIAGONAL PRINCIPAL
int trazaDiagPrin(int mat[TAM][TAM], int f, int c){
    int i, j, suma=0;
    for(i=0;i<f;i++)
        for(j=0;j<c;j++)
            if(i==j)
                suma+=mat[i][j];
    return suma;
}

//TRAZA DIAGONAL SECUNDARIA
int trazaDiagSecun(int mat[TAM][TAM], int f, int c){
    int i, j, suma=0;
    for(i=0;i<f;i++)
        for(j=0;j<c;j++)
            if(j==(c-1-i))
                suma+=mat[i][j];
    return suma;
}

///ES MATRIZ DIAGONAL
int esMatDiagonal(int mat[TAM][TAM], int f, int c){
    int i,j;
    for(i=0;i<f;i++)
        for(j=0;j<c;j++)
            if( (i!=j && mat[i][j]!=0) || (trazaDiagPrin(mat,f,c)==0))
                return 0;
    return 1;
}

///ES MATRIZ IDENTIDAD
int esMatIdentidad(int mat[TAM][TAM], int f, int c){
    int i,j;
    for(i=0;i<f;i++)
        for(j=0;j<c;j++)
            if((i==j && mat[i][j]!=1) || (i!=j && mat[i][j]!=0))
                    return 0;
    return 1;
}

///ES MATRIZ SIMETRICA
int esMatSimetrica(int mat[TAM][TAM], int f, int c){
    int i,j;
    for(i=0;i<f;i++)
        for(j=0;j<i;j++)
            if(mat[i][j]!=mat[j][i])
                return 0;
    return 1;
} //la optimice para que no recorra toda la matriz sino hasta la diagonal principal y compare... No hace falta pasarle el numero de columnas como parametro de ser asi



