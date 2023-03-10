#include <stdio.h>

int main()
{
    int tamanho, resultado=0;

    printf("Input size: ");     scanf("%d", &tamanho);
    int arr[tamanho];

    printf("Input elements: ");
    for(int i=0 ; i<tamanho ; i++)
    {
        scanf("%d", &arr[i]);
        resultado = resultado + arr[i];
    }

    printf("Sum of all elements: %d\n", resultado);   


    return 0;
}