#include <stdio.h>

int main()
{
    int tamanho, max1=0, max2=0;

    printf("Input size: "); scanf("%d", &tamanho);
    int arr[tamanho];

    printf("Input elements: ");
    for(int i =0 ; i<tamanho ; i++)
        scanf("%d", &arr[i]);
    
    for(int i=0 ; i<tamanho ; i++)
    {
        if(max1<arr[i])
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i] > max2 && max1 > arr[i])
            max2 = arr[i];
    }

    printf("First largest: %d\n", max1);
    printf("Second largest: %d\n", max2);
    return 0;
}