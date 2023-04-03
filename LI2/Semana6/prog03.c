#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 50


typedef struct{
        int id;
        char dificuldade;
        int valor;
} Pedido;

int ordenar(Pedido *pdd, int linhas)
{
    Pedido temporario;
    for(int i=0 ; i<linhas-1 ; i++)
    {
        for(int j=0 ; j< linhas-1-i ; j++)
        {
            if(pdd[j+1].valor > pdd[j].valor)
            {
                temporario = pdd[j];
                pdd[j] = pdd[j+1];
                pdd[j+1] = temporario;
            }
            else if(pdd[j+1].valor == pdd[j].valor && pdd[j].dificuldade > pdd[j+1].dificuldade)
            {
                temporario = pdd[j];
                pdd[j] = pdd[j+1];
                pdd[j+1] = temporario;      
            }
            else if((pdd[j+1].valor == pdd[j].valor) && (pdd[j].dificuldade == pdd[j+1].dificuldade) && pdd[j].id > pdd[j+1].id)
            {
                temporario = pdd[j];
                pdd[j] = pdd[j+1];
                pdd[j+1] = temporario;   
            }
        }
    }
    return 1;
}

int main()
{
    int linhas;
    if(scanf("%d", &linhas)){}
    Pedido pdd[linhas];
    
    for(int i=0 ; i<linhas ; i++)
        if(scanf("%d %c %d", &pdd[i].id, &pdd[i].dificuldade, &pdd[i].valor)){}

    ordenar(&pdd[0], linhas);

    for(int i=0 ; i<linhas ; i++)
        printf("%d %c %d\n", pdd[i].id, pdd[i].dificuldade, pdd[i].valor);

    return 0;
}