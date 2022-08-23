#include "../Bibliotecas/fechasMio.h"

int main()
{
    int dia, mes, anio;
    tFecha fecSig;

    printf("Ingrese un dia: ");
    scanf("%d",&dia);
    while(dia!=0){
        printf("\nIngrese un mes: ");
        scanf("%d",&mes);
        printf("\nIngrese un anio: ");
        scanf("%d",&anio);
        fecSig = diaSiguiente(dia,mes,anio);
        printf("\nEl dia despues de %02d/%02d/%04d es %02d/%02d/%04d", dia, mes, anio, fecSig.dia, fecSig.mes, fecSig.anio);
        printf("\nIngrese un dia: ");
        scanf("%d",&dia);
    }
    return 0;
}


