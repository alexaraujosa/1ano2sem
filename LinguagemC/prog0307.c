#include <stdio.h>

main()
{

float salario, taxa;

    printf("Qual o salário: ");         scanf("%f", &salario);

    if (salario >= 5000)
        taxa = 0.35;
    else
        if (salario >= 1000)
            taxa = 0.11;
        else
            taxa = 0.05;
    
    printf("Salário Bruto: %.2f Salário Líquido: %.2f Imposto: %.2f Taxa: %.2f\n", salario, salario*taxa, salario*(1-taxa), taxa);
}