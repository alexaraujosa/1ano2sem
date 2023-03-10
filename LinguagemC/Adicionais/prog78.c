#include <stdio.h>

int SumOfElementsArray(int arr[], int inicio, int tamanho);

int main()
{
    int tamanho;

    printf("Input size: ");     scanf("%d", &tamanho);
    int arr[tamanho];

    printf("Input elements: "); 
    for(int i=0 ; i<tamanho ; i++)
        scanf("%d", &arr[i]);
    
    printf("Sum of all elements: %d\n", SumOfElementsArray(arr, 0, tamanho));
    return 0;
}

int SumOfElementsArray(int arr[], int inicio, int tamanho)
{
    int resultado = 0;
    if(inicio>=tamanho)
        return 0;

    return (arr[inicio] + SumOfElementsArray(arr, inicio+1, tamanho));

}