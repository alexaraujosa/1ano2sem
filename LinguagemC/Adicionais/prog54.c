#include <stdio.h>

main()
{

int i, j, end, sum;

    printf("Input upper limit: ");  scanf("%d", &end);

    for(i=1 ; i <= end ; i++)
    {
        sum = 0;

        for(j=1 ; j <= i ; j++)
        {
            if(i%j == 0)
            {
                sum = sum + j;
            }
        }

        if(sum == i)
            printf("%d ", i);
    }

}