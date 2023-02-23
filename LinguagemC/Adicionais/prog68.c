#include <stdio.h>

int SumDigits(int num);

int main()
{
    int num;
    printf("Input number: ");   scanf("%d", &num);
    printf("Sum of digitsof %d = %d\n", num, SumDigits(num));
    return 0;
}

int SumDigits(int num)
{
    if(num)
        return ((num%10) + SumDigits(num/10));
    else   
        return 0;
}