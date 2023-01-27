#include <stdio.h>

main()
{

int num;

    printf("Introduza um Nº ");        scanf("%d", &num);

    if (num >= 0)
        printf("Número positivo.\n");
    else 
        printf("Número negativo.\n");
}