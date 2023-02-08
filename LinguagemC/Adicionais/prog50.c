#include <stdio.h>
#include <math.h>

main()
{

int num, numBackup, sum=0, digits, last;

    printf("Input number: ");   scanf("%d", &num);
    numBackup = num;

    digits = (int) log10(num) + 1;

    while(num>0)
    {
        last = num%10;
        sum = sum + round(pow(last, digits));
        num = num/10;
    }

    if(numBackup == sum)
        printf("%d is armstrong number.\n", numBackup);
    else
        printf("%d is not armstrong number.\n", numBackup);
}