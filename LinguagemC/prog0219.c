#include <stdio.h>

main()

{
float num;

    printf("Introduza um Nº Real: ");           scanf("%f", &num);

    printf("Parte Inteira:\t\t%d\n", (int) num);
    printf("Parte Fracionária:\t%f\n", num - ((int) num));

}