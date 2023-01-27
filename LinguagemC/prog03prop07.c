#include <stdio.h>

main()
{

int ano;

    printf("Introduza um ano "); scanf("%d", &ano);

    if (ano <= 0)
        printf("Ano inválido.\n");
        else if (ano % 4 == 0) 
            printf("O ano é bissexto.\n");
                else 
                    printf("O ano não é bissexto.\n");            
}
