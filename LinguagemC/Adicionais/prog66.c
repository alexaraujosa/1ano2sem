#include <stdio.h>

int SumEvenOrOdd(int lower, int upper);

int main()
{
    int lower, upper;
    printf("Input lower limit: ");  scanf("%d", &lower);
    printf("Input upper limit: ");  scanf("%d", &upper);

    printf("Sum of even/odd numbers between %d to %d = %d\n", lower, upper, SumEvenOrOdd(lower,upper));
    return 0;
}

int SumEvenOrOdd(int lower, int upper)
{
    if(lower>upper)
        return 0;
    else
        return lower + SumEvenOrOdd(lower+2,upper);
}