#include <stdio.h>

main()
{

int start, end=1;

    printf("Input N: ");    scanf("%d", &start);

    printf("Natural numbers from %d-1 in reverse: \n", start);
    while(start>=end)
    {
        printf("%d\n", start);
        start--;
    }

}