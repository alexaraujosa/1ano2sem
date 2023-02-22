#include <stdio.h>

int Checker(int num);

int main()
{
    int num;
    printf("Input any number: ");   scanf("%d", &num);
    if(!Checker(num))
        printf("%d is even\n", num);
    else
        printf("%d is odd\n", num);
    return 0;
}

int Checker(int num)
{
    return num%2;
}