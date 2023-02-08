#include <stdio.h>

main()
{

int start, end, sum;

    printf("Enter lower limit: ");  scanf("%d", &start);
    printf("Enter upper limit: ");  scanf("%d", &end);

    if (start%2 == 0)
        start += 1;
    
    for(sum=0 ; start<=end ; start += 2)
    {
        sum += start;
    }

    printf("Sum of odd numbers %d to %d = %d\n", start, end, sum);

}