#include "../Bibliotecas/arraysMio.h"

int main()
{
    int vec[]={7,10,14,2,5,7};
    int val;
    int cantElem = sizeof(vec)/sizeof(vec[0]);
    mostrarVec(vec, cantElem);
    printf("\nIngrese un valor a eliminar del array(0) para terminar: ");
    scanf("%d", &val);
    while(val!=0){
        eliminarPrimeraAparicion(vec, val, &cantElem);
        mostrarVec(vec, cantElem);
        printf("\nIngrese un valor a eliminar del array(0) para terminar: ");
        scanf("%d", &val);
    }

    return 0;
}
