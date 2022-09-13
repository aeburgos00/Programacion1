#include "../Bibliotecas/matricesMio.h"

int main()
{
    int mat[FIL][COL]={
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 1}
    };

    mostrarMatrizEnt(mat, FIL, COL);

    printf("\n\nLa matriz %s diagonal\n", (esMatDiagonal(mat, FIL, COL))?"es":"no es");

    return 0;
}
