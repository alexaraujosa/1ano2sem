#include <stdio.h>

void triangulo(int n){
    int i, j;

    for(i=1 ; i < 2*n ; i++)
    {
        for(j=1 ; j <= 2*n - i ; j++)
        {
            if (j <= i)
                printf("#");
        }
        printf("\n");
    }

}