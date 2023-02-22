#include <stdio.h>

int SumAll(int lowerLimit, int upperLimit);

int main()
{
    int lowerLimit, upperLimit;
    printf("Input lower limit: ");  scanf("%d", &lowerLimit);
    printf("Input upper limit: ");  scanf("%d", &upperLimit);
    printf("Sum of natural numbers from %d to %d = %d\n", lowerLimit, upperLimit, SumAll(lowerLimit, upperLimit));
    return 0;
}

int SumAll(int lowerLimit, int upperLimit)
{
    if(lowerLimit < upperLimit)
        return lowerLimit + SumAll(lowerLimit +1, upperLimit);
    else
        return lowerLimit;
}