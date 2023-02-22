#include <stdio.h>

double Cube(double x)
{
    return x*x*x;
}

int main()
{
    int num;
    double c;

    printf("Input any number:");    scanf("%d", &num);
    c = Cube(num);
    printf("Cube of %d: %.2f\n", num, Cube(num));
    return 0;
}