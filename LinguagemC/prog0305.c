#include <stdio.h>

main()
{

int num1, num2, aux;

    printf("Introduza dois inteiros: ");        scanf("%d %d", &num1, &num2);

    if (num1 > num2)
    {   /* Como se trata de um Bloco de Instruções, caso (num1 > num2) se verifique irá realizar o bloco e depois o print independentemente, caso contrário ele simplesmente ignora o Bloco de Instruções */
        aux = num2;         /*  A troca de dois valores é sempre realizada em 3 passos, e necessita de uma variável auxiliar.*/
        num2 = num1;        /*  Basta pensar em trocar o conteúdo de dois copos, um com café e outro com leite. Para tal,*/
        num1 = aux;         /*  é necessário um copo adicional para ajudar a trocar os conteúdos sem os misturar.*/ 
    }                              /* !!! NÃO ESQUECER QUE A TROCA É SEMPRE DA DIREITA PARA A ESQUERDA !!! */

    printf("%d %d\n", num1, num2);
}