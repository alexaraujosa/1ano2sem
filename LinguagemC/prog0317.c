#include <stdio.h>

main()
{

int horas;
long int segundos;

    printf("Nº de Horas: "); scanf("%d", &horas);

    segundos = horas < 0 ? 0 : (long) 3600*horas;
    printf("%d Horas têm %ld segundos\n", horas, segundos);
}