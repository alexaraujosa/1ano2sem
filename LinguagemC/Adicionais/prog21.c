#include <stdio.h>

main()
{

int start, end, sum;

    printf("Enter lower limit: ");  scanf("%d", &start);
    printf("Enter upper limit: ");  scanf("%d", &end);

    for(sum=0; start<=end ; start++)
    {
        sum += start;
    }

    printf("Sum of natural numbers from %d to %d = %d\n", start, end, sum);

}