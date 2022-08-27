#include "../Bibliotecas/arraysMio.h"

int main()
{
    int valor, tam;
    //int vec[] ={10,20,30,40,50,60,70,80,90,100};
    int vec[] ={10,20,30,40};
    tam=sizeof(vec)/sizeof(int);
    printf("Elegir un entero a insertar(0 para terminar): ");
    scanf("%d", &valor);
    while(valor!=0){
        insertarEnVecOrdAsc(vec, tam, valor);
        printf("\n");
        mostrarVec(vec, tam);
        printf("\nElegir un entero a insertar(0 para terminar): ");
        scanf("%d", &valor);
    }
    return 0;
}
