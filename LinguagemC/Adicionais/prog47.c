#include <stdio.h>

main()
{

int lower, upper, i, j, sum=0, isPrime;

    printf("Input lower limit: ");  scanf("%d", &lower);
    printf("Input upper limit: ");  scanf("%d", &upper);

    for(i=lower ; i<=upper ; i++)
    {
        isPrime = 1;
        for(j=2 ; j<=i/2 ; j++)
        {
            if(i%j == 0)
                {
                    isPrime = 0;
                    break;
                }
        }
        if(isPrime)
            sum = sum + i;
    }
    printf("Sum of prime numbers between %d to %d = %d\n", lower, upper, sum);

}