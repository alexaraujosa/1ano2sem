#include <stdio.h>

main()
{

int num;

    for(num = 0; num <= 255 ; num++)
        {
            printf("%3d ---> %c\n", num, (char) num);
        }

}