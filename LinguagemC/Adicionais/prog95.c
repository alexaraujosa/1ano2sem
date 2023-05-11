#include <stdio.h>

int main() {

    int arr1[100], arr2[100], size;
    int *ptrArr1, *ptrArr2, *ptrFimArr1;

    ptrArr1 = arr1;
    ptrArr2 = arr2;

    printf("Input array size: ");   scanf("%d", &size);
    printf("Input array 1 elements: "); 

    for(int i = 0 ; i < size ; i++)
        scanf("%d", (ptrArr1 + i));

    ptrFimArr1 = &arr1[size-1];

    printf("Array1 before copying: ");
    for(int i = 0 ; i < size ; i++)
        printf("%d, ", *(arr1 + i));
    putchar('\n');

    printf("Array2 before copying: ");
    for(int i = 0 ; i < size ; i++)
        printf("%d, ", *(arr2 + i));
    putchar('\n');



    printf("---\n");

    while(ptrArr1 <= ptrFimArr1) {
        *ptrArr2 = *ptrArr1;
        ptrArr1++;
        ptrArr2++;
    }


    printf("Array2 after copying: ");
    for(int i = 0 ; i < size ; i++)
        printf("%d, ", *(arr2 + i));
    putchar('\n');

    return 0;
}