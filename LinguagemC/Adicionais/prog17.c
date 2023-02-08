#include <stdio.h>

main()
{

int start=1, end;

    printf("Input upper limit: ");  scanf("%d", &end);

    printf("Odd numbers between 1 to %d:\n", end);

    while(start<=end)
    {
        printf("%d\n", start);
        start += 2;
    }

}