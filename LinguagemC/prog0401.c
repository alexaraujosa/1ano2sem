#include <stdio.h>

/* while
* while (condição)
*     instrução;
*
* -- A condição é avaliada
* -- Se o resultado da avaliação for Falso (0-zero), o ciclo termina e o programa continua na instrução imediatamente a seguir ao while.
* -- Se o resultado da avaliação for Verdade (diferente de zero), é executada a instrução (ou bloco de instruções aí presente) associada ao while.
* -- Volta-se ao ponto 1.
*/

main()
{

int num = 1;

    while (num <= 10)
    {
        printf("%d\n", num);
        num = num + 1;
    }
}