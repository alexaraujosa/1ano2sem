#include <stdio.h>

#define MAX_SIZE 1000

int main()
{   
    int linhas;

    if(scanf("%d", &linhas))
    {}

    char resposta[linhas];

    for(int i=0 ; i<linhas ; i++)
    {
        char palavra[MAX_SIZE];
        if(scanf("%s", palavra))
        {}

        for(int j=0 ; j<MAX_SIZE ; j++)
        {
            if(palavra[j] == '\0')
                break;
            else
            {
                for(int k = j+1 ; k<MAX_SIZE ; k++)
                {
                    if(palavra[k] == '\0')
                        break;
                    else
                    {
                        if(palavra[k] == palavra[j])
                            resposta[i] = palavra[j]; 
                    }
                }
            }
        }
    }

    for(int i=0 ; i<linhas ; i++)
        printf("%c", resposta[i]);
    putchar('\n');

    return 0;
}