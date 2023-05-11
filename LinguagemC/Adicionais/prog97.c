#include <stdio.h>

int encontrar(int *arr, int size, int valor) {

    int index = 0;
    int *ptrFimArr = &arr[size-1];

    while(arr <= ptrFimArr && *arr != valor) {
        arr++;
        index++;
    }

    if(arr <= ptrFimArr)
        return index;

    return -1;
}


int main() {

    int size, *ptrArr, valor;
    printf("Input array size: ");   scanf("%d", &size);
    int arr[size];

    ptrArr = arr;

    printf("Input array values: ");
    for(int i = 0 ; i < size ; i++)
        scanf("%d", ptrArr + i);

    printf("Input value to search for: ");  scanf("%d", &valor);

    if(encontrar(arr, size, valor) != -1)
        printf("%d does exists in array.\n", valor);
    else
        printf("%d does not exists in array.\n", valor);


    return 0;
}