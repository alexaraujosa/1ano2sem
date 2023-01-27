#include <stdio.h>

main()
{

char est_civil;

    printf("Qual o estado civil: ");    scanf("%c", &est_civil);

    switch(est_civil)
    {
        case 'c' : case 'C' : printf ("Casado\n"); break;
        case 'd' : case 'D' : printf("Divorciado\n"); break;
        case 's' : case 'S' : printf("Solteiro\n"); break;
        case 'v' : case 'V' : printf("Viúvo\n"); break;
        default : printf("Estado civil inválido.\n");
    }
}
