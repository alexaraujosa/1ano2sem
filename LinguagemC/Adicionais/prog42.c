#include <stdio.h>

main()
{

int num1, num2, i, max, lcm;

    printf("Input first number: ");     scanf("%d", &num1);
    printf("Input second number: ");    scanf("%d", &num2);

    max = (num1>num2) ? num1 : num2;
    i = max;

    while(1)
    {
        if (i%num1 == 0 && i%num2 == 0)
        {
            lcm = i;
            break;
        }
        i = i + max;
    }
    printf("LCM of %d and %d = %d\n", num1, num2, lcm);
}