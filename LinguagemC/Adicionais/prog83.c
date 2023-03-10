#include <stdio.h>

int OddChecker(int arr[], int inicio, int tamanho);
int EvenChecker(int arr[], int inicio, int tamanho);
int main()
{
    int tamanho, oddCounter = 0, evenCounter = 0;
    printf("Input size: "); scanf("%d", &tamanho);
    int arr[tamanho];
    printf("Input array elements: "); 
    for(int i=0 ; i<tamanho ; i++)
        scanf("%d", &arr[i]);

    printf("Total even numbers: %d\n", EvenChecker(arr, 0, tamanho));
    printf("Total odd numbers:  %d\n", OddChecker(arr, 0, tamanho));
    return 0;
}

int OddChecker(int arr[], int inicio, int tamanho)
{
    if(inicio>=tamanho)
        return 0;
    
    if(arr[inicio]%2)
        return(1 + OddChecker(arr, inicio+1, tamanho));
    else
        return(OddChecker(arr, inicio+1, tamanho));
}

int EvenChecker(int arr[], int inicio, int tamanho)
{
    if(inicio>=tamanho)
        return 0;
    
    if(arr[inicio]%2 == 0)
        return(1 + EvenChecker(arr, inicio+1, tamanho));
    else
        return(EvenChecker(arr, inicio+1, tamanho));
}
