#include <stdio.h>

main()
{

int num;

    printf("Introduza um Nº "); scanf("%d", &num);

    switch (num)
    {
        case '0' : printf("Valor nulo\n"); break;
        default : printf("Valor diferente de zero\n");
    }
}