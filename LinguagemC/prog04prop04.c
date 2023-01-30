#include <stdio.h>

main()
{

int num;

    printf("Introduza um Nº: ");    scanf("%d", &num);
    while(3)
    {
        if (num >= 1 && num <= 100)
            break;
        else
            printf("Introduza outro Nº: "); scanf("%d", &num);
    }

}