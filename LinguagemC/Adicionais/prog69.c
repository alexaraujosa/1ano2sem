#include <stdio.h>

unsigned long int Factorial(int num);

int main()
{
    int num;
    printf("Input any number: ");   scanf("%d", &num);
    printf("Factorial of %d = %lu\n", num, Factorial(num));
    return 0;
}

unsigned long int Factorial(int num)
{
    if(num)
        return num*Factorial(num-1);
    else
        return 1;
}