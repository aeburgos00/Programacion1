#include "../Bibliotecas/arraysMio.h"

//#define TAM 6

int main()
{
    int valor, cantElem;
    int vec[] ={7,4,7,7,8,7}; ///LO PROBE CON EL VALOR 7 PERO SE PUEDE PONER EL VALOR QUE QUIERAS
//    int vec[] ={7,4};
//    int vec[] ={7};
//    int vec[] ={7,7,7,7,7,7};
//    int vec[7];s
    cantElem=sizeof(vec)/sizeof(int);
    mostrarVec(vec, cantElem);
    printf("Elegir un entero a eliminar(0 para terminar): ");
    scanf("%d", &valor);
    while(valor!=0){
        eliminarElemDeUnVec(vec, valor, &cantElem);
        printf("\n");
        mostrarVec(vec, cantElem);
        printf("\nElegir un entero a eliminar(0 para terminar): ");
        scanf("%d", &valor);
    }
    return 0;
}
