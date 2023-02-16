#include <stdio.h>

void tabuleiro(int n){
    int i, j;

    for(i=1 ; i<=n ; i++)
    {
        for(j=1 ; j<=n ; j++)
        {
            if ((i+j)%2 == 0)
                printf("#");
            else
                printf("_");
        }

        printf("\n");
    }

}

int main(){
    tabuleiro(5);
    return 0;
}