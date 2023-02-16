#include <stdio.h>

void triangulo(int n){
    int i, j, k;

    for(i=1 ; i <= n ; i++)
    {
        j = i-1;
        for(k=1 ; k <= n-j-1 ; k++)
        {
            printf(" ");
        }
        for(k=1 ; k <= 2*j+1 ; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}