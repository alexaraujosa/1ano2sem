#include <stdio.h>

int main()
{

    int tamanho, minimo=0, maximo=0;

    printf("Input size: "); scanf("%d", &tamanho);
    int arr[tamanho];
    printf("Input elements: ");
    for(int i=0 ; i<tamanho ; i++)
    {
        scanf("%d", &arr[i]);

        if(maximo<arr[i])
            maximo = arr[i];
        
        if(minimo>arr[i])
            minimo = arr[i];
    }
    
    printf("Maximum element: %d\n", maximo);
    printf("Minimum element: %d\n", minimo);

    return 0;
}