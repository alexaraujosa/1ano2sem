#include <stdio.h>

main()
{

long long int num;
int count = 0;

printf("Input num: ");  scanf("%lld", &num);

    do
    {
        count++;
        num = num / 10;
    } while(num != 0);
    printf("Total digits: %d\n", count);
}