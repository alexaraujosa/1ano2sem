#include <stdio.h>

main()
{

int num, i;

    printf("Input upper limit:");   scanf("%d", &num);
    printf("Natural numbers from 1 to %d:\n", num);
    for(i = 1 ; i <= num ; i++)
    {
        printf("%d\n", i);
    }

}