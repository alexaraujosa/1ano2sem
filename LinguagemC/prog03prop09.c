#include <stdio.h>

main()
{

int mes, dias;

    printf("Introduza o número do mês (1..12): ");  scanf("%d", &mes);

    switch(mes)
    {
        case 2 : dias = 28; brake;
        case 4 : case 6 : case 9 : case 11 : dias = 30; brake;
        default : dias = 31;
    }

    printf("O %d mês tem %d dias.\n", mes, dias);
}