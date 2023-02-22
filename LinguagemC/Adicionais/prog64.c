#include <stdio.h>

void EvenChecker(int lowerLimit, int upperLimit);
void OddChecker(int lowerLimit, int upperLimit);

int main()
{
    int lowerLimit, upperLimit;
    printf("Input lower limit: ");  scanf("%d", &lowerLimit);
    printf("Input upper limit: ");  scanf("%d", &upperLimit);
    printf("Even numbers between %d to %d are: ", lowerLimit, upperLimit);
    EvenChecker(lowerLimit, upperLimit);
    printf("\nOdd numbers between %d to %d are: ", lowerLimit, upperLimit);
    OddChecker(lowerLimit, upperLimit);
    return 0;
}

void EvenChecker(int lowerLimit, int upperLimit)
{
    if(lowerLimit > upperLimit)
        return;
    else if(lowerLimit%2 == 0)
        printf("%d, ", lowerLimit);
    else
    {
        ++lowerLimit;
        printf("%d, ", lowerLimit);
    }
    EvenChecker(lowerLimit +2, upperLimit);
}

void OddChecker(int lowerLimit, int upperLimit)
{
    if(lowerLimit > upperLimit)
        return;
    else if(lowerLimit%2)
        printf("%d, ", lowerLimit);
    else
    {
        ++lowerLimit;
        printf("%d, ", lowerLimit);
    }
    OddChecker(lowerLimit +2, upperLimit);
}