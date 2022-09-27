#include "funciones.h"

int crearLoteDePruebaAlum(){
    t_Alumnos vecAlumnos[]={
                {1111,"Burgos","Agustin","Ingenieria", '0'},      ///GUARDAR/MANTENER: 0 EN EL MAESTRO --- NO ESTA EN NOV
                {2222,"Maldonado","Viviana","Humanidades", '1'},  ///IGNORAR/BORRAR: 1 EN EL MAESTRO --- NO ESTE EN NOV
                {3333,"Balmaceda","Dario","Derecho", '0'},        ///ERROR --&-- GUARDADO
                {4444,"Balmaceda","Juan","Ingenieria", '0'},      ///GUARDADO
                {5252,"Maldonado","Victor","Derecho", '1'},       ///IGNORAR/BORRAR: 1 EN EL MAESTRO --- NO ESTE EN NOV
                {5353,"Sanchez","Cristian","Quimica", '0'},       ///GUARDAR/MANTENER: 0 EN EL MAESTRO --- NO ESTA EN NOV
                {5454,"Sanchez","Cristian","Quimica", '1'},       ///BORRAR
                {5555,"Gordo","Toni","Educacion Fisica", '1'},    ///ERROR
                {6666,"Naja","Alex","Economia", '0'},             ///MODIFICADO-GUARDADO
                {7777,"Abolado","Andrea","Economia", '1'},        ///ERROR
                {8888,"Monzon","Juan","Ingenieria", '0'},         ///MODIFICADO-GUARDADO
                {8989,"Monzon","Nicolas","Quimica", '1'},         ///MODIFICADO-GUARDADO
                {9999,"Saf","Nicolas","Educacion Fisica", '1'}    ///ERROR
    };
    FILE* pf;
    pf= fopen("maestro.dat", "w+b");
    if(!pf)
        return ERR_ARCH;

    fwrite(vecAlumnos,sizeof(vecAlumnos),1,pf);
    fclose(pf);
    return 0;
}

int crearLoteDePruebaAlumAct(){
    t_AlumnosActualizar vecAlumAct[]={
            {1212,"Vargas","Mono","Educacion Fisica", 'B'},     ///ERROR: NO ESTE EN EL MAESTRO --- B EN NOV
            {3333,"Balmaceda","Dario","Derecho", 'A'},          ///ERROR: 0 EN EL MAESTRO --- A EN NOV
            {4545,"Nicoleta","Victor","Humanidades", 'M'},      ///ERROR: NO ESTE EN EL MAESTRO --- M EN NOV
            {5555,"Gordo","Toni","Humanidades", 'M'},           ///ERROR: 1 EN EL MAESTRO --- M EN NOV
            {6666,"Naja","Alex","Economia", 'B'},               ///MODIFICAR: 0 EN EL MAESTRO --- B EN NOV
            {6767,"Camio","Alex","Derecho", 'A'},               ///NUEVO/AGREGAR: NO ESTE EN EL MAESTRO --- A EN NOV
            {7777,"Abolado","Andrea","Economia", 'B'},          ///ERROR: 1 EN EL MAESTRO --- B EN NOV
            {8888,"Mercuri","Juan","Ingenieria", 'M'},          ///MODIFICAR: 0 EN EL MAESTRO --- M EN NOV
            {8989,"Monzon","Nicolas","Quimica", 'A'},           ///MODIFICAR: 1 EN EL MAESTRO --- A EN NOV
            {9999,"Saf","Nicolas","Educacion Fisica", 'B'}      ///ERROR: 1 EN EL MAESTRO --- B EN NOV
    };
    FILE* pf;
    pf= fopen("novedades.dat", "w+b");
    if(!pf)
        return ERR_ARCH;

    fwrite(vecAlumAct,sizeof(vecAlumAct),1,pf);
    fclose(pf);
    return 0;
}

void mostrarArchivoAlumnos(const char* nombreArch){
    t_Alumnos alumno;
    FILE* alum = fopen(nombreArch, "rb");
    if(!alum)
    {
        printf("Error al abrir el archivo de estudiantes.");
        return;
    }
    fread(&alumno, sizeof(t_Alumnos), 1, alum);
    if(!feof(alum)){
        printf("%-8s %-21s %-21s %-21s %-s\n", "DNI", "Apellido", "Nombre", "Carrera", "BajaLogica");
        printf("%-8s %-21s %-21s %-21s %-s\n", "---", "--------", "------", "-------", "----------");
    }
    while(!feof(alum))
    {
        printf("%-8d %-21s %-21s %-21s %c\n", alumno.dni, alumno.apellido, alumno.nombre, alumno.carrera, alumno.bajaLogica);
        fread(&alumno, sizeof(t_Alumnos), 1, alum);
    }
    fclose(alum);
}

void mostrarArchivoAlumnosAct(const char* nombreArch){
    t_AlumnosActualizar alumno;
    FILE* alum = fopen(nombreArch, "rb");
    if(!alum)
    {
        printf("Error al abrir el archivo de estudiantes.");
        return;
    }
    fread(&alumno, sizeof(t_AlumnosActualizar), 1, alum);
    if(!feof(alum)){
        printf("%-8s %-21s %-21s %-21s %-s\n", "DNI", "Apellido", "Nombre", "Carrera", "Actualizacion");
        printf("%-8s %-21s %-21s %-21s %-s\n", "---", "--------", "------", "-------", "-------------");
    }
    while(!feof(alum))
    {
        printf("%-8d %-21s %-21s %-21s %c\n", alumno.dni, alumno.apellido, alumno.nombre, alumno.carrera, alumno.actualizacion);
        fread(&alumno, sizeof(t_AlumnosActualizar), 1, alum);
    }
    fclose(alum);
}

