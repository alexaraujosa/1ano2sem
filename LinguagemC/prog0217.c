#include <stdio.h>

main()
{
int num1,num2;

    printf("Introduza dois Inteiros: ");        scanf("%d%d", &num1, &num2);
    printf("As operações aritméticas tradicionais com os Inteiros %d e %d são:\n", num1, num2);

    printf("SOMA:\t\t\t%d + %d = %d\n", num1, num2, num1+num2);
    printf("SUBTRAÇÃO:\t\t%d - %d = %d\n", num1, num2, num1-num2);
    printf("MULTIPLICAÇÃO:\t%d * %d = %d\n", num1, num2, num1*num2);
    printf("DIVISÃO INTEIRA:\t%d / %d = %d\n", num1, num2, num1/num2);
    printf("RESTO DA DIVISÃO:\t%d %% %d = %d\n", num1, num2, num1%num2);

}