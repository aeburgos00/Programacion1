#include "stringMio.h"

char* str_cpy(char* destino, const char* origen){
    char* retorno = destino;
    while(*origen){
        *destino = *origen;
        destino++;
        origen++;
    }
    *destino = *origen; ///o *destino = '\0'
    return retorno;
}

int str_len(const char*cad){
    int cont=0;
    while(*cad){
        cont++;
        cad++;
    }
    return cont;
}

char* str_cat(char* destino, const char*origen){
    char* inicioDest = destino;
    while(*destino){
        destino++;
    }
    while(*origen){
        *destino = *origen;
        origen++;
        destino++;
        ///*destino++ = *origen++;
    }
    return inicioDest;
}

char* str_chr(char* cad, int c){
    while(*cad!=c && *cad != '\0')
        cad++;
    return (*cad)?cad:NULL;
}

char* str_Rchr(char* cad, int c){
    char* aux=NULL;
    while(*cad != '\0'){
        if(*cad==c)
            aux=cad;
        cad++;
    }
    return aux;
}

char* str_str(const char* cad1, const char* cad2){
    char* retorno=NULL, *inicad2=(char*)cad2;
    while(!retorno && (*cad1)){
        if((*cad1)==(*cad2)){
            retorno = (char*)cad1;
            while((*cad1)==(*cad2) && (*cad2)){
                cad1++;
                cad2++;
            }
            if(*cad2){
                cad2=inicad2;
                cad1=retorno;
                retorno=NULL;
            }
        }
        cad1++;
    }
    return retorno;
}

int str_cmp(const char* cad1, const char* cad2){
    while((*cad1)==(*cad2) && *cad1){
        cad1++;
        cad2++;
    }
    return (*cad1)-(*cad2);
}

int str_cmpi(const char* cad1, const char* cad2){
    while(tolower((*cad1))==tolower((*cad2)) && *cad1){
        cad1++;
        cad2++;
    }
    return tolower((*cad1))-tolower((*cad2));
}

char* str_lwr(char*cad){
    char* ini = cad;
    while(*cad){
        *cad = tolower(*cad);
        cad++;
    }
    return ini;
}

char* str_upr(char*cad){
    char* ini = cad;
    while(*cad){
        *cad = toupper(*cad);
        cad++;
    }
    return ini;
}

void* mem_cpy(void* copia, const void* orig, int n){
    int i;
    char* iniCopia = (char*)copia;
    for(i=0;i<n;i++){
        *(char*)copia=*(char*)orig;
        copia++;
        orig++;
    }
    return iniCopia;
}

void* mem_move(void* copia, const void* orig, int n){
    int i;
    char*iniCopia = copia;
    char* vecTemp;
    char* iniVecTemp= (char*)malloc(n);
    if(!iniVecTemp)
        return NULL;
    vecTemp = iniVecTemp;
    for(i=0;i<n;i++){
        *vecTemp = *(char*)orig;
        vecTemp++;
        orig++;
    }
    vecTemp = iniVecTemp;
    for(i=0;i<n;i++){
        *(char*)copia=*vecTemp;
        copia++;
        vecTemp++;
    }
    free(iniVecTemp);
    return iniCopia;
}