void algoritmoMerge(const char* maestro, const char* novedades, int(*comparar)(const void*, const void*)){
    int cmp;
    char actNov, bajLogMae;
    t_Alumnos mae;
    t_AlumnosActualizar nov;
    FILE* pfMae;
    FILE* pfNov;
    FILE* pfMaeAct;
    FILE* pfErr;
    pfMae= fopen(maestro,"rb");
    if(!pfMae){
        return;
    }
    pfNov= fopen(novedades, "rb");
    if(!pfNov){
        fclose(pfMae);
        return;
    }
    pfMaeAct= fopen("maestroActualizado.dat", "wb");
    if(!pfMaeAct){
        fclose(pfMae);
        fclose(pfNov);
        return;
    }
    pfErr = fopen("errores.dat", "wb");
    if(!pfErr){
        fclose(pfMae);
        fclose(pfNov);
        fclose(pfErr);
        return;
    }

    fread(&mae, sizeof(mae), 1, pfMae);
    fread(&nov, sizeof(nov), 1, pfNov);

    while(!feof(pfMae) && !feof(pfNov)){
        actNov = nov.actualizacion;
        bajLogMae = mae.bajaLogica;
        if((cmp=comparar(&mae,&nov))>0){
            if(actNov=='A'){
                nov.actualizacion='0';
                fwrite(&nov, sizeof(t_AlumnosActualizar),1,pfMaeAct); ///NUEVO: NO ESTE EN EL MAESTRO --- A EN NOV
            }else{
                fwrite(&nov, sizeof(t_AlumnosActualizar),1,pfErr); ///ERROR: NO ESTE EN EL MAESTRO --- M EN NOV ///ERROR: NO ESTE EN EL MAESTRO ----- B EN NOV
            }
            fread(&nov,sizeof(t_AlumnosActualizar),1,pfNov);
        }else if(cmp<0){
            if(bajLogMae=='0'){
                fwrite(&mae,sizeof(t_Alumnos),1,pfMaeAct); ///GUARDAR/MANTENER: 0 EN EL MAESTRO --- NO ESTA EN NOV
            }
            fread(&mae,sizeof(t_Alumnos),1,pfMae); ///IGNORAR/BORRAR: 1 EN EL MAESTRO --- NO ESTE EN NOV
        }else{
            if(bajLogMae=='0'){
                    if(actNov=='A'){
                        fwrite(&nov,sizeof(t_AlumnosActualizar),1,pfErr); ///ERROR: 0 EN EL MAESTRO --- A EN NOV
                        fwrite(&mae,sizeof(t_Alumnos),1,pfMaeAct);
                    }else if(actNov=='B'){
                        mae.bajaLogica='1';
                        fwrite(&mae,sizeof(t_Alumnos),1,pfMaeAct); ///MODIFICAR: 0 EN EL MAESTRO --- B EN NOV
                    } else{
                        nov.actualizacion = mae.bajaLogica;
                        fwrite(&nov,sizeof(t_AlumnosActualizar),1,pfMaeAct); ///MODIFICAR: 0 EN EL MAESTRO --- M EN NOV
                    }
            }else{
                if(actNov=='A'){
                    mae.bajaLogica='0';
                    fwrite(&mae,sizeof(t_Alumnos),1,pfMaeAct); ///MODIFICAR: 1 EN EL MAESTRO --- A EN NOV
                }else{
                    fwrite(&nov,sizeof(t_AlumnosActualizar),1,pfErr); ///ERROR: 1 EN EL MAESTRO --- B EN NOV ///ERROR: 1 EN EL MAESTRO --- M EN NOV
                }
            }
            fread(&mae,sizeof(t_Alumnos),1,pfMae);
            fread(&nov,sizeof(t_AlumnosActualizar),1,pfNov);
        }
    }
    while(!feof(pfMae)){
        if(bajLogMae=='0'){
            fwrite(&mae,sizeof(t_Alumnos),1,pfMaeAct); ///GUARDAR/MANTENER: 0 EN EL MAESTRO --- NO ESTA EN NOV
        }
        fread(&mae,sizeof(t_Alumnos),1,pfMae); ///IGNORAR/BORRAR: 1 EN EL MAESTRO --- NO ESTE EN NOV
    }
    while(!feof(pfNov)){
        if(actNov=='A'){
            mae.bajaLogica='0';
            fwrite(&mae, sizeof(t_Alumnos),1,pfMaeAct); ///NUEVO: NO ESTE EN EL MAESTRO --- A EN NOV
        }else{
            fwrite(&nov, sizeof(t_AlumnosActualizar),1,pfErr); ///ERROR: NO ESTE EN EL MAESTRO --- M EN NOV ///ERROR: NO ESTE EN EL MAESTRO ----- B EN NOV
        }
        fread(&nov,sizeof(t_AlumnosActualizar),1,pfNov);
    }
    fclose(pfMae);
    fclose(pfNov);
    fclose(pfMaeAct);
    fclose(pfErr);
}

int compararAlumDni(const void* al1, const void* al2){
    t_Alumnos* alum = (t_Alumnos*)al1;
    t_AlumnosActualizar* alumAct = (t_AlumnosActualizar*)al2;
    return (alum->dni)-(alumAct->dni);
}



