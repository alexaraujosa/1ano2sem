#include <stdio.h>

main()
{

int sum, start, end;

    printf("Input upper limit: ");  scanf("%d", &end);

    for(sum=0, start=1 ; start<=end ; start++)
    {
        sum += start;
    }
    printf("Sum of natural numbers 1-%d: %d\n", end, sum);
}