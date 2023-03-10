#include <stdio.h>

void printArray(int arr[], int inicio, int tamanho);

int main()
{
    int tamanho;

    printf("Input size: "); scanf("%d", &tamanho);
    int arr[tamanho];
    printf("Input elements: "); 
    for(int i=0 ; i<tamanho ; i++)
        scanf("%d", &arr[i]);

    printf("Array elements: ");
    printArray(arr, 0, tamanho);
    return 0;
}

void printArray(int arr[], int inicio, int tamanho)
{
    if(inicio >= tamanho)
        return;
    
    printf("%d, ", arr[inicio]);

    printArray(arr, inicio+1, tamanho);
}