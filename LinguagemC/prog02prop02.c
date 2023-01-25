#include <stdio.h>

main()

{
short int dia, mes, ano;

    printf("Introduza o dia: ");        scanf("%hd", &dia);
    printf("Introduza o mês: ");        scanf("%hd", &mes);
    printf("Introduza o ano: ");        scanf("%hd", &ano);

    printf("A data introduzida foi: %hd/%hd/%hd\n", dia, mes, ano);

}