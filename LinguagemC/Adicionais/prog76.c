#include <stdio.h>

void printNegativeArray(int arr[], int inicio, int tamanho);

int main()
{
    int tamanho;

    printf("Input size: ");     scanf("%d", &tamanho);
    int arr[tamanho];

    printf("Input elements: ");
    for(int i=0 ; i<tamanho ; i++)
        scanf("%d", &arr[i]);
    
    printf("All negative elements are: ");
    printNegativeArray(arr, 0, tamanho);
    return 0;
}

void printNegativeArray(int arr[], int inicio, int tamanho)
{
    if(inicio>=tamanho)
        return;
    
    if(arr[inicio]<0)
        printf("%d, ", arr[inicio]);
    
    printNegativeArray(arr, inicio+1, tamanho);
}