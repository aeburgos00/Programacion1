#include "funciones.h"

int crearLoteDePruebaEst(){
    t_estudiantes vecEst[]={
        {4567,'m',"Banega","Carreta",9.4,{24,1,1695}},
        {2023,'m',"Benedetto","Pipa",7.4,{11,9,1995}},
        {2222,'m',"Benedetto","Pipa",7.4,{16,4,1955}},
        {1234,'m',"Bermudez","Tito",5.7,{16,2,1209}},
        {1111,'m',"Burgos","Agustin",8.2,{4,6,2000}},
        {7777,'m',"Espaguetti","Tobac",8.7,{24,6,2001}},
        {8033,'f',"Mercury","Juana",4.2,{4,2,1989}},
        {8888,'m',"Mercury","Jhonfer",4.2,{3,12,1999}},
        {6666,'m',"Riquelme","Juan Roman",9.3,{14,10,2011}},
        {7890,'m',"Zanetti","Pupi",7.7,{12,12,1999}}
    };
    FILE* pf;
    pf= fopen("estudiantes.dat", "w+b");
    if(!pf)
        return ERR_ARCH;

    fwrite(vecEst,sizeof(vecEst),1,pf);
    fclose(pf);
    return 0;
}

void binarioATextoFijo(const char* nomArcBin, const char* nomArcTxt){
    t_estudiantes est;
    FILE* pfTextoFijo;
    FILE* pfArcBin;
    pfTextoFijo=fopen( nomArcTxt,"wt");
    if(!pfTextoFijo)
        return;
    pfArcBin = fopen(nomArcBin, "rb");
    if(!pfArcBin){
        fclose(pfTextoFijo);
        return;
    }
    fread(&est,sizeof(est),1,pfArcBin);
    while(!feof(pfArcBin)){
        fprintf(pfTextoFijo, "%8d%c%-25s%-25s%5.2f%2d/%2d/%4d\n", est.dni, est.sexo, est.apellido, est.nombre, est.promedio, est.fProm.dia, est.fProm.mes, est.fProm.anio);
        fread(&est, sizeof(est), 1, pfArcBin);
    }
    fclose(pfTextoFijo);
    fclose(pfArcBin);
}

void binarioATextoVar(const char* nomArcBin, const char* nomArcTxt){
    t_estudiantes est;
    FILE* pfTextoVar;
    FILE* pfArcBin;
    pfTextoVar=fopen( nomArcTxt,"wt");
    if(!pfTextoVar)
        return;
    pfArcBin = fopen(nomArcBin, "rb");
    if(!pfArcBin){
        fclose(pfTextoVar);
        return;
    }
    fread(&est,sizeof(est),1,pfArcBin);
    while(!feof(pfArcBin)){
        fprintf(pfTextoVar, "%d|%c|%s|%s|%f|%d/%d/%d\n", est.dni, est.sexo, est.apellido, est.nombre, est.promedio, est.fProm.dia, est.fProm.mes, est.fProm.anio);
        fread(&est, sizeof(est), 1, pfArcBin);
    }
    fclose(pfTextoVar);
    fclose(pfArcBin);
}

/*
void textoFijoABinario(const char* nomArcTxt, const char* nomArcBin){
    char cad[76];
    char* auxCad;
    t_estudiantes est;
    FILE* fpBin, *fpTxt;
    fpTxt = fopen(nomArcTxt, "r+t");
    if(!fpTxt)
        return;
    fpBin=fopen(nomArcBin, "wt");
    if(!fpBin){
        fclose(fpTxt);
        return;
    }
    while(fgets(cad, 77, fpTxt)){
        auxCad = strchr(cad, '\n');
        *auxCad = '\0';
        auxCad-=4;

    }

}
*/

void textoABinario(const char* nomArcTxt, const char* nomArcBin, void (*parsearLong)(const char*, void*)){
    t_estudiantes est;
    FILE* pfBin, *pfTxt;
    char cad[TAM_CAD_PARSEO];
    pfTxt = fopen(nomArcTxt, "rt");
    if(!pfTxt)
        return;
    pfBin=fopen(nomArcBin, "wt");
    if(!pfBin){
        fclose(pfTxt);
        return;
    }
    while(fgets(cad, TAM_CAD_PARSEO, pfTxt)){
        parsearLong(cad, &est);
        fwrite(&est, sizeof(est),1,pfBin);
    }
    fclose(pfTxt);
    fclose(pfBin);
}

void txtVarABinAMano(const char*cad, void* dato){
    t_estudiantes* est = (t_estudiantes*)dato;
    char *ultPos;
    ultPos = strrchr(cad,'\n');
    *ultPos = '\0';
    ultPos = strrchr(cad, '/');
    *ultPos = '\0';
    sscanf(ultPos, "%d", &est->fProm.anio);
    ultPos = strrchr(cad, '/');
    *ultPos = '\0';
    sscanf(ultPos, "%d", &est->fProm.mes);
    ultPos = strrchr(cad, '|');
    *ultPos = '\0';
    sscanf(ultPos, "%d", &est->fProm.dia);
    ultPos = strrchr(cad, '|');
    *ultPos = '\0';
    est->promedio = atof(ultPos+1);
    ultPos = strrchr(cad, '|');
    *ultPos = '\0';
    strcpy(est->nombre, ultPos+1);
    ultPos = strrchr(cad, '|');
    *ultPos = '\0';
    strcpy(est->apellido, ultPos+1);
    ultPos = strrchr(cad, '|');
    *ultPos = '\0';
    est->sexo = *(ultPos+1);
    est->dni = atoi(cad);
}

void txtVarABin(const char*cad, void* dato){
    t_estudiantes* est = (t_estudiantes*)dato;
    sscanf(cad, "%d|%c|%[^|]|%[^|]|%f|%d/%d/%d\n", &est->dni, &est->sexo, est->apellido, est->nombre, &est->promedio,&est->fProm.dia, &est->fProm.mes, &est->fProm.anio);
}



































