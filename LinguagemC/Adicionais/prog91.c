#include <stdio.h>

int main() {

    int num = 0;
    int *ptrNum;

    ptrNum = &num;


    printf("Address of num = %d\n", &num);
    printf("Value of num = %d\n", num);

    printf("Address of ptrNum = %d\n", &ptrNum);
    printf("Value of ptrNum = %d\n", ptrNum);
    printf("Value pointed by ptrNum = %d\n", *ptrNum);

    return 0;
}