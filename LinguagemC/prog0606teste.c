#include <stdio.h>
#define DIM 3

main()
{
    char Galo[DIM][DIM] = {{' ', ' ', ' '},{' ', ' ', ' '},{' ', ' ', ' '}};
    int i, j;   // i -> linhas | j -> colunas

    Galo[0][0] = 'X';
    Galo[0][2] = 'O';
    Galo[1][1] = 'X';
    Galo[2][2] = 'O';

    for(i=0 ; i<DIM ; i++)
    {
        for(j=0 ; j<DIM ; j++)
            printf("%c %c", Galo[i][j], j==DIM-1 ? ' ':'|');
        if(i!=DIM-1)
            printf("\n--------\n");
    }
}