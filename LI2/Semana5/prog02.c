#include <stdio.h>

#define HORAS 24

int valido(int arr[], int tamanho)
{
    int contagem = 0;
    for(int i=0 ; i<tamanho ; i++)
        if(arr[i] != -1)
            contagem++;
    
    return contagem;
}

void trocar(int *num1, int *num2)
{
    int temporario;
    temporario = *num1;
    *num1 = *num2;
    *num2 = temporario;
}

void organizarCrescente(int arr[], int tamanho)
{
    for(int i=0 ; i<tamanho-1 ; i++)
    {
        int minimo = i;
        for(int j=i+1 ; j<tamanho ; j++)
        {
            if(arr[j] < arr[minimo])
                minimo = j;
        }

        trocar(&arr[minimo], &arr[i]);
    }
}

int main()
{
    int lim_cod_inicial, linhas;

    if(scanf("%d", &lim_cod_inicial)){}
    if(scanf("%d", &linhas)){}

    int matriz[HORAS][lim_cod_inicial];

    for(int i=0 ; i<HORAS ; i++)
    {
        for(int j=0 ; j<lim_cod_inicial ; j++)
            matriz[i][j] = -1;
    }

    for(int i=0; i<linhas ; i++)
    {
        int codigo_agente, inicio_turno, fim_turno;
        if(scanf("%d %d %d", &codigo_agente, &inicio_turno, &fim_turno)){}

        while(inicio_turno<=fim_turno)
        {
            matriz[inicio_turno][codigo_agente - 1] = 1;
            inicio_turno++;
        }
    }

    for(int i=0 ; i<HORAS ; i++)
    {
        if(valido(matriz[i], lim_cod_inicial) <= 1)
            continue;
        
        printf("%d", i);

        for(int j=0 ; j<lim_cod_inicial ; j++)
        {
            if(matriz[i][j] != -1)
                printf(" %d", j + 1);
        }
        putchar('\n');
    }

    return 0;
}