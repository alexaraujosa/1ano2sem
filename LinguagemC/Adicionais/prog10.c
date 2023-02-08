#include <stdio.h>

main()
{

int start,end;

    printf("Enter start value: ");   scanf("%d", &start);
    printf("Enter end value: ");     scanf("%d", &end);

    printf("Natural numbers from %d to %d:\n", start, end);
    for( ; start <= end ; start++)
    {
        printf("%d\n", start);
    }
}