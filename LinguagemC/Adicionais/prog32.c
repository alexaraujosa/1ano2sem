#include <stdio.h>

main()
{

int sum=0, first, last, num;

    printf("Input any number to find sum of its digit: ");  scanf("%d", &num);

    while(num)
    {
        last = num%10;
        sum = sum + last;
        num = num/10;
    }

    printf("Sum of digits = %d\n", sum);
}