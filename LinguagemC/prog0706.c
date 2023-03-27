#include <stdio.h>
#include <string.h>

main()
{
    char Nome[30+1];

    do
    {
        printf("Nome: ");   gets(Nome);
        puts(Nome);
    }
    while(strcmp(Nome, "SAIR"));

    puts("O programa terminou!");
}