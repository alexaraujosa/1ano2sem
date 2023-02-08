#include <stdio.h>

main()
{

int num, i, sum=0;

    printf("Input any number: ");   scanf("%d", &num);

    for(i=1 ; i<=num/2 ; i++)
    {

        if (num%i == 0)
        {
            sum = sum + i;
        }
    }

    if(sum == num && num > 0)
        printf("%d is perfect number.\n", num);
    else
        printf("%d isn't perfect number.\n", num);

}