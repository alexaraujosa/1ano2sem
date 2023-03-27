#include <stdio.h>
#include <string.h>

#define DIM 20
#define SEP_NOME ", "

main()
{
    char Nome[DIM + 1], Apelido[DIM + 1], Completo[2*DIM + 1];

    while(3)
    {
        printf("Introduza o Nome: ");
        gets(Nome);
        if(strlen(Nome) == 0)
            break;
        
        printf("Introduza o Apelido: ");
        gets(Apelido);

        strcpy(Completo, Apelido);
        strcat(Completo, SEP_NOME);
        strcat(Completo, Nome);
        puts(Completo);
    }
}