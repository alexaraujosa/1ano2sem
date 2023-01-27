#include <stdio.h>

main()
{

float salario, imposto = 0.0;
char sexo;

    printf("Qual o salário: ");     scanf("%f", &salario);
    printf("Qual o sexo: ");        scanf(" %c", &sexo);    /* Espaço vazio antes do %c */

    switch(sexo)
    {
        case 'm' : case 'M' : imposto = 0.15; break;
        case 'f' : case 'F' : imposto = 0.10; break;
    }
    printf("Imposto: %.2f\n", salario*imposto);
}