#include <string.h>
#include "fcMemDinamica.h"
#include "../../Unidad1/Bibliotecas/fechasMio.h"

void mostrarMatrizEnt(int **mat, int f, int c){
    int i, j;
    for(i=0;i<f;i++){
        for(j=0;j<c;j++)
            printf("%d\t", mat[i][j]);
        printf("\n");
    }
}

int** crearMatDinamica(int cantFilas, int cantCol){
    int**mat;
    int i;
    mat = (int**)malloc(cantFilas*sizeof(int*));
    if(!mat)
        return NULL;
    for(i=0;i<cantFilas;i++){
        mat[i]=(int*)malloc(cantCol*sizeof(int));
        if(!mat[i]){
            for(i-=1;i>=0;i--)
                free(mat[i]);
            free(mat);
            return NULL;
        }
    }
    return mat;
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
    float* num = (float*)dato;
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
    return (*n1)-(*n2);
}

int cmpFloAsc(const void* v1, const void* v2){
    float* n1 = (float*)v1;
    float* n2 = (float*)v2;
    return (*n1)-(*n2);
}

int cmpAlumAsc(const void* v1, const void* v2){
    t_alumno* alum1 = (t_alumno*)v1;
    t_alumno* alum2 = (t_alumno*)v2;
    int dif=difDiasEntreFechas(alum1->fNac.dia, alum1->fNac.mes, alum1->fNac.anio, alum2->fNac.dia, alum2->fNac.mes, alum2->fNac.anio);
    if(dif)
        return dif;
    else{
        dif=(strcmp(alum1->nya, alum2->nya));
        if(dif)
            return dif;
        else{
            return (alum1->dni)-(alum2->dni);
        }
    }
}
