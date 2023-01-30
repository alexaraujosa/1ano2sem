#include <stdio.h>

main()
{

int linhas, comp, num;

    printf("Introduza um Nº: "); scanf("%d", &num);

    for (linhas = 1 ; linhas <= num ; linhas++)
        {
            for (comp = 1 ; comp <= linhas ; comp++)
                {
                    printf("*");
                }
        putchar('\n');
        }
}