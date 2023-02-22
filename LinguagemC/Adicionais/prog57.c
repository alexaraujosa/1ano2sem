#include <stdio.h>
#include <math.h>

double Diameter(double raio);
double Circumference(double raio);
double Area(double raio);

int main()
{
    float raio;
    printf("Input radius:");    scanf("%f", &raio);
    printf("Diameter = %.2f units\n", Diameter(raio));
    printf("Circumference = %.2f units\n", Circumference(raio));
    printf("Area = %.2f sq. units\n", Area(raio));
    return 0;
}

double Diameter(double raio)
{
    return raio*2;
}

double Circumference(double raio)
{
    return 2*M_PI*raio;
}

double Area(double raio)
{
    return M_PI*raio*raio;
}