#include "arraysMio.h"

///Desarrollar una función que inserte un elemento en un arreglo de enteros, dada
///la posición de inserción.

int validarEntre(int men, int may){
    int n;
    do{
        scanf("%d", &n);
        if(n<men || n>may)
            printf("\nIngrese un valor entre %d y %d: ", men, may );
    }while(n<men || n>may);
    return n;
}

void mostrarVec(int *vec, int tam){
    int i;
    printf("Pos\t");
    for(i=0;i<tam;i++){
        printf("%d\t",i+1);
    }
    printf("\nVal\t");
    for(i=0;i<tam;i++){
        printf("%d\t",*vec);
        vec++;
    }
    printf("\n");
}

void insertarSegunPos(int* vec, int pos, int tam, int valor, int cantElem){
    int i, *puntAux;
    puntAux=vec;
    pos-=1;
    if(pos>=cantElem){
        vec+=cantElem;
        *vec = valor;
    }else{
        puntAux+=cantElem;
        vec+=(cantElem-1);
        for(i=cantElem;i>pos;i--){
            *puntAux=*vec;
            vec--;
            puntAux--;
        }
        *puntAux = valor;
    }
}

