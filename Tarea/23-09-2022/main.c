#include "funciones.h"

int main()
{
    crearLoteDePruebaEst();
    binarioATextoFijo("estudiantes.dat", "estTxtFijo.txt");
    binarioATextoVar("estudiantes.dat", "estTxtVar.txt");

    textoABinario("estTxtVar.txt", "estudiantesVar.dat", txtVarABinAMano);

    binarioATextoVar("estudiantesVar.dat", "estTxtVar2.txt");

    return 0;
}
