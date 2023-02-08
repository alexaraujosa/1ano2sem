#include <stdio.h>

main()
{

int start, end, sum, i, j;

    printf("Input lower limit: ");  scanf("%d", &start);
    printf("Input upper limit: ");  scanf("%d", &end);

    printf("All perfect numbers between %d to %d are: ", start, end);
    for(i=start ; i <= end ; i++)
    {
        sum = 0;

        for(j=1 ; j<i ; j++)
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