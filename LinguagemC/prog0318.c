#include <stdio.h>

main()
{

int horas;
long int res;
char tipo;

    printf("Introduza o Nº de Horas: ");        scanf("%d", &horas);
    printf("O que mostrar (m/s/d): ");          scanf(" %c", &tipo);

    switch(tipo)
    {
        case 'm' : case 'M' : res = horas < 0 ? 0 : (long) 60 * horas; break;
        case 's' : case 'S' : res = horas < 0 ? 0 : (long) 3600 * horas; break;
        case 'd' : case 'D' : res = horas < 0 ? 0 : (long) 36000 * horas; break;
    }
    printf("%d Horas --> %ld%c\n", horas, res, tipo);
}