#include <stdio.h>

main()
{

float num1, num2, res=0.0;
char op;

    printf("-------------------------------\n");
    printf("WELCOME TO THE BASIC CALCULATOR\n");
    printf("Enter (number 1) (+ - / *) (number 2)\n");
    scanf("%f %c %f", &num1, &op, &num2);
    printf("-------------------------------\n");

    switch (op)
    {
        case '+' : res = num1 + num2; break;
        case '-' : res = num1 - num2; break;
        case '*' : res = num1 * num2; break;
        case '/' : res = num1 / num2; break;
        default: printf("Invalid operator. Try again.\n");
    }
    printf("%.2f %c %.2f = %.2f", num1, op, num2, res);
}