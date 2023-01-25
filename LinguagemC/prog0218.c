#include <stdio.h>

main()
{

long int num_segundos;

    printf("Introduza o Nº de Segundos: ");         scanf("%ld", &num_segundos);
    printf("Horas:\t\t%d\n", (int) num_segundos / (60 * 60));
    printf("Minutos:\t%d\n", (int) num_segundos / 60);
    printf("Segundos:\t%d\n", (int) num_segundos % 60);

}