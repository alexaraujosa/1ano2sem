#include <stdio.h>

main()
{

int num1, num2 = 1;

    printf("Introduza um Nº: ");     scanf("%d", &num1);

    while(num2 <= 10)
    {
        printf("%2d * %2d = %2d\n", num1, num2, num1 * num2);
        num2 = num2 + 1;
    }
}