#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 50


typedef struct{
        char nome[MAX];
        int peso;
        int altura;
} Cozinheiro;

int ordenar(Cozinheiro *cz, int linhas)
{
    Cozinheiro temporario;
    for(int i=0 ; i<linhas-1 ; i++)
    {
        for(int j=0 ; j< linhas-1-i ; j++)
        {
            if(abs(cz[j].peso - 90) > abs(cz[j+1].peso - 90))
            {
                temporario = cz[j];
                cz[j] = cz[j+1];
                cz[j+1] = temporario;
            }
            else if((abs(cz[j].peso - 90) == abs(cz[j+1].peso - 90) && cz[j].altura < cz[j+1].altura))
            {
                temporario = cz[j];
                cz[j] = cz[j+1];
                cz[j+1] = temporario;      
            }
            else if((abs(cz[j].peso - 90) == abs(cz[j+1].peso - 90) && cz[j].altura == cz[j+1].altura) && (strcmp(cz[j].nome, cz[j+1].nome) > 0))
            {
                temporario = cz[j];
                cz[j] = cz[j+1];
                cz[j+1] = temporario;   
            }
        }
    }
    return 1;
}

int main()
{
    int linhas;
    if(scanf("%d", &linhas)){}
    Cozinheiro cz[linhas];

    for(int i=0 ; i<linhas ; i++)
        for(int j=0 ; j<30 ; j++)
            cz[i].nome[j] = 0;
    
    for(int i=0 ; i<linhas ; i++)
        if(scanf("%s %d %d", cz[i].nome, &cz[i].peso, &cz[i].altura)){}

    ordenar(&cz[0], linhas);

    for(int i=0 ; i<linhas ; i++)
        printf("%s %d %d\n", cz[i].nome, cz[i].peso, cz[i].altura);

    return 0;
}