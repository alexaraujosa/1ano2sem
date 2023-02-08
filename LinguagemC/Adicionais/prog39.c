#include <stdio.h>

main()
{

int num, i;

    printf("Input number: ");   scanf("%d", &num);

    printf("All factors of %d are: ", num);
    for(i=1 ; i <= num ; i++)
    {
        if(num%i == 0)
            printf("%d, ", i);
    }

}