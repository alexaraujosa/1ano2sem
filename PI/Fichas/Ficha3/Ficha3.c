#include <stdio.h>
//  1.a:
/*
1 1 4
2 2 6
3 3 8
4 4 10
5 5 12
*/
//  1.b: 13

void swapM (int *x, int *y)
{
    int aux = 0;
    aux = *x;
    *x = *y;
    *y = aux;
}

void swap(int v[], int i, int j)
{
    int temp = 0;
    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}

int soma(int v[], int N)
{
    int resultado = 0;
    for(int i=0; i < N ; i++)
        resultado += v[i];

    return resultado;
}

void inverteArray(int v[], int N)
{
    for(int i=N ; i>=N/2 ; i--)
    {
        swap(v, N-i-1, i);
    }
}

void inverteArray2(int v[], int N)
{
    for(int i=N ; i>=N/2 ; i--)
    {
        swapM(v + (N-i-1), v + i);
    }
}

int maximum(int v[], int N, int *m)
{
    if(N == 0)
        return 1;
        
    for(int i=0 ; i<N ; i++)
    {
        if(*m<v[i])
            *m = v[i];
    }

    return 4;
}

void quadrados(int q[], int N)
{
    q[0] = 0;
    for(int i=0 ; i<N ; i++)
        q[i+1] = i*i + (2*i+1);
}

void pascal(int v[], int N)
{
    if(N == 1)
        v[0] = 1;
    else
    {
        int linhaAnterior[];
        pascal(linhaAnterior, N-1);
        v[0] = 1;
        v[N-1] = 1;
        for(int i=1 ; i<N-1 ; i++)
            v[i] = linhaAnterior[i-1] + linhaAnterior[i];
    }
}

void printPascal(int N)
{
    int binomioCoeficiente[N][N];

    for(int i=0 ; i<N ; i++)
    {
        for(int j=0 ; j<=i ; j++)
        {
            if(j == 0 || j == i)
                binomioCoeficiente[i][j] = 1;
            else
                binomioCoeficiente[i][j] = binomioCoeficiente[i-1][j-1] + binomioCoeficiente[i-1][j];
            
            printf("%d\t", binomioCoeficiente[i][j]);
        }
        putchar('\n');
    }
}
int main()
{
    return 0;
}