#include <stdio.h>

main()
{

int num, i;
long int fact=1;

    printf("Input number: ");   scanf("%d", &num);

    for(i=1 ; i<=num ; i++)
    {
        fact = fact * i;
    }
    printf("Factorial: %ld\n", fact);

}