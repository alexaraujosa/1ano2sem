#include <stdio.h>

int main()
{
    int tamanho, posicao;
    printf("Input size: "); scanf("%d", &tamanho);
    int arr[tamanho];
    printf("Input array elements: ");
    for(int i=0 ; i<tamanho ; i++)
        scanf("%d", &arr[i]);
    
    printf("Input position to delete: ");   scanf("%d", &posicao);

    if(posicao < 0 || tamanho < posicao)
        printf("Invalid position, please input a position between 1 and %d\n", tamanho);

    else
    {
        for(int i=posicao-1 ; i <tamanho-1 ; i++)
            arr[i] = arr[i+1];
        
        tamanho--;

        printf("Elements of array after delete are: ");
        for(int i=0 ; i<tamanho ; i++)
            printf("%d ", arr[i]);
    }

    return 0;
}