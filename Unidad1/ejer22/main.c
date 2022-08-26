#include "../Bibliotecas/arraysMio.h"

#define TAM 5

int main()
{
    int pos, val, cantElem=0;
    int vec[TAM];
    printf("Elegir una posicion a insertar(max %d)(0 para terminar): ",TAM);
    pos = validarEntre(0, TAM);
    while(pos!=0){
        printf("\nValor a insertar: ");
        scanf("%d",&val);
        insertarSegunPos(vec, pos, TAM, val, cantElem);
        if(cantElem<=TAM)
            cantElem++;
        printf("\n");
        mostrarVec(vec, TAM);
        printf("\nElegir una posicion a insertar(max %d)(0 para terminar): ",TAM);
        pos = validarEntre(0, TAM);
    }
    return 0;
}
