#include <stdio.h>

main()
{

int num1, num2, res=0;
char op;

    printf("Introduza uma operação: ");     scanf("%d %c %d", &num1, &op, &num2);

    switch (op)
    {
        case '+' : res = num1 + num2; break;
        case '-' : res = num1 - num2; break;
        case 'x' : case 'X' : case '*' : res = num1 * num2; break;
        case '/' : case '\\' : case ':' : res = num1 / num2; break;
    }
    printf("%d %c %d = %d", num1, op, num2, res);   /* Através da variável res, não é necessário escrever printf em cada case, dado que o valor é guardado nessa mesma variável */
}