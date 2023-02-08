#include <stdio.h>

main()
{

int sum, start, end;

    printf("Enter lower limit: ");  scanf("%d", &start);
    printf("Enter upper limit: ");  scanf("%d", &end);

    if (start%2)
        start++;

    for(sum=0 ; start<=end ; start += 2)
    {
        sum += start;
    }

    printf("Sum of all even numbers between %d to %d = %d\n", start, end, sum);
}