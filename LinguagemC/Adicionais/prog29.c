#include <stdio.h>

main()
{

int first, last, num;

    printf("Input number: ");   scanf("%d", &num);

    /* Get First Digit */

    first = num;

    while(first>=10)
    {
        first = first/10;
    }

    /* Get Last Digit */

   last = num%10;

   printf("First digit: %d\n", first);
   printf("Last digit: %d\n", last); 

}