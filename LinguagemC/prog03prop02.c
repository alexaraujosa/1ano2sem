#include <stdio.h>

main()
{

int num;

    printf("Introduza um Nº "); scanf("%d", &num);

    if (num == 0)
        printf("Valor nulo.\n");
    else
        printf("Diferente de zero.\n");
}