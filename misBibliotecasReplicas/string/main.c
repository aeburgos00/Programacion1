#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include "stringMio.h"

int main()
{
    ///STRSTR
    char cad1[] = "hola a todos";
    char cad2[] = "a to";
    printf("La cadena 1: %s\n",cad1);
    printf("La cadena 2: %s\n",cad2);
    printf("\nLa cadena 2 %s encuentra incluida en la primera\n%s", (str_str(cad1,cad2)!=NULL)?"se":"no se", str_str(cad1,cad2));

    ///STRCMP
    /*char cad1[21]="Hola chicos";
    char cad2[21]="Hola chicos";

    printf("---MI STRCMP---\n");
    printf("Las cadenas:\n"
           "1)%s\n2)%s\nson %s\n", cad1, cad2, (str_cmp(cad1,cad2)?"distintas":"iguales"));*/
    ///STRCMPI
    /*char cad1[21]="Hola chicos";
    char cad2[21]="Hola chicOs";

    printf("---MI STRCMPI---\n");
    printf("Las cadenas:\n"
           "1)%s\n2)%s\nson %s\n", cad1, cad2, (str_cmpi(cad1,cad2)?"distintas":"iguales"));*/

    ///STRLWR
    /*char cad[21]="HOLA chicOs";
    printf("---MI STRLWR---\n");
    printf("Las cadena:\n%s\n", cad);
    printf("En minusculas es:\n");
    printf("%s", str_lwr(cad));*/

    ///STRUPR
    /*char cad[21]="HOLA chicOs";
    printf("---MI STRUPR---\n");
    printf("Las cadena:\n%s\n", cad);
    printf("En mayusculas es:\n");
    printf("%s", str_upr(cad));*/

    return 0;
}
