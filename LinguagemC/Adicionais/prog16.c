#include <stdio.h>

main()
{
    
int start=2, end;

    printf("Print all even numbers till: ");    scanf("%d", &end);

    printf("All even numbers from 1 to %d are:\n", end);

    while(start<=end)
    {
        printf("%d\n", start);
        start += 2;
    }
}
