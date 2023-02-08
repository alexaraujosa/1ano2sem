#include <stdio.h>

main()
{

int start, end;

    printf("Enter lower limit: ");  scanf("%d", &start);
    printf("Enter upper limit: ");  scanf("%d", &end);

    if (start%2 == 0)
        start++;
    
    while(start<=end)
    {
        printf("%d\n", start);
        start += 2;
    }

}