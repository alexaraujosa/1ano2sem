#include <stdio.h>

main()
{

int carac, linhas, comp, num;

    printf("Introduza um Nº: ");     scanf("%d", &num);

    for (linhas = 1 , carac = 65; linhas <= num ; linhas++, carac++)
        {
            for (comp = 1 ; comp <= linhas ; comp++)
                {
                    printf("%c", (char) carac);
                }
            putchar('\n');
        }
}