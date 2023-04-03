#include <stdio.h>
#include <math.h>   // necessário usar a flag -lm ao compilar para o compilador saber que o computador tem capacidade para usar as funções desta library

struct ponto{
    double x;
    double y;
};

typedef struct ponto Ponto; // Definição de sinónimos
typedef double real;
/*

struct ponto{
    real x;
    real y;
};

*/

double quadrado(double a) { return a*a; }

int main()
{
    struct ponto p1 = { 4.3, 0.2};
    printf("(%f, %f)\n", p1.x, p1.y);
    p1.x = 2;
    printf("(%f, %f)\n", p1.x, p1.y);
    
    return 0;
}