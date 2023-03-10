#include <stdio.h>

int main()
{
    int tamanho;
    printf("Input size of the array: ");    scanf("%d", &tamanho);
    int arr[tamanho];
    printf("Input elements: ");
    for(int i=0 ; i<tamanho ; i++)
        scanf("%d", &arr[i]);
    
    printf("Output: "); 
    for(int i=0 ; i<tamanho ; i++)
    {
        if(arr[i] < 0)
            printf("%d, ", arr[i]);
    }
    
    return 0;
}