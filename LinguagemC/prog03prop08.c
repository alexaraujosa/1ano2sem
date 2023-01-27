#include <stdio.h>

main()
{

int mes, dias;

    printf("Introduza o número do mês (1..12): ");  scanf("%d", &mes);
    if (mes <= 0 || mes > 12)
        printf("Mês inválido.\n");
    else if (mes == 2)
        dias = 28;
    else if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
        dias = 31;
    else 
        dias = 30;
    
    printf("O mês %d tem %d dias.\n", mes, dias);
}