#include <stdio.h>

int NegativeChecker(int arr[], int inicio, int tamanho);

int main()
{
    int tamanho;
    printf("Input size: "); scanf("%d", &tamanho);
    int arr[tamanho];
    for(int i=0 ; i<tamanho ; i++)
        scanf("%d", &arr[i]);
    
    printf("Total number of negative elements: %d\n", NegativeChecker(arr, 0, tamanho));
    return 0;
}

int NegativeChecker(int arr[], int inicio, int tamanho)
{
    if(inicio>=tamanho)
        return 0;
    
    if(arr[inicio] < 0)
        return(1 + NegativeChecker(arr, inicio+1, tamanho));
    else
        return(NegativeChecker(arr, inicio+1, tamanho));
}