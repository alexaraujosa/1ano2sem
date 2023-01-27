#include <stdio.h>

main()
{

float salario;
char est_civil;

    printf("Qual o salário: ");         scanf("%f", &salario);
    printf("Qual o Estado Civil: ");    scanf(" %c", &est_civil);   /* Espaço vazio necessário antes do %c */

    if (est_civil == 'c' || est_civil == 'C')
        printf("Imposto: %.2f\n", salario*0.09);
    else   
        if (est_civil == 's' || est_civil == 'S')
            printf("Imposto: %.2f\n", salario*0.1);
        else
            printf("Estado Civil inválido.\n");
}