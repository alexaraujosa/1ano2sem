#include <stdio.h>

main()
{

float salario;

    printf("Introduza um salário: ");       scanf("%f", &salario);

    if (salario < 100000)
        salario = salario + 1000;
        printf("Salário: %.2f\n", salario);     /*  Através do .2f vêm apenas duas casas decimais  */
}