#include <stdio.h>

int x_isdigit(char ch)
    {
        return (ch >= '0' && ch <= '9');
    }

main()
{
    char c;
    while(1)
    {
        c = getchar();
        if (!x_isdigit(c))  /* Se não for digito escreve, caso seja, não escreve */
            putchar(c);
    }
}