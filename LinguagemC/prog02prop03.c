#include <stdio.h>

main()

{
int dia, mes, ano;
                                    /* Pode-se indicar no formato de leitura da função scanf o caracter separador entre as várias componentes*/
    printf("Introduza uma data no formato (aaaa-mm-dd): ");         scanf("%d-%d-%d", &ano, &mes, &dia);

    printf("A data inserida no formato (dd/mm/aaaa) foi: %d/%d/%d\n", dia, mes, ano);

}