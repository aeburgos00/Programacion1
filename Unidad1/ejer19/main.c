#include "../Bibliotecas/fechasMio.h"

int main()
{
    int dia, mes, anio;
    printf("Ingrese un dia(0 para finalizar): ");
    scanf("%d",&dia);
    while(dia!=0){
        printf("\nIngrese un mes: ");
        scanf("%d",&mes);
        printf("\nIngrese un anio: ");
        scanf("%d",&anio);
        switch(diaDeLaSemana(dia,mes,anio)){
        case 0:
            printf("\nLa fecha %02d/%02d/%04d es un Lunes\n",dia,mes,anio);
            break;
        case 1:
            printf("\nLa fecha %02d/%02d/%04d es un Martes\n",dia,mes,anio);
            break;
        case 2:
            printf("\nLa fecha %02d/%02d/%04d es un Miercoles\n",dia,mes,anio);
            break;
        case 3:
            printf("\nLa fecha %02d/%02d/%04d es un Jueves\n",dia,mes,anio);
            break;
        case 4:
            printf("\nLa fecha %02d/%02d/%04d es un Viernes\n",dia,mes,anio);
            break;
        case 5:
            printf("\nLa fecha %02d/%02d/%04d es un Sabado\n",dia,mes,anio);
            break;
        case 6:
            printf("\nLa fecha %02d/%02d/%04d es un Domingo\n",dia,mes,anio);
            break;
        }
        printf("Ingrese un dia(0 para finalizar): ");
        scanf("%d",&dia);
    }
    return 0;
}
