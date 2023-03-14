#include <stdio.h>

float max(float v[], int n)
{
    float max_temporario = v[0];
    for(int i=1 ; i<n ; i++)
    {
        if(max_temporario<v[i])
            max_temporario = v[i];
    }

    return max_temporario;
}

int main()
{
    float x[] = {10.0, 20.0, 15.0, 50.0, 27.0};

    printf("O maior dos 3 primeiros elementos = %f\n", max(x, 3));
    printf("O maior dos 5 primeiros elementos = %f\n", max(x, 5));
}