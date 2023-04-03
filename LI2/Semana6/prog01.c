#include <stdio.h>

void frequencia(char *nome, int *nome_contagem);
int comparador(int *nome_vilao_contagem, int* nome_possivel_contagem);
int existeAnagrama(int *resultado, int linhas);
int proximos(int *resultado, int linhas, int atual);

int main()
{
    int casos;
    if(scanf("%d", &casos)){}

    for(int i=0 ; i<casos ; i++)
    {
        int linhas;
        char nome_vilao[100] = {0};
        int nome_vilao_freq[26] = {0};
        if(scanf("%d", &linhas)){}
        int resultado[linhas];
        for(int j=0 ; j<linhas ; j++)
            resultado[j] = 0;
        if(getchar()){}
        if(fgets(nome_vilao, 100, stdin)){}
        frequencia(nome_vilao, nome_vilao_freq);

        for(int j=0 ; j<linhas ; j++)
        {
            char nome_possivel[100] = {0};
            int nome_possivel_freq[26] = {0};
            fflush(stdin);
            if(fgets(nome_possivel, 100, stdin)){}
            frequencia(nome_possivel, nome_possivel_freq);

            if(comparador(nome_vilao_freq, nome_possivel_freq))
                resultado[j] = 1;
        }
        


        for(int j=0 ; j<linhas ; j++)
        {
            if(existeAnagrama(resultado, linhas) == 0)
            {
                printf("-1"); 
                break;
            }

            if(resultado[j] && j == linhas-1)
            {
                printf("%d", j+1); 
                break;
            }
            
            else if(resultado[j]&& proximos(resultado, linhas, j))
                printf("%d ", j+1);

            else if(resultado[j])
                printf("%d", j+1);
        }
        putchar('\n');
    }

    return 0;
}


void frequencia(char *nome, int *nome_contagem){
    for(int i=0 ; nome[i] ; i++)
    {
        if(nome[i] == ' ')
            continue;
        if(nome_contagem[nome[i] - 'A'])
            continue;

        for(int j=i+1 ; nome[j] ; j++)
        {
            if(nome[j] == ' ')
                continue;

            if(nome[i] == nome[j])
                nome_contagem[nome[i] - 'A']++;
        }
    }
}

int comparador(int *nome_vilao_contagem, int *nome_possivel_contagem)
{
    for(int i=0 ; i<26 ; i++)
    {
        if(nome_possivel_contagem[i] != nome_vilao_contagem[i])
            return 0;
    }
    return 1;
}

int existeAnagrama(int *resultado, int linhas)
{
    for(int i=0 ; i<linhas ; i++)
        if(resultado[i])
            return 1;
    
    return 0;
}

int proximos(int *resultado, int linhas, int atual)
{
    for(int i=atual+1 ; i<linhas ; i++)
        if(resultado[i])
            return 1;
    
    return 0;
}