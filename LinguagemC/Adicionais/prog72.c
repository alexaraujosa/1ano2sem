#include <stdio.h>

int LCMFinder(int num1, int num2);

int main()
{
    int num1, num2, trigger;

    printf("Input first number: ");     scanf("%d", &num1);
    printf("Input second number: ");    scanf("%d", &num2);

    if(num1>num2)
        trigger = LCMFinder(num2, num1);
    else
        trigger = LCMFinder(num1,num2);

    printf("LCM of %d and %d = %d\n", num1, num2, trigger);
    return 0;
}

int LCMFinder(int num1, int num2)
{
    static int multiple = 0;

    multiple = multiple + num2;

    if((multiple%num1 == 0) && (multiple%num2 == 0))
        return multiple;
    else
        return LCMFinder(num1, num2);
}
