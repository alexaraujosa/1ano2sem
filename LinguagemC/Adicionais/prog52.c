#include <stdio.h>
#include <math.h>

main()
{

int num, start, end, last, digits, i, sum;

    printf("Input lower limit: ");  scanf("%d", &start);
    printf("Input upper limit: ");  scanf("%d", &end);

    printf("Armstrong numbers between %d to %d are: ", start, end);
    for(i=start ; i<=end ; i++)
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