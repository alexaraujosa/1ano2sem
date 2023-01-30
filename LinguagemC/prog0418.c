#include <stdio.h>

main()
{

int num, linhas;

    printf("Introduza um Nº: ");    scanf("%d", &linhas);

    for(num = linhas ; ; num++)
        {
            if (num%10 == 0)
                break;
            else
                if (num%3 == 0)
                    continue;
                else 
                    printf("%d\n", num); 
        }
}