#include <stdio.h>

main()
{

int num;

    for(num=0 ; num <= 255 ; num++)
    {
        printf("ASCII value of character %c = %d\n", (char) num, num);
    }

}