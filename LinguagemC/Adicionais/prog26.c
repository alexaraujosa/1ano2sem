#include <stdio.h>

main()
{

int start, num;

    printf("Input num: ");  scanf("%d", &num);

    for(start=1 ; start <= 10 ; start++)
    {
        printf("%d * %2d = %d\n", num, start, start*num);
    }

}