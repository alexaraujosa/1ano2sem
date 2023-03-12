#include <stdio.h>

int main()
{
    int tamanho;
    printf("Input size: "); scanf("%d", &tamanho);
    int arr1[tamanho], arr2[tamanho];
    printf("Input array elements: ");
    for(int i=0 ; i<tamanho ; i++)
        scanf("%d", &arr1[i]);
    
    for(int i=0 ; i<tamanho ; i++)
        arr2[i] = arr1[i];

    printf("Array1: ");
    for(int i=0 ; i<tamanho ; i++)
        printf("%d ", arr1[i]);    

    printf("\nArray2: ");
    for(int i=0 ; i<tamanho ; i++)
        printf("%d ", arr2[i]);
    return 0;
}