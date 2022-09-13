#include "../Bibliotecas/matricesMio.h"

#define FIL 5
#define COL 5

int main()
{
    /*double mat[FIL][COL]={
        { 1, 2, 3, 4, 5},
        {11,12,13,14,15},
        {21,22,23,24,25},
        {31,32,33,34,35},
        {41,42,43,44,45}
    };*/
    double mat[FIL][COL]={
        {1, 2, 3, 4, 5},
        {2, 4, 6, 8,10},
        {3, 6, 9,12,15},
        {4, 8,12,16,20},
        {5,10,15,20,25}
    };
    mostrarMatrizReal(mat, FIL, COL);
    printf("\n\n%5.2lf es el valor de la suma de la matriz triangular superior con la diag principal incluida", sumMatSupConDiagPrin(mat,FIL,COL));
    printf("\n\n%5.2lf es el valor de la suma de la matriz triangular superior sin la diag principal", sumMatSupSinDiagPrin(mat,FIL,COL));
    printf("\n\n%5.2lf es el valor de la suma de la matriz triangular superior con la diag secundaria incluida", sumMatSupConDiagSecun(mat,FIL,COL));
    printf("\n\n%5.2lf es el valor de la suma de la matriz triangular superior sin la diag secundaria", sumMatSupSinDiagSecun(mat,FIL,COL));

    printf("\n\n%5.2lf es el valor de la suma de la matriz triangular inferior con la diag principal incluida", sumMatInfConDiagPrin(mat,FIL,COL));
    printf("\n\n%5.2lf es el valor de la suma de la matriz triangular inferior sin la diag principal", sumMatInfSinDiagPrin(mat,FIL,COL));
    printf("\n\n%5.2lf es el valor de la suma de la matriz triangular inferior con la diag secundaria incluida", sumMatInfConDiagSecun(mat,FIL,COL));
    printf("\n\n%5.2lf es el valor de la suma de la matriz triangular inferior sin la diag secundaria", sumMatInfSinDiagSecun(mat,FIL,COL));

    printf("\n");

    return 0;
}
