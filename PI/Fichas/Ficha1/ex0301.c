#include <stdio.h>

void quadrado(int n){
    int i, j;

    for(i=1 ; i<=n ; i++)
    {
        for(j=1 ; j<=n ; j++)
        {
            printf("#");
        }
        printf("\n");
    }

}

int main(){

    quadrado(5);
    return 0;
}