#include <stdio.h>

main()
{

int base, exp, i;
long int num = 1;

    printf("Input base: ");     scanf("%d", &base);
    printf("Input exponent: "); scanf("%d", &exp);

    for(i=1 ; i <= exp ; i++)
    {
        num = num * base;
    }
    printf("%d ^ %d = %d\n", base, exp, num);
}