#include <stdio.h>

int Prime(int num);
void printPrime(int lowerLimit, int upperLimit);

int main()
{
    int lowerLimit, upperLimit;
    printf("Input lower limit: ");  scanf("%d", &lowerLimit);
    printf("Input upper limit: ");  scanf("%d", &upperLimit);

    printPrime(lowerLimit, upperLimit);
    
    return 0;
}

int Prime(int num)
{
    int i;
    for(i=2 ; i<=num/2 ; i++)
    {
    if(num%i == 0)
        return 0;
    }
    return 1;
}

void printPrime(int lowerLimit, int upperLimit)
{
    printf("All prime numbers between %d to %d are: ", lowerLimit, upperLimit);
    while(lowerLimit <= upperLimit)
    {
        if (Prime(lowerLimit))
            printf("%d, ", lowerLimit);

    lowerLimit++;
    
    }

}