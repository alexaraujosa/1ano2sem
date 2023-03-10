#include <stdio.h>

int main()
{
    int tamanho;

    printf("Input size of the array: "); scanf("%d", &tamanho);
    int arr[tamanho];

    printf("Input %d elements in the array:", tamanho);
    for(int i=0 ; i<tamanho ; i++)
        scanf("%d", &arr[i]);

    printf("Output: ");
    for(int i=0 ; i<tamanho ; i++)
        printf("%d, ", arr[i]);
    return 0;
}