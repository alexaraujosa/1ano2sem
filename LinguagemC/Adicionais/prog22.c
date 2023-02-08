#include <stdio.h>

main()
{

int start=2, end, sum;

    printf("Input upper limit of even number: ");   scanf("%d", &end);

    for(sum=0 ; start<=end ; start += 2)
    {
        sum += start;
    }

    printf("Sum of even numbers between 1 to %d: %d\n", end, sum);
}