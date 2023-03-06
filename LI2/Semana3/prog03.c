#include <stdio.h>

int main()
{
    int linhas, anoes, anao_mais_alto, anao_seguinte, anoes_visiveis;

    if(scanf("%d", &linhas))
    {}
    int anoes_totais[linhas];

    for(int i=0 ; i<linhas ; i++)
    {
        anao_mais_alto=0;
        anao_seguinte=1;
        anoes_visiveis=0;

        if(i==0)
        {
            if(scanf("%d", &anoes))
            {}
        }
        else 
        {
            if(scanf(" %d", &anoes))
            {}
        }
        
        
        for(int j=0 ; j<anoes ; j++)
        {
            if(scanf(" %d", &anao_seguinte))
            {}
            if(anao_mais_alto<anao_seguinte)
            {
                anao_mais_alto = anao_seguinte;
                anoes_visiveis++;
            }
        }

        anoes_totais[i] = anoes_visiveis;
    }

        for(int k=0 ; k<linhas ; k++)
            printf("%d\n", anoes_totais[k]);

    return 0;
}