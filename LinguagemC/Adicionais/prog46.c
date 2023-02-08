#include <stdio.h>

main()
{

int upper, i, j, sum=0, isPrime;

    printf("Input upper limit: ");  scanf("%d", &upper);

    for(i=2 ; i<=upper ; i++)
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
    printf("Sum of all prime numbers between 1 to %d = %d\n", upper, sum);
}