#include <stdio.h>

main()
{

int limit, i, j, isPrime;

    printf("Input upper limit: ");  scanf("%d", &limit);

    printf("All prime numbers between 1 to %d are: ", limit);
    for(i=2 ; i <= limit ; i++)
    {
        isPrime = 1;
        for(j=2 ; j <= i/2 ; j++)
        {
            if(i%j == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if(isPrime == 1)
            printf("%d ", i);
    }

}