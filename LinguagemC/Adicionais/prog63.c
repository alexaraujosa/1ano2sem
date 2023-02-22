#include <stdio.h>

void printNaturalNumbers (int lowerLimit, int upperLimit);

int main()
{
    int lowerLimit, upperLimit;
    printf("Input lower limit: ");  scanf("%d", &lowerLimit);
    printf("Input upper limit: ");  scanf("%d", &upperLimit);
    printf("All natural numbers between %d and %d are: ", lowerLimit, upperLimit);
    printNaturalNumbers(lowerLimit, upperLimit);
    return 0;
}

void printNaturalNumbers (int lowerLimit, int upperLimit)
{
    if(lowerLimit <= upperLimit)
    {
        printf("%d, ", lowerLimit);
        printNaturalNumbers(lowerLimit+1, upperLimit);
    }
}