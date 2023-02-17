#include <stdio.h>

int soma(int num1, int num2)
    {
        return num1+num2;
    }

int dobro(int num)
    {
        return num*2;
    }

main()
{
    int n1, n2;
    printf("Introduza dois Números: "); scanf("%d %d", &n1, &n2);
    printf("%d + %d = %d\n", n1, n2, soma(n1,n2));
    printf("%d * 2 = %d e %d * 2 = %d\n", n1, dobro(n1), n2, dobro(n2));
}