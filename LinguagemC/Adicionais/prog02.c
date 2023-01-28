#include <stdio.h>

main()

{

int month;

    printf("Input month number: ");     scanf("%d", &month);

    switch(month)
    {
    
    case 1 : case 3 : case 5 : case 7 : case 8 : case 10 : case 12 : printf("Total number of days = 31.\n"); break;
    case 4 : case 6 : case 9 : case 11 : printf("Total number of days = 30.\n");; break;
    case 2 : printf("Total number of days = 28/29.\n"); break;
    default : printf("Invalid input. Please enter month number between 1-12.\n");
    }
}