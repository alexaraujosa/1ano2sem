#include <stdio.h>

int main()
{
    int tamanho, negativeCounter = 0;

    printf("Input size:");  scanf("%d", &tamanho);
    int arr[tamanho];
    for(int i=0 ; i<tamanho ; i++)
    {
        scanf("%d", &arr[i]);
    
        if(arr[i] < 0)
            negativeCounter++;
    }

    printf("Total number of negative elements: %d\n", negativeCounter);
    return 0;
}