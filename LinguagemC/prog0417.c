#include <stdio.h>

main()
{

int num, linhas, colunas;
char carac;

    printf("Introduza um Nº: ");        scanf("%d", &num);
    printf("Introduza um caracter: ");  scanf(" %c", &carac);

    for(linhas = 1 ; linhas <= num ; linhas++)
        {
            for(colunas = 1 ; colunas <= num ; colunas++)
                putchar(carac);
            putchar('\n');
        }
}