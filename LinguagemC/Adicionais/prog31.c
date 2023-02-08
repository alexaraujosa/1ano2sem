#include <stdio.h>
#include <math.h>

main()
{

int num, sum=0, digits, first, last;

    printf("Input any number to find sum of first and last digit: ");   scanf("%d", &num);

    last = num%10;

    digits = (int) log10(num);

    first = (int) (num/pow(10,digits));

    sum = first + last;

    printf("Sum of first and last digit: %d\n", sum);

}