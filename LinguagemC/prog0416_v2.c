#include <stdio.h>

main()
{

int numBase, num;

    printf("Escreva um Nº: ");  scanf("%d", &numBase);

    for(num = 1 ; num <= numBase ; num++)
        {
            printf("%d  %d\n", num, numBase - num + 1);
        }

}