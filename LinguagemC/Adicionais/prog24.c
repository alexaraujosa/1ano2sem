#include <stdio.h>

main()
{

int start=1, end, sum;

    printf("Enter upper limit: ");  scanf("%d", &end);

    for(sum=0 ; start<=end ; start += 2)
    {
        sum += start;
    }

    printf("Sum of odd numbers from 1-%d: %d\n", end, sum);
}