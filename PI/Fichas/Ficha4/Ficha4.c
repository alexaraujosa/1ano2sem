#include <stdio.h>
#include <string.h>

#define MAX_SIZE 1000

int verificaVogal(char c);
int contaVogais(char *s);
int retiraVogaisRep(char *s);
int duplicaVogais(char *s);
int duplicaVogais2(char *s);
void merge(int a[], int na, int b[], int nb, int r[]);
void mergeSort(int r[], int N);

int verificaVogal(char c)
{
    switch(c)
    {
        case 'a' : case 'A' : case 'e' : case 'E' : case 'i' : case 'I' : case 'o' : case 'O' : case 'u' : case 'U' : return 1; 
    }

    return 0;
}

int contaVogais(char *s)
{
    int contador = 0;
    for(int i=0 ; i<strlen(s) ; i++)
    {
        if(verificaVogal(s[i]))
            contador++;
    }

    return contador;
}

int retiraVogaisRep(char *s)
{
    int j=0, contador=0;
    char s_auxiliar[MAX_SIZE];
    for(int i=0 ; s[i] != '\0' ; i++)
    {
        if(!verificaVogal(s[i]) || (s[i+1] != s[i]))
        {
            s_auxiliar[j] = s[i];
            j++;
        }
        else
            contador++;
    }
    s_auxiliar[j] = '\0';

    for(j=0 ; s_auxiliar[j] != '\0' ; j++)
        s[j] = s_auxiliar[j];
    s[j] = '\0';

    return contador;
}

int retiraVogaisRep2(char *s)
{
    int i, j=0, contador=0, tamanho;
    tamanho = strlen(s);
    for(i=0 ; i<tamanho ; i++)
    {
        if(verificaVogal(s[i]) && s[i] == s[i+1])
        {
            for(j=i ; j<tamanho ; j++)
                s[j] = s[j+1];
            i--;
            contador++;
        }
    }

    return contador;
}

int duplicaVogais(char *s)
{
    char s_auxiliar[MAX_SIZE];
    int j=0, contador=0;
    for(int i=0 ; s[i] != '\0' ; i++)
    {
        if(verificaVogal(s[i]))
        {
            s_auxiliar[j] = s[i];
            s_auxiliar[++j] = s[i];
            j++;
            contador++;
        }
        else
        {
            s_auxiliar[j] = s[i];
            j++;
        }    
    }
    s_auxiliar[j] = '\0';

    for(j=0 ; s_auxiliar[j] != '\0' ; j++)
        s[j] = s_auxiliar[j];
    s[j] = '\0';

    return contador;
}

int duplicaVogais2(char *s)
{
    int i, j=0, tamanho, contador=0;
    tamanho = strlen(s);
    for(i=0 ; s[i] != '\0' ; i++)
    {
        if(verificaVogal(s[i]))
        {
            for(j = tamanho ; j >= i ; j--)
                s[j + 1] = s[j];
            i++;
            contador++;
            tamanho++;
        }

    }
    return contador;
}


 /**********************\
|        PARTE 2         |
 \**********************/

int ordenado(int v[], int N)
{
    for(int i=0 ; i<N-1 ; i++)
        if(v[i] > v[i+1])
            return 0;
    
    return 1;
}

void merge(int a[], int na, int b[], int nb, int r[])
{
    int nr= na+nb;
    for(int i=0 ; i<nr ; i++)
    {
        if(nb == 0 || a[0] < b[0])
        {
            r[i] = a[0];
            a++;
            na--;
        }
        else
        {
            r[i] = b[0];
            b++;
            nb--;
        }
    }
}

void mergeSort(int r[], int N)
{
    if(N <= 1)
        return;
        
    int metade = N/2;
    int r1[N], r2[N];

    for(int i=0 ; i<metade ; i++)
        r1[i] = r[i];
    for(int i = metade ; i<N ; i++)
        r2[i-metade] = r[i];
    
    mergeSort(r1, metade);
    mergeSort(r2, N-metade);
    merge(r1, metade, r2, N-metade, r);
}