#include <stdio.h>

unsigned long int Fibonacci(int num);

int main()
{
    int num;
    printf("Input any number: ");   scanf("%d", &num);
    printf("%dth Fibonacci term: %lu\n", num, Fibonacci(num));
    return 0;
}

unsigned long int Fibonacci(int num)
{
    if(num == 0)
        return 0;
    else if(num == 1)
        return 1;
    else if(num > 1)
        return Fibonacci(num-1) + Fibonacci(num-2);
}