#include <stdio.h>

main()
{

char est_civil;

    printf("Qual o estado civil: ");    scanf("%c", &est_civil);

    switch (est_civil)
    {
        case 'C' : puts("Casado"); break;                   /* Sempre que existe coincidência entre a expressão de um switch e uma das constantes */
        case 'D' : puts("Divorciado"); break;               /* possíveis para essa expressão, são executadas todas as instruções associadas ao    */
        case 'V' : puts("Viúvo"); break;                    /* case correspondente e seguintes até que o switch termine ou seja encontrada a      */
        case 'S' : puts("Solteiro"); break;                 /* instrução break (ou seja encontrada a instrução return)                            */
        default  : puts("Estado civil inválido."); /* O último case ou o default de um switch não necessita de break, porque depois de executar   */
    }                                              /* as instruções associadas ao último case, termina a instrução switch                         */
}