#include <stdio.h>
#include <string.h>

int verify(char arr[], int tamanho)
{
    int flag = 1;
    for(int i=0 ; i<tamanho ; i++)
    {
        for(int j=i+1 ; j<tamanho ; j++)
        {
            if(arr[i] == arr[j])
            {
                flag = 0;
                break;
            }
        }

        if(flag == 0)
            return 0;
        else if(i == tamanho-1 && flag == 1)
            return 1;
    }

    return 0;
}

int main()
{
    int linhas;
    if(scanf("%d", &linhas))
    {}
    int resposta[linhas];

    for(int i=0 ; i<linhas ; i++)
        resposta[i] = -1;

    for(int i=0 ; i<linhas ; i++)
    {
        int tamanho;
        char mensagem[1000];
        if(scanf("%d", &tamanho))
        {}

        if(scanf("%s", mensagem))
        {}

        for(int j=0 ; j<=(int)strlen(mensagem) - tamanho ; j++)
        {
            if(verify(mensagem + j, tamanho))
            {
                resposta[i] = j;
                break;
            }
        }
    }

    for(int i=0 ; i<linhas ; i++)
        printf("%d\n", resposta[i]);


    return 0;
}