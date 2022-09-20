#include "../Bibliotecas/archivos.h"

int main()
{
    crearLoteDePruebaEmp();
    crearLoteDePruebaEst();

    printf("EMPLEADOS\n");
    mostrarArchivoEmpleados();
    printf("\nESTUDIANTES\n");
    mostrarArchivoEstudiantes();

    actualizarEmpConEst();
    printf("\nNUEVO EMPLEADOS\n");
    mostrarArchivoEmpleados();
    printf("\nESTUDIANTES\n");
    mostrarArchivoEstudiantes();

    return 0;
}

