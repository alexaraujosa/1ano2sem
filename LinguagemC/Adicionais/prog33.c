#include <stdio.h>

main()
{

long int product=1;
int num, last;

    printf("Enter any number to calculate product of digit: "); scanf("%ld", &num);

    product = num ? (long int) 1 : 0;
    while(num)
    {
        last = num%10;
        product = product * last;
        num = num/10;
    }

    printf("Product of digits = %ld\n", product);
}