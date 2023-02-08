#include <stdio.h>

main()
{

int start=1, end;

    printf("Input upper range: ");  scanf("%d", &end);

    printf("Even numbers from 1 to %d are:\n", end);
    while(start<=end)
    {
        if (start%2 == 0)
            printf("%d\n", start);
        start++;
    }

}