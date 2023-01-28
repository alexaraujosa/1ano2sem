#include <stdio.h>

main()
{

int num;

    printf("Input number: ");   scanf("%d", &num);

    switch(num%2 == 0)
    {
        case 1 : printf("Even number.\n"); break;
        case 0 : printf("Odd number.\n"); 
    }

}