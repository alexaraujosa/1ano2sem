#include <stdio.h>

int main()
{
    int s1, s2, s3, maior, meio, menor;
    maior = meio = menor = -1;

    if(scanf("%d %d %d", &s1, &s2, &s3))
    {}

    if(s1 >= s2 && s1 >= s3)
    {
        maior = s1;
        if(s2 >= s3)
        {
            meio = s2;
            menor = s3;
        }
        else 
        {
            meio = s3;
            menor = s2;
        }
    }
    
    
    else if(s2 >= s3)
    {
        maior = s2;
        if(s1 >= s3)
        {
            meio = s1;
            menor = s3;
        }
        else
        {
            meio = s3;
            menor = s1;
        }
    }
    else
    {
        maior = s3;
        if(s1 >= s2)
        {
            meio = s1;
            menor = s2;
        }
        else
        {
            meio = s2;
            menor = s1;
        }
    }
    printf("%d %d %d\n", menor, meio, maior);

    return 0;
}