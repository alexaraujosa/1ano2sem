#include <stdio.h>

main()
{

int lower, upper, i, j, isPrime;

    printf("Input lower limit: ");  scanf("%d", &lower);
    printf("Input upper limit: ");  scanf("%d", &upper);

    printf("All prime numbers between %d to %d are: ", lower, upper);
    
    if(lower < 2)
        lower = 2;
    
    for(i=lower ; i<=upper ; i++)
    {
        isPrime = 1;
        for(j=2; j<=i/2 ; j++)
        {
            if(i%j == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if(isPrime)
            printf("%d ", i);
    }

}