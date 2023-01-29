#include <stdio.h>

main()
{

int horas;
char tipo;
long int res;

    printf("Introduza o Nº de Horas: ");            scanf("%d", &horas);
    printf("introduza o que mostrar (m/s/d): ");    scanf(" %c", &tipo);

    switch (tipo)
    {
        case 'd' : case 'D' : horas < 0 ? 0 : horas * 10;
        case 's' : case 'S' : horas < 0 ? 0 : horas * 60;
        case 'm' : case 'M' : horas < 0 ? 0 : horas * 60;
    }
    printf("%d Horas --> %ld%c\n", horas, res, tipo);
}