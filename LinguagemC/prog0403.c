#include <stdio.h>

main()
{

int num = 1;

    while(num <= 10)
    {
        printf("5 * %2d =  %2d\n", num, 5*num);     /* Através de %2d, os valores escritos reservam dois caractéres para o número. */
        num = num + 1;                              /* Caso o número não ocupe o número de caractéres indicado, são colodos espaços vazios */
    }

}