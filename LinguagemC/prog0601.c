#include <stdio.h>

main()
{
    float salario[12];
    float total;
    int i;

    for(i=0 ; i<12 ; i++)
    {
        printf("Introd. o salário do mes %d: ", i+1);   scanf("%f", &salario[i]);
    }

    printf("Mes\tValor\n");
    for(i=0, total=0.0 ; i<12 ; i++)
    {
        printf(" %3d\t%9.2f\n", i+1, salario[i]);
        total += salario[i];
    }
    printf("Total Anual: %9.2f\n", total);
}