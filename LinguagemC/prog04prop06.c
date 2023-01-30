#include <stdio.h>

main()
{

int carac, num1, num2, troca;

    do{
    printf("Introduza dois Nºs entre 0 e 255: "); scanf("%d %d", &num1, &num2);
    }
    while (num1 < 0 || num1 > 255 || num2 < 0 || num2 > 255);
    
    if (num1 > num2)
    {
        troca = num2;
        num2 = num1;
        num1 = troca;
    }
        for(carac = num1 ; carac <= num2 ; carac++)
            {
                printf("%3d --> %c\n", carac, (char) carac);
            }
}