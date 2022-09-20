#include "funciones.h"

void algSeleccion(void* vec, int cantElem, int tamElem, int (*comparar)(const void*, const void*)){
    void* menor;
    int i;
    for(i=0;i<cantElem-1;i++){
        menor = buscarMenor(vec, cantElem-i, tamElem, comparar);
        if(vec!=menor)
            intercambio(vec,menor, tamElem);
        vec+=tamElem;
    }
}

void* buscarMenor(void*vec, int cantElem, int tamElem, int (*comparar)(const void*, const void*)){
    int j;
    void* menor = vec;
    for(j=0;j<cantElem-1;j++){
        vec+=tamElem;
        if(comparar(menor,vec)>0)
            menor = vec;
    }
    return menor;
}

void intercambio(void* e1, void* e2, int tamElem){
    char aux;
    int i;
    for(i=0;i<tamElem;i++){
        aux=*(char*)e1;
        *(char*)e1=*(char*)e2;
        *(char*)e2=aux;
        e1++;
        e2++;
    }
}

void mostrarVecGenerico(void* vec, int tamElem, int cantElem, void (*mostrar)(void*)){
    int i;
    for(i=0;i<cantElem;i++){
        mostrar(vec);
        vec+=tamElem;
    }
}

void mostrarEntero(void * dato){
    int * num = (int*)dato;
    printf("%d ", *num);
}

void mostrarFloat(void* dato){
    double* num = (double*)dato;
    printf("%.2f ", *num);
}

void mostrarChar(void* dato){
    char* c = (char*)dato;
    printf("%c", *c);
}

void mostrarAlum(void* dato){
    t_alumno* alum = (t_alumno*)dato;
    printf("%s\t", alum->nya);
    printf("%d\t", alum->dni);
    printf("%d/", alum->fNac.dia);
    printf("%d/", alum->fNac.mes);
    printf("%d\t", alum->fNac.anio);
    printf("%.2f\n", alum->prom);
}

int cmpCharAsc(const void* v1, const void* v2){
    char* c1 = (char*)v1;
    char* c2 = (char*)v2;
    return (*c1)-(*c2);
}

int cmpEntAsc(const void* v1, const void* v2){
    int* n1 = (int*)v1;
    int* n2 = (int*)v2;
    return ((*n1)-(*n2));
}

int cmpFloAsc(const void* v1, const void* v2){
    double* n1 = (double*)v1;
    double* n2 = (double*)v2;
    return ((*n1)-(*n2)); ///PROBAR RENDONDEAR A 2 DECIMALES Y HACER LA RESTA COMPARANDO POR > O < QUE 0.01
//    return ((int)(*n1)-(int)(*n2));
}

int cmpAlumAsc(const void* v1, const void* v2){
    t_alumno* alum1 = (t_alumno*)v1;
    t_alumno* alum2 = (t_alumno*)v2;
    int dif;
    if(!(dif=alum1->fNac.anio-alum2->fNac.anio))
        if(!(dif=alum1->fNac.mes-alum2->fNac.mes))
            if(!(dif=alum1->fNac.dia-alum2->fNac.dia))
                if(!(dif = strcmp(alum1->nya, alum2->nya)))
                    return (alum1->dni)-(alum2->dni);
    return dif;
}


