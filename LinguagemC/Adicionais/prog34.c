#include <stdio.h>

main()
{

int num, reverse=0, last;

    printf("Input number: ");   scanf("%d", &num);

    while(num)
    {
        last = num%10;
        reverse = (10 * reverse) + last;
        num = num/10;
    }
        printf("Reverse = %d\n", reverse);
}