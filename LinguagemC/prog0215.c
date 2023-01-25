#include <stdio.h>

/*********************************************** 
 *                                             *
 *  MÁ IMPLEMENTAÇÃO (MISTURA DE INT COM CHAR) *
 *                                             *
 ***********************************************/

main()
{
int num=1000;

    printf("Introduza um caracter: ");      scanf("%c", &num);
    printf("O valor de num = %d cujo caracter = '%c'\n", num, (char) num);
}

/*
ERRO:
Leitura de uma variável de um determinado tipo, usando um formato de leitura que não corresponde a esse tipo.

EXPLICAÇÃO:
Ao se declarar uma variável do tipo int, o compilador vai reservar 2 Bytes, ordenando os Bits de forma a representar, neste caso,
o valor 1000. Ao ser realizada uma leitura com %c, apenas um dos Bytes irá ser alterado (neste exemplo, o da direita), colocando
aí o valor do caracter lido. Portanto, dado ao Byte da direita ter sido alterado, apesar do da esquerda se ter mantido o inicial,
o resultado será um valor inesperado.
*/