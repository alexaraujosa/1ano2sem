#include <stdio.h>

main()
{

int carac, conta;
char press;

    for(carac = 0 , conta=1; carac <= 255 ; carac++)
        {
            printf("%3d --> %c\n", carac, (char) carac);
            if (conta == 20)
                {
                    do
                        { printf("Prima c ou C para continuar ...");
                          scanf(" %c", &press);
                        }
                    while (press != 'c' && press != 'C');
                    conta = 1;
                }
            else 
                conta++;
        }

} 