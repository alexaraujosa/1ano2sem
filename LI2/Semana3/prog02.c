#include <stdio.h>

int main()
{
    int estado=5, linhas, i, j, k;

    if(scanf("%d", &linhas))
    {}
    int estado_linha[linhas];

    for(i=0 ; i<linhas ; i++)
    {
        char direcao[20];
        if(scanf("%s", &direcao[0]))
        {}

        for(j=0 ; j<20 ; j++)
        {
            if(direcao[j] == '\0')
                break;
            else if(direcao[j] == 'C' && estado < 7 && estado > 0)
                estado += 3;
            else if(direcao[j] == 'D' && (estado != 9 && estado != 6 && estado != 3))
                estado += 1;
            else if(direcao[j] == 'E' && (estado != 7 && estado != 4 && estado != 1))
                estado -= 1;
            else if(direcao[j] == 'B' && estado > 3 && estado > 0)
                estado -= 3;
        }
        
       estado_linha[i] = estado;
    }

    for(k=0 ; k<linhas ; k++)
        printf("%d", estado_linha[k]);
    
    putchar('\n');
    return 0;
}