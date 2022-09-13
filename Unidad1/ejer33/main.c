#include "../Bibliotecas/matricesMio.h"

int main()
{
    int mat[FIL][COL]={
        {5, 0, 1, 2, 3},
        {0, 9, 4, 5, 6},
        {1, 4, 0, 7, 8},
        {2, 5, 7, 5, 9},
        {3, 6, 8, 9, 1}
    };

    mostrarMatrizEnt(mat,FIL,COL);

    printf("La matriz %s simetrica\n", (esMatSimetrica(mat,FIL,COL)?"es":"no es"));

    return 0;
}
