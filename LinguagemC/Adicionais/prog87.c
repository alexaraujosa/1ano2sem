#include <stdio.h>

int main()
{
    int tamanho, posicao, elemento;
    printf("Input size: "); scanf("%d", &tamanho);
    int arr[tamanho];
    printf("Input array elements: "); 
    for(int i=0 ; i<tamanho ; i++)
        scanf("%d", &arr[i]);
    
    printf("Input element to insert: ");    scanf("%d", &elemento);
    printf("Input position: "); scanf("%d", &posicao);

    if(posicao > tamanho+1 || posicao <= 0)
        printf("Invalid position, please enter a position between 1 and %d\n", tamanho);
    else
    {
        for(int i = tamanho ; i>=posicao ; i--)
            arr[i] = arr[i-1];
        
        arr[posicao-1] = elemento;
        tamanho++;

        printf("Arrays elements after insertion: ");
        for(int i=0 ; i<tamanho ; i++)
            printf("%d ", arr[i]);
    }
    return 0;
}