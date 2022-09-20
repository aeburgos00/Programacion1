#include "arraysMio.h"

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
    if(tam>0){
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
    }else{
        printf("El vector no tiene elementos\n");
    }
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
} ///ARREGLAR CON LA VALIDACION QUE ESTA HECHA EN EL MAIN
///VERIFICAR EL OVERFLOW

void insertarEnVecOrdAsc(int* vec, int tam, int valor){
    int i=0, j, aux, auxSig=valor;
    while(i<tam && (*vec)<valor){
        vec++;
        i++;
    }
    if(i<tam)
        for(j=i;j<tam;j++){
            aux=auxSig;
            auxSig=(*vec);
            *vec=aux;
            vec++;
        }
}///VERIFICAR EL OVERFLOW

void eliminarSegunPos(int* vec, int pos, int *cantElem){
    int i;
    if(pos<(*cantElem)){
        for(i=0;i<(pos-1);i++)
            vec++;
        while(i<((*cantElem)-1)){
            *vec=*(vec+1);
            vec++;
            i++;
        }
    }
    (*cantElem)--;
}

void eliminarPrimeraAparicion(int* vec, int valor,int*cantElem){
    int i=0;
    while(*vec!=valor && i<(*cantElem)-1){
        vec++;
        i++;
    }
    if((*vec==valor)){
        while(i<(*cantElem)-1){
            *vec = *(vec+1);
            vec++;
            i++;
        }
        (*cantElem)--;
    }
}

void eliminarElemDeUnVec(int* vec, int valor, int *cantElem){
    int* iniVec = vec, *elemFinal = vec;
    int i;
    for(i=0;i<((*cantElem)-1);i++)
        elemFinal++;
    while(vec!=elemFinal){
        while(vec!=elemFinal && *vec == valor){
            (*cantElem)--;
            vec++;
        }
        *iniVec = *vec;
        iniVec++;
        if(vec != elemFinal)
            vec++;
    }
    if(*vec == valor)
        (*cantElem)--;
}

///CADENAS

//ES PALINDROMO
int esPalindromo(char* cad){
    char* fin = cad;
    while(*fin)
        fin++;
    fin--;
    while(cad<fin){
        while(ESBLANCO(*cad))
            cad++;
        while(ESBLANCO(*fin))
            fin--;
        if(TOLOWER(*cad) != TOLOWER(*fin))
            return 0;
        cad++;
        fin--;
    }
    return 1;
}


