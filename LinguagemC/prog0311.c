#include <stdio.h>

main()
{

char est_civil;

    printf("Qual o Estado Civil: ");    scanf("%c", &est_civil);

    if (est_civil == 's' || est_civil == 'S')
        printf("Solteiro\n");

    else if (est_civil == 'c' || est_civil == 'C')
            printf("Casado\n");

        else if (est_civil == 'd' || est_civil == 'D')
                printf("Divorciado\n");
            
            else if (est_civil == 'v' || est_civil == 'V')
                printf("Viúvo\n");

                 else 
                    printf("Estado civil inválido.\n");

} 