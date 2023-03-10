#include <stdio.h>

void Maximo(int arr[], int inicio, int tamanho);
void Minimo(int arr[], int inicio, int tamanho);

int main()
{
    int tamanho;

    printf("Input size: "); scanf("%d", &tamanho);
    int arr[tamanho];

    for(int i=0 ; i<tamanho ; i++)
        scanf("%d", &arr[i]);

    printf("Maximum element: %d\n", Maximo(arr, 0, tamanho));
    printf("Minimum element: %d\n", Minimo(arr, 0, tamanho));
    return 0;
}

void Maximo(int arr[], int inicio, int tamanho)
{
    int max=0;

    if(inicio >= tamanho-2)
        return (arr[inicio]>arr[inicio+1]) ? arr[inicio] : arr[inicio+1];
    
    max = Maximo(arr, inicio+1, tamanho);

    return (arr[inicio] > max) ? arr[inicio] : max;
}