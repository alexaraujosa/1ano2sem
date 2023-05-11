#include <stdio.h>

int main() {

    int size;
    printf("Input array size: ");   scanf("%d", &size);


    int arr[size];
    int *ptrFirst;
    ptrFirst = arr;

    printf("Input elements: ");
    for(int i=0 ; i<size ; i++)
        scanf("%d", ptrFirst + i);



    ptrFirst = arr;

    printf("Array elements: ");
    for(int i = 0 ; i<size ; i++)
        printf("%d, ", *(ptrFirst+i));

    return 0;
}