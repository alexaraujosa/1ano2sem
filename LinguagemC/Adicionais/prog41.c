#include <stdio.h>

main()
{

int num1, num2, min, i, hcf=1;

    printf("Input first number: ");  scanf("%d", &num1);
    printf("Input second number: "); scanf("%d", &num2);

    min = (num1>num2) ? num2 : num1;

    for(i=1 ; i<=min ; i++)
    {
        if(num1%i == 0 && num2%i == 0)
            hcf = i;
    }

    printf("HCF of %d and %d = %d\n", num1, num2, hcf);
}