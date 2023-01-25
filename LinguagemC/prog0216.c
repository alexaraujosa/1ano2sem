#include <stdio.h>

/*********************************************** 
 *                                             *
 *  MÁ IMPLEMENTAÇÃO (MISTURA DE CHAR COM INT) *
 *                                             *
 ***********************************************/

main()
{
char carac1 = 'X', carac2 = 'Y';

    printf("Introduza um Inteiro: ");       scanf("%d", &carac2);
    printf("O valor de carac1 = '%c' e carac2 = '%c'\n", carac1, carac2);
}

/*
ERRO:
Leitura de uma variável de um determinado tipo, usando um formato de leitura que não corresponde a esse tipo.

EXPLICAÇÃO:
Ao se declarar duas variáveis do tipo char, o compilador vai reservar um Byte para cada uma delas e vai colocar os Bits de cada uma delas
de forma a que representem o caracter 'X' e 'Y'. Supondo que, por azar, as duas variáveis ficam uma a seguir à outra em memória, dado que 
são caracteres consecutivos, ao se realizar a leitura de um inteiro (%d), independentemente do tipo da variável que seja passada ao scanf
para salvaguardar o valor lido, é sempre alterado o número de Bytes relativos a um inteiro (pois o formato de leitura %d corresponde ao 
formato de leitura de um inteiro), portanto vão ser alterados, neste caso, 2 Bytes consecutivos.
*/