#include <stdio.h>
#define DIM 3
#define ESPACO ' '

void inic(char s[ ][DIM]);
void mostra(char s[DIM][DIM]);
int Vencedor(char g[DIM][DIM], char ch);
int Linha(char v[], char c);
int Coluna(char g[DIM][DIM], int col, char ch);
int Diagonal(char g[DIM][DIM], char ch);


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

int Linha(char v[], char c)
{
    return v[0] == v[1] && v[1] == v[2] && v[0] == v[c];
}

int Coluna(char g[DIM][DIM], int col, char ch)
{
    return g[0][col] == g[1][col] && g[1][col] == g[2][col] == g[0][col] == ch;
}

int Diagonal(char g[DIM][DIM], char ch)
{
    return (g[0][0] == g[1][1] && g[1][1] == g[2][2] && g[0][0] == ch) || (g[0][2] == g[1][1] && g[1][1] == g[2][0] && g[0][2] == ch);
}

int Vencedor(char g[DIM][DIM], char ch)
{
    if (Linha(g[0], ch) || Linha(g[1], ch) || Linha(g[2], ch))
        return 1;
    else if(Coluna(g, 0, ch) || Coluna(g, 1, ch) || Coluna(g, 2, ch))
        return 1;
    else if (Diagonal(g, ch))
        return 1;
    
    return 0;
}

int main()
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
            if(Vencedor(Galo, ch))
            {
                printf("\n\n**** Ganhou o Jogador %c ****\n\n", ch);
                break;
            }
        }
        else
            printf("Posição já ocupada\nJogue novamente!!!\n");
        if(n_jogadas == DIM*DIM)
            break;
    }
    mostra(Galo);

    return 0;
}