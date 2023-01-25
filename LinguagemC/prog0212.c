#include <stdio.h>

main()
{

char carac, carac2;

    printf("Introduza um Caracter: ");      scanf("%c", &carac);
    printf("Introduza outro caracter: ");   scanf(" %c", &carac2);     /* Deve-se colocar um Espaço antes do %c para, caso no buffer do teclado exista*/
    printf("Os caracteres introduzidos foram '%c' e '%c'\n", carac, carac2);    /* espaços, new lines, tabs, então a função scanf vai ignorar isso tudo*/

}