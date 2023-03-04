#include <stdio.h>
#define DIM 3
#define ESPACO ' '

void inic(char s[ ][DIM]);
void mostra(char s[DIM][DIM]);

main()
{
    char Galo[DIM][DIM];
    int posx, posy;
    char ch = '0';
    int n_jogadas = 0;

    inic(Galo);
    while(1)
    {
        mostra(Galo);
        printf("\nIntroduza a posição de Jogo Linha Coluna: ");     scanf("%d %d", &posx, &posy);
        posx--; // Índices dos vetores começam com 0
        posy--;
        if (Galo[posx][posy] == ESPACO) // Espaço vazio
        {
            Galo[posx][posy] = ch = (ch == 'O') ? 'X' : 'O';
            n_jogadas++;
        }
        else
            printf("Posição já ocupada\nJogue novamente!!!\n");
        if(n_jogadas == DIM*DIM)
            break;
    }
    mostra(Galo);
}

void inic(char s[ ][DIM])
{
    int i, j;
    for(i=0 ; i<DIM ; i++)
    {
        for(j=0 ; j<DIM ; j++)
        {
            s[i][j] = ESPACO;
        }
    }
}

void mostra(char s[DIM][DIM])
{
    int i, j;
    for(i=0 ; i<DIM ; i++)
    {
        for(j=0 ; j<DIM ; j++)
        {
            printf("%c %c", s[i][j], j==DIM-1 ? ' ' : '|');
        }
        if(i!=DIM-1)
            printf("\n--------");
        putchar('\n');
    }
}