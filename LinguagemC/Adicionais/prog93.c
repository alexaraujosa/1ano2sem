#include <stdio.h>

int main() {

    int num1, num2;
    int *ptr1, *ptr2;

    printf("Input num1: "); scanf("%d", &num1);
    printf("Input num2: "); scanf("%d", &num2);

    ptr1 = &num1;
    ptr2 = &num2;
    
    int temp;

    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;


    printf("Num 1 after swapping: %d\n", num1);
    printf("Num 2 after swapping: %d\n", num2);


    return 0;
}