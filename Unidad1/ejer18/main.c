#include "../Bibliotecas/fechasMio.h"

int main()
{
    tFecha fec1, fec2;
    printf("Ingrese una fecha (dd mm aa): ");
    printf("\nDia fecha 1 (0 para fin): ");
    scanf("%d", &fec1.dia);
    while(fec1.dia!=0){
        printf("\nMes fecha 1: ");
        scanf("%d", &fec1.mes);
        printf("\nAnio fecha 1: ");
        scanf("%d", &fec1.anio);
        printf("\nIngrese otra fecha (dd mm aa): ");
        scanf("%d %d %d", &fec2.dia, &fec2.mes, &fec2.anio);
        printf("\nLa cantidad de dia entre las fechas:");        printf("\nFecha: %02d/%02d/%04d",fec1.dia,fec1.mes,fec1.anio);
        printf("\nFecha: %02d/%02d/%04d",fec2.dia,fec2.mes,fec2.anio);
        printf("\nes de %d dias", difDiasEntreFechas(fec1.dia,fec1.mes,fec1.anio, fec2.dia,fec2.mes,fec2.anio));
        printf("\nIngrese una fecha (dd mm aa): ");
        printf("\nDia fecha 1 (0 para fin): ");
        scanf("%d", &fec1.dia);
    }
    return 0;
}
