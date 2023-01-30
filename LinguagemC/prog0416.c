#include <stdio.h>

main()
{

int numBase, numCresc, numDecresc;

    printf("Introduza um Nº: ");    scanf("%d", &numBase);

    for(numCresc = 1 , numDecresc = numBase ; numCresc <= numBase ; numCresc++, numDecresc--)
        printf("%d  %d\n", numCresc, numDecresc);
}