#include <stdio.h>

main()
{
int num;

    printf("Introduza um Inteiro: ");       scanf("%d", &num);
    printf("Foi introduzido %d cujo caracter = '%c'\n", num, (char) num);
    printf("O caracter seguinte = '%c' tem o ASCII nº %d\n", (char) (num + 1), num + 1);

}