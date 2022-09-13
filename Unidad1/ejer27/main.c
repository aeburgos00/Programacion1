#include "../Bibliotecas/arraysMio.h"

int main()
{
    char cad[TAMCAD] = " arRi Ba  lA birrA   ";
    printf("La cadena %s %s un Palindromo\n",cad, (esPalindromo(cad))?"es":"no es");
    return 0;
}
