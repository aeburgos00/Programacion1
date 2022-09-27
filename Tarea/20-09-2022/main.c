#include "funciones.h"

int main()
{
    crearLoteDePruebaAlum();
    crearLoteDePruebaAlumAct();
    mostrarArchivoAlumnos("maestro.dat");
    printf("\n");
    mostrarArchivoAlumnosAct("novedades.dat");

    algoritmoMerge("maestro.dat","novedades.dat",compararAlumDni);

    printf("\nDESPUES DEL MERGE\n");

    printf("Maestro Act:\n");
    mostrarArchivoAlumnos("maestroActualizado.dat");
    printf("\n");
    printf("Errores:\n");
    mostrarArchivoAlumnosAct("errores.dat");


    return 0;
}
