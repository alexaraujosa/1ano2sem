#include <stdio.h>

main()
{

int start,end;

    printf("Enter lower limit: ");  scanf("%d", &start);
    printf("Enter upper limit: ");  scanf("%d", &end);

    printf("All odd numbers from %d to %d are:\n", start, end);

    while(start<=end)
    {
        if (start%2)
            printf("%d\n", start);
        start++;
    }

}