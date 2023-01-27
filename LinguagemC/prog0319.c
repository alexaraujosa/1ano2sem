#include <stdio.h>

main()
{

int horas;
char tipo;
long int res;

    printf("Introduza a quantidade de Horas: ");    scanf("%d", &horas);
    printf("Introduza o que mostrar (m/s/d): ");    scanf(" %c", &tipo);

    if (tipo == 'm' || tipo == 'M')
        res = horas < 0 ? 0 : horas * (long) 60;
    else if (tipo == 's' || tipo == 'S')
            res = horas < 0 ? 0 : horas * (long) 3600;
         else if (tipo == 'd' || tipo == 'D')
            res = horas < 0 ? 0 : horas * (long) 36000;
    
    printf("%d Horas --> %ld%c\n", horas, res, tipo);
}