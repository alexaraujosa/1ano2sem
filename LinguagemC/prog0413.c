#include <stdio.h>

main()
{

int num1, num2;

    for (num1 = 1 ; num1 <= 10 ; num1 = num1 + 1)
        {
            for (num2 = 1 ; num2 <= num1 ; num2 = num2 + 1)
                printf("%d ", num2);
            putchar('\n');
        }
}


