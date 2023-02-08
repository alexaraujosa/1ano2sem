#include <stdio.h>

main()
{

int num, isPrime=1, i;

    printf("Enter any number to check prime: ");   scanf("%d", &num);

    for(i=2 ; i<=num/2 ; i++)
    {
        if(num%i == 0)
            {
            isPrime = 0;
            break;
            }
    }
    
    if(isPrime == 1 && num > 1)
        printf("%d is prime number\n", num);
    else
        printf("%d is composite number\n", num);
}