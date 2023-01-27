#include <stdio.h>

main()
{

short int dia ,mes, ano;

    printf("Introduza a data (dd-mm-aaaa): ");   scanf("%hd-%hd-%hd", &dia, &mes, &ano);

    switch(mes)
    {
        case 2 : if (dia >= 1 && dia <= 28 + (ano%4==0))
                    printf("Data válida.\n");
                 else 
                    printf("Data inválida.\n");
                 break;
        case 4: case 6 : case 9 : case 11 : if (dia >= 1 && dia <= 30)
                                                printf("Data válida.\n")
                                            else 
                                                printf("Data inválida.\n");
                                            break;
        default: if (mes < 1 || mes > 12)
                    printf("Data inválida.\n");
                 else
                    printf("Data válida.\n");
    }
}