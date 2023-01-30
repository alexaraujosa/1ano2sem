#include <stdio.h>

main()
{

int num1, num2;

    for(num1 = 1; num1 <= 5; num1 = num1 + 1)
        {
            for(num2 = 1; num2 <= 10; num2 = num2 + 1)
                printf("%2d * %2d = %2d\n", num1, num2, num1*num2);

                    if (num1 != 5)
                        {
                            printf("Prima <ENTER> para continuar ...\n");
                            getchar();
                        }
                
        }

}