#include <stdio.h>

main()
{
    float salario[13];
    float total;
    int i;

    for(i=1 ; i<=12 ; i++)
    {
        printf("Introd. o salário do mes %d: ", i);     scanf("%f", &salario[i]);
    }
    printf("Mes\tValor\n");

    for(i=1 ; i<=12 ; i++)
    {
        printf(" %3d\t%9.2f\n", i, salario[i]);
        total += salario[i];
    }
    printf("Total Anual: %9.2f\n", total);
}