#include <stdio.h>

void circulo(int n){
    int i, j;

    for(i=0 ; i <= 2*n ; i++)
    {
        for(j=0 ; j <= 2*n ; j++)
        {
            if ((j-n)*(j-n)+(i-n)*(i-n) <= n*n) /* x^2 + y^2 <= raio */
                printf("#");
            else
                printf(" ");
        }
        printf("\n");
    }

}

int main(){

    circulo(5);
    return 0;
    
}