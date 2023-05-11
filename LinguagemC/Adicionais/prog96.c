#include <stdio.h>

void swap(int *ptr1, int *ptr2) {

    int temp;

    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

}



int main() {

int size, *esquerda, *direita, *inicio;
    printf("Input array size: ");   scanf("%d", &size);

    int arr[size];

    esquerda = arr;
    direita = &arr[size - 1];
    inicio = arr;

    printf("Input array elements: ");
    for(int i = 0 ; i < size ; i++)
        scanf("%d", esquerda+i);
    
    printf("Array before swapping: ");
    for(int i = 0 ; i < size ; i++)
        printf("%d, ", *(inicio+i));
    putchar('\n');

    printf("Array after swapping: ");
    while(esquerda < direita) {
        swap(esquerda, direita);
        esquerda++;
        direita--;
    }

    for(int i = 0 ; i < size ; i++)
        printf("%d, ", *(inicio+i));

    return 0;
}