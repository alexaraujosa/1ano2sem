#include <stdio.h>

main()
{

int num;

    printf("Input number: ");   scanf("%d", &num);

    switch(num>0)
    {
        case 1 : printf("%d is positive\n", num); break;
        case 0 : switch(num == 0)
                 {
                    case 1 : printf("%d is zero.\n", num); break;
                    case 0 : printf("%d is negative.\n", num);
                 }

    }

}