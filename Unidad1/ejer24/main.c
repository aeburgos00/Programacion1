#include "../Bibliotecas/arraysMio.h"

int main()
{
    int cantElem, pos;
    int vec[] ={7,4,7,3,8,12};
//    int vec[] ={7,4};
//    int vec[] ={7};
//    int vec[] ={7,7,7,7,7,7};
//    int vec[7];
    cantElem=sizeof(vec)/sizeof(int);
    mostrarVec(vec, cantElem);
    printf("Elegir una posicion a eliminar(0 para terminar): ");
    scanf("%d", &pos);
    while(pos!=0){
        eliminarSegunPos(vec, pos, &cantElem);
        printf("\n");
        mostrarVec(vec, cantElem);
        printf("Elegir una posicion a eliminar(0 para terminar): ");
        scanf("%d", &pos);
    }
    return 0;
}
