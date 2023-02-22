#include <stdio.h>

double pow(double base, int exp);

int main()
{
    double base;
    int exp;

    printf("Input base number: ");  scanf("%lf", &base);
    printf("Input power: ");        scanf("%d", &exp);

    printf("%.2lf ^ %d = %f", base, exp, pow(base,exp));

    return 0;
}

double pow(double base, int exp)
{

    if(exp == 0)
        return 1;
    else if (exp > 0)
        return base * pow(base, exp-1);
    else 
        return 1 / pow(base, -exp);
}
