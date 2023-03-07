#include <stdio.h>
#include <string.h>

int main()
{
    char posicoes[10] = {0};
    char mensagem[1000] = {0};
    unsigned long int i = 0, k = 0, j = 0;
    int l = 0;

    if(scanf("%s", posicoes))
    {}
    if(scanf("%s", mensagem))
    {}

    char matriz[strlen(posicoes)][strlen(mensagem)/strlen(posicoes)+2];

    for(i=0 ; i<strlen(posicoes) ; i++)
    {    
        for(j=0 ; j<(strlen(mensagem)/strlen(posicoes)+2) ; j++)
            matriz[i][j] = 0;   // Setar todos os vetores a 0
    }

    for(i=0 ; i<(strlen(mensagem)/strlen(posicoes)+2) ; i++)
    {
        for(j=0 ; j<strlen(posicoes) ; j++)
            matriz[j][k] = mensagem[l++];   // Colocar em cifra de César
        k++;
    }

    l = 0;

    for(i=0 ; i<strlen(posicoes) ; i++)
    {
        for(j=0 ; matriz[(posicoes[i] - '0')-1][j] != '\0' ; j++)
            mensagem[l++] = matriz[(posicoes[i] - '0')-1][j];   // Substituição da mensagem inicial, pela ordem dada
    }

    mensagem[++l] = '\0';

    printf("%s\n", mensagem);
    return 0;
}