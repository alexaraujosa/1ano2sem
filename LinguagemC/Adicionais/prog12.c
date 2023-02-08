#include <stdio.h>

main()
{

int start, end;

    printf("Enter starting value: ");   scanf("%d", &start);
    printf("Enter end value: ");        scanf("%d", &end);

    while(start>=end)
    {
        printf("%d\n", start);
        start--;
    }

}