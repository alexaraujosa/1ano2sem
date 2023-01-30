#include <stdio.h>

/* for
* for ( inicializações ; condição ; pós-instrução )
*       instrução;
*
*
*
* -- É executado o código presente em inicializações. Normalmente são aqui inicializadas as variáveis presentes no ciclo. Esta componente do ciclo
* -- for é apenas executada uma única vez.
* -- A condição é avaliada.
* -- Se o resultado da condição devolver o valor Falso (zero), então o ciclo for termina e o programa continua na instrução imediatamente a seguir.
* -- Se o resultado da condição devolver o valor Verdade, então é executada a instrução (ou bloco de instruções) do ciclo.
* -- Depois de executada a instrução presente no ciclo, é executada a pós-instrução. Nesta componente do ciclo for, são normalmente realizadas as 
* -- alterações necessárias para passar à próxima iteração do ciclo (incremento ou decremente de variáveis, etc.).
* -- Voltar ao ponto 2.
*/

main()
{

int n, num, soma, produto;

    printf("Introduza um Nº: ");    scanf("%d", &num);
    for(soma=0, produto=n=1; n <= num; n = n+1)                 /* Inicializações ; condição ; pós-instrução */
        {                                                                       /*  instrução  */
            soma = soma + n;
            produto = produto * n;
        }
    
    printf("Soma = %d\nProduto = %d\n", soma, produto);

}