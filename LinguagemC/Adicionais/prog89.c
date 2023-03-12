#include <stdio.h>

int main()
{
    int tamanho;
    printf("Input size: "); scanf("%d", &tamanho);
    int arr[tamanho], freq[tamanho];
    printf("Input array elements: ");   
    for(int i=0 ; i<tamanho ; i++)
    {
        scanf("%d", &arr[i]);
        freq[i] = -1;
    }
    
    for(int i=0 ; i<tamanho ; i++)
    {
        int count = 1;
        for(int j=i+1 ; j<tamanho ; j++)
        {
            if(arr[i] == arr[j])   
            {
                count++;
                freq[j] = 0;
            }
        }

        if(freq[i] != 0)
            freq[i] = count;
    }

    for(int i=0 ; i<tamanho ; i++)
    {
        if(freq[i] != 0)
            printf("%d occurs %d times\n", arr[i], freq[i]);
    }


    return 0;
}