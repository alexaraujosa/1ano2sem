#include <stdio.h>

main()
{

int num1, num2;     /* num1 controla as tabuadas globalmente, enquanto num2 modifica o número a multiplicar em cada tabuada */
num1 = 1;

    while(num1 <= 5)
    {
        num2 = 1;
        while(num2 <= 10)
        {
            printf("%2d * %2d = %2d\n", num1, num2, num1 * num2);
            num2 = num2 + 1;
        }
        num1 = num1 + 1;
    }
}