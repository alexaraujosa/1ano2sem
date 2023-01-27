#include <stdio.h>

main()
{

int num1, num2;

    printf("Introduza dois números: ");     scanf("%d%d", &num1, &num2);

    if (num1 >= 0)
        {                                                       /* Se num conjunto de instruções if encadeadas, alguma delas não necessitar de else, */
            if (num2 > 10)                                      /* deve-se colocar esta instrução entre chavetas para que o else de algum outro if   */
                printf("O segundo número é muito grande\n");    /* mais exterior não seja associado erradamente a este if.                           */
        }
    else
        printf("O primeiro número tem um valor negativo\n");
}