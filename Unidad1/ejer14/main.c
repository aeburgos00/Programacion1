#include "../Bibliotecas/fechasMio.h"

int main()
{
    int dia, mes, anio;
    printf("Ingrese un dia: ");
    scanf("%d",&dia);
    printf("\nIngrese un mes: ");
    scanf("%d",&mes);
    printf("\nIngrese un anio: ");
    scanf("%d",&anio);
    printf("\nLa fecha %02d/%02d/%04d es %s", dia, mes, anio, ((fechaValida(dia, mes, anio))?"valida":"invalida"));
    return 0;
}
