#include <stdio.h>
#include <string.h>

int vogalChecker(char ch)
{
    switch(ch)
    {
        case 'A' : case 'E' : case 'I' : case 'O' : case 'U' : case 'Y' : return 1;
    }
    return 0;
}

int verify(char arr[], int tamanho)
{
    for(int i=0 ; i<tamanho-1 ; i++)
    {
        if((vogalChecker(arr[i]) && vogalChecker(arr[i+1])) || (vogalChecker(arr[i]) == 0 && vogalChecker(arr[i+1]) == 0))
            return 0;
    }

    return 1;
}

int main()
{
    char mensagem[1000] = {0};
    int linhas;
    if(scanf("%d", &linhas))
    {}
    int respostas[linhas];
    if(scanf("%*c"))
    {}

    for(int i=0 ; i<linhas ; i++)
        respostas[i] = 0;

    for(int i=0 ; i<linhas ; i++)
    {
        if(fgets(mensagem, 1000, stdin))
        {}
        char temporario[strlen(mensagem) + 1];
        int contagem = 0, k;


        for(int j=0 ; j<(int)strlen(mensagem)-1 ; j++)
        {
                for(k=0 ; mensagem[j] != ' ' && mensagem[j] != '\0' && mensagem[j] != '\n' ; j++, k++)
                    temporario[k] = mensagem[j];
                temporario[k] = '\0';

                    if(verify(temporario, strlen(temporario)))
                        contagem++;
        }
        respostas[i] = contagem;
    }

    for(int i=0 ; i<linhas ; i++)
        printf("%d\n", respostas[i]);
}