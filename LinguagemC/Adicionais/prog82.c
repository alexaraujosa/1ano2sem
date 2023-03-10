#include <stdio.h>

int main()
{
    int tamanho, oddCounter = 0, evenCounter = 0;
    printf("Input size: "); scanf("%d", &tamanho);
    int arr[tamanho];
    printf("Input array elements: ");  

    for(int i=0 ; i<tamanho ; i++)
    {    
        scanf("%d", &arr[i]);
        if(arr[i]%2 == 0)
            evenCounter++;
        else
            oddCounter++;
    }
    
    printf("Total even numbers: %d\n", evenCounter);
    printf("Total odd numbers:  %d\n", oddCounter);
    return 0;
}