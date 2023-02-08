#include <stdio.h>

main()
{

int first, last, num, sum=0;

    printf("Input number: ");   scanf("%d", &num);

    /* Get First digit */

    first = num;
    while(first>=10)
    {
        first = first/10;
    }

    /* Get Last digit */

    last = num%10;

    sum = first + last;

    printf("Sum of first and last digit: %d\n", sum);

}