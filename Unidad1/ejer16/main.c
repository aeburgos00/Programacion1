#include "../Bibliotecas/fechasMio.h"

int main()
{
    int dia, mes, anio, n;
    tFecha fecSum;

    printf("Ingrese un dia: ");
    scanf("%d",&dia);
    while(dia!=0){
        printf("\nIngrese un mes: ");
        scanf("%d",&mes);
        printf("\nIngrese un anio: ");
        scanf("%d",&anio);
        printf("\nIngrese una cantidad N de dias a sumar: ");
        scanf("%d",&n);
        fecSum = sumarNDiasAFecha(dia,mes,anio, n);
        printf("\nLa suma de %d a la fecha %02d/%02d/%04d es %02d/%02d/%04d", n, dia, mes, anio, fecSum.dia, fecSum.mes, fecSum.anio);
        printf("\nIngrese un dia: ");
        scanf("%d",&dia);
    }
    return 0;
}
