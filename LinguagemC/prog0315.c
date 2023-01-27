#include <stdio.h>

main()
{

float salario, imposto = 0.0;
char sexo;

    printf("Qual o salário: ");     scanf("%f", &salario);
    printf("Qual o sexo: ");        scanf("%f", &sexo);

    switch(sexo)
    {
        case 'm' : case 'M' : imposto = imposto + 0.5;
        case 'f' : case 'F' : imposto = imposto + 0.10;
    }
    printf("Imposto: %.2f\n", salario*imposto);
}