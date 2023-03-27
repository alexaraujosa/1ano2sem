#include <stdio.h>

main()
{
    char Nome[100];

    while(3)
    {
        printf("Introduza o Nome Completo: ");
        gets(Nome);
        if(Nome[0] == '\0')
            break;
        else
            printf("Nome Completo: %s\n", Nome);
    }
}