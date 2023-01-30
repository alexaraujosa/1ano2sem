#include <stdio.h>

/* do ... while 
* do
*     instrução;
* while (condição);
*
* -- A instrução (ou bloco de instruções) é executada
* -- A condição é avaliada
* -- Se o resultado da condição for Verdade, volta-se ao ponto 1
* -- Se o resultado da condição for Falso, termina o ciclo e o programa continua na instrução seguinte ao ciclo.
*
* Deve-se usar este ciclo sempre que é necessário implementar um ciclo que tenha que executar o corpo do ciclo pelo menos uma vez
*
*/

main()
{

char opcao;

    do 
        {
            printf("\t M E N U   P R I N C I P A L\n");
            printf("\n\t\tClientes");
            printf("\n\t\tFornecedores");
            printf("\n\t\tEncomendas");
            printf("\n\t\tSair");
            printf("\nOpção: ");      scanf("%c", &opcao);

            fflush(stdin);  /* Limpar o Buffer do teclado */

            switch(opcao)
                {
                    case 'c' : case 'C' : puts("Opção CLIENTES"); break;
                    case 'f' : case 'F' : puts("Opção Fornecedores"); break;
                    case 'e' : case 'E' : puts("Opção ENCOMENDAS"); break;
                    case 's' : case 'S' : break; /* Não faz nada */
                    default : puts("Opção inválida!!!");
                }
            getchar();  /* Para o ecrã */
        }
    while (opcao != 's' && opcao != 'S');
}
