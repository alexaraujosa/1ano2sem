#include <stdio.h>

main()
{

int num, i, j, isPrime;

    printf("Input any number: ");   scanf("%d", &num);

    printf("All Prime factores of %d are: ", num);
    for(i=2 ; i<=num/2 ; i++)
    {
        if(num%i == 0)
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
            }
        if(isPrime == 1)
        {
            printf("%d ", i);
        }

    }


}