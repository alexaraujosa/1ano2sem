#include <stdio.h>

main()
{

int num;

    printf("Introduza um Nº "); scanf("%d", &num);

    if (num != 0)
        printf("Diferente de zero.\n");
    else
        printf("Valor nulo.\n");
}