#include <stdio.h>

/* A função func tem de ser definida acima da main, porque o ficheiro é lido de cima para baixo */

int func(int x){        /* Função func que retorna um int, recebendo como Argumento um 'x' (int) */
    int y;
    y = x * 2;
    return y;
}

int main(){
    int z;

    z = func(5);
    printf("Hello, world!");
    return 0;
}