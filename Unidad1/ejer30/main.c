#include "../Bibliotecas/matricesMio.h"

int main()
{
    int mat[FIL][COL]=
    {
        {1, 2, 3, 4, 5},
        {2, 4, 6, 8,10},
        {3, 6, 9,12,15},
        {4, 8,12,16,20},
        {5,10,15,20,25}
    };

    mostrarMatrizEnt(mat, FIL, COL);

    printf("\n\nLa traza principal de la matriz es %d", trazaDiagPrin(mat, FIL, COL));
    printf("\n\nLa traza secundaria de la matriz es %d", trazaDiagSecun(mat, FIL, COL));

    printf("\n");
    return 0;
}
