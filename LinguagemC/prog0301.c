#include <stdio.h>

main()
{

int num1,num2;

    printf("Introduza 2 inteiros: ");           scanf("%d%d", &num1, &num2);

    printf("O resultado de %d == %d : %d\n", num1, num2, num1 == num2);
    printf("O resultado de %d > %d  : %d\n", num1, num2, num1 > num2);
    printf("O resultado de %d >= %d : %d\n", num1, num2, num1 >= num2);
    printf("O resultado de %d < %d  : %d\n", num1, num2, num1 < num2);
    printf("O resultado de %d <= %d : %d\n", num1, num2, num1 <= num2);
    printf("O resultado de %d != %d : %d\n", num1, num2, num1 != num2);
}