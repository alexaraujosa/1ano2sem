#include <stdio.h>

main()
{

int num;

    for(num = 1 ; num <= 100 ; num = num + 1)
        if (num == 30)
            break;
        else 
            printf("%2d\n", num*2);
    printf("FIM DO CICLO\n");
    

}