#include <stdio.h>

main()
{

int mes, dias;

    printf("Introduza o número do mês (1..12): ");  scanf("%d", mes);

    switch (mes)
    {
        case 1 : case 3 : case 5 : case 7 : case 8 : case 10 : case 12 : dias = dias + 1;
        case 2 : case 4 : case 6 : case 9 : case 11 : dias = dias + 2;
        default : dias = dias + 28;
    }
    printf("O %d mês tem %d dias.\n", mes, dias);
}