#include <stdio.h>

main()
{

int num;

    for(num = 1 ; num <= 100 ; num = num + 1)
    {
        if (num == 60)
            break;
        else 
            if (num%2 == 1)
                continue;
            else 
                printf("%2d\n", num);
    }
}