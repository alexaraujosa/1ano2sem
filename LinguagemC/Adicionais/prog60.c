#include <stdio.h>
#include <math.h>

int Prime(int num);
int Armstrong(int num);
int Perfect(int num);

int main()
{
    int num;
    printf("Input any number: ");   scanf("%d", &num);

    if(Prime(num))
        printf("%d is prime number\n", num);
    else
        printf("%d is not a prime number\n", num);
    
    if(Armstrong(num))
        printf("%d is armstrong number\n", num);
    else
        printf("%d is not a armstrong number\n", num);

    if(Perfect(num))
        printf("%d is perfect number\n", num);
    else
        printf("%d is not a perfect number\n", num);

    return 0;
}

int Prime(int num)
{
    int i;
    for(i=2 ; i<=num/2 ; i++)
    {
        if(num%i == 0)
            return 0;
    }
    return 1;
}

int Armstrong(int num)
{
    int last, sum=0, backupNum, digits;
    backupNum = num;
    digits = (int) log10(num) +1;

    while(num>0)
    {
        last = num%10;
        sum = sum + round(pow(last,digits));
        num = num/10;
    }

    return (num == sum);
}

int Perfect(int num)
{
    int i, sum=0, n;
    n = num;

    for(i=1 ; i <= n ; i++)
    {
        if(n%i == 0)
            sum = sum+i;
    }
    
    return (num == sum);
}