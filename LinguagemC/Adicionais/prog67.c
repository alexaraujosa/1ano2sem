#include <stdio.h>
#include <math.h>

int Reverse(int num);

int main()
{
    int num;
    printf("Enter any number: ");   scanf("%d", &num);
    printf("Reverse of %d = %d\n", num, Reverse(num));
    return 0;
}

int Reverse(int num)
{
    int digits = (int) log10(num);

    if(num == 0)
        return 0;
    return ((num%10 * pow(10,digits)) + Reverse(num/10));
}