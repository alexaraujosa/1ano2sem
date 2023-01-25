#include <stdio.h>

main()
{
char carac;
    printf("Introduza um caracter: ");      scanf("%c", &carac);
    printf("O caracter '%c' tem o ASCII nº %d\n", carac, (int) carac);
}