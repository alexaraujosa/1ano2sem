#include <stdio.h>
#define MAX 3

void transpor(int v[MAX][MAX])
{
    int temp;
    for(int i=0 ; i<MAX ; i++)
    {
        for(int j=i+1 ; j<MAX ; j++)
        {
            temp = v[i][j];
            v[i][j] = v[j][i];
            v[j][i] = temp;
        }
    }
}

void imprime(int v[MAX][MAX])
{
    for(int i=0 ; i<MAX ; i++)
    {
        for(int j=0 ; j<MAX ; j++)
            printf("%d\t", v[i][j]);
        putchar('\n');
    }
}

int main()
{
    int x[][MAX] = {{1,2,3}, {4,5,6}, {7,8,9}};

    puts("MATRIZ INICIAL:");
    imprime(x);
    transpor(x);
    puts("MATRIZ TRANSPOSTA");
    imprime(x);

    return 0;
}