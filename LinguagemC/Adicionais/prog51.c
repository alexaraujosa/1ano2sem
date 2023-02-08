#include <stdio.h>
#include <math.h>

main()
{

int num, i, sum, last, digits, end;

    printf("Input upper limit: ");  scanf("%d", &end);

    printf("Ärmstrong numbers from 1 to %d are: ", end);

    for(i=1 ; i<=end ; i++)
    {

        sum = 0;
        num = i;
        digits = (int) log10(num) + 1;

        while(num>0)
        {
            last = num%10;
            sum = sum + ceil(pow(last,digits));
            num = num/10;
        }

        if(sum == i)
            printf("%d ", i);
            
    }

}