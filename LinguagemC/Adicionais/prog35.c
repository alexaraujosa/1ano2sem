#include <stdio.h>

main()
{

int num, numOrig, reverse=0, last;

    printf("Input number: ");   scanf("%d", &numOrig);
    num = numOrig;
    while(num)
    {
        last = num%10;
        reverse = (reverse * 10) + last;
        num = num/10;
    }
    if (numOrig == reverse)
        printf("%d is palindrome\n", numOrig);
    else
        printf("%d isn't palindrome\n", numOrig);
}