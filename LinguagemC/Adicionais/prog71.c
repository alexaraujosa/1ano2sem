#include <stdio.h>

int HCFinder(int num1, int num2);

int main()
{
    int num1, num2;

    printf("Input first number: ");     scanf("%d", &num1);
    printf("Input second number: ");    scanf("%d", &num2);
    printf("HCF of %d and %d = %d\n", num1, num2, HCFinder(num1, num2));
    return 0;
}

int HCFinder(int num1, int num2)
{
    if(num2 == 0)
        return num1;
    else 
        return HCFinder(num2, num1%num2);
}