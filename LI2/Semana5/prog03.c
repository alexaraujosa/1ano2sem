#include <stdio.h>
#include <string.h>

int pertence(char arr1[][21], char arr2[]);
void separar(char arr1[], char arr2[][20], int posicao);
int minimo(int arr[], int dias);

int main()
{
    int dias;
    char linha[1000];

    if(scanf("%d", &dias)){}
    int contados[40*dias];
    char alcunhas[40*dias+1][20];
    
    // Inicialização da matriz "alcunhas" toda a NULL
    for(int i=0 ; i<40*dias+1 ; i++)
    {
        for(int j=0 ; j<20 ; j++)
        {
            alcunhas[i][j] = 0;
        }
    }

    // Inicialização do array "contados" todo a 0
    for(int i=0 ; i<40*dias ; i++)
        contados[i] = 1;

    // Leitura de todas as linhas
    for(int i=0 ; i<dias ; i++)
    {
        fflush(stdin);
        if(fgets(linha, 1000, stdin)){}
        separar(linha, alcunhas, i);
    }

    for(int i=0 ; i<40*dias ; i++)
    {

        //Se a alcunha não existir, retira-se a hipótese de ser o mínimo
        if(alcunhas[i][0] == 0)
            contados[i] = dias;
        else
        {
            for(int j=i+1 ; j<40*dias ; j++)
            {
                //Se a alcunha for nula é ignorada
                if(alcunhas[j][0] == 0)
                    continue;
                //Se forem iguais, adiciona-se na contagem e seta-se a alcunha de procura como nula
                if(strcmp(alcunhas[i], alcunhas[j]) == 0)
                {
                    contados[i]++;
                    for(int k=0 ; k<20 ; k++)
                        alcunhas[j][k] = 0;
                }
            }
        }
    }

    for(int i=0 ; i<20 ; i++)
    {
        if(alcunhas[minimo(contados, dias)][i] == 0 || alcunhas[minimo(contados, dias)][i] == '\0')
            break;
        else
            printf("%c", alcunhas[minimo(contados, dias)][i]);
    }
    
    
    putchar('\n');
    return 0;
}

void separar(char arr1[], char arr2[][20], int posicao)
{
    int x=40*posicao, j=0;
    for(int i=0 ; i<1000 ; i++, j++)
    {
        if(arr1[i] == '\n')
            break;

        if(arr1[i] != ' ')
            arr2[x][j] = arr1[i];
        else if(arr1[i] == ' ')
        {
            x++;
            j = -1;
        }
    }
}

int minimo(int arr[], int dias)
{
    int min_atual = dias, index_atual = -1;
    for(int i=0 ; i<40*dias ; i++)
    {
        
        if(min_atual > arr[i])
        {
            min_atual = arr[i];
            index_atual = i;
        }
    }

    return index_atual;
}