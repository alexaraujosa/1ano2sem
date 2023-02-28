#include <stdio.h>

float multInt1(int n, float m)
{
    float r = 0;
    int i;
    for(i=0 ; i<n ; i++)
    {
        r += i*m;
    }
    return r;
}

float multInt2(int n, float m)
{
    float r = 0;
    while(n>=1)
    {
        if(n%2)
            r += m;
        n /= 2;
        m *= 2;
    }
    return r;
}

int mdc1(int a, int b)
{
    int i, aux, r=0;
    if(a<b)
        {
            aux = b;
            b = a;
            a = aux;
        }

    for(i=1 ; i<=b ; i++)
    {
        if(i%a == 0 && i%b == 0)
            r = i;
    }
    return r;
}

int mdc2(int a, int b)
{
    while(a != 0 && b != 0)
    {
        if(a>b)
            a -= b;
        else if(a<b)
            b -= a;
        else
            return a;
    }
    
    if(a)
        return a;
    else
        return b;
}

int mdc22(int a, int b)
{
    while(a != 0 && b != 0)
    {
        if(a>b)
            a %= b;
        else if(a<b)
            b %= a;
        else
            return a;
    }

    if(a)
        return a;
    else
        return b;
}

int fib1(int n)
{
    if(n<2)
        return 1;
    else
        return fib1(n-1) + fib1(n-2);
}

int fib2(int n)
{
    int i, auxOneToN = 1, auxTwoToN = 0, res;
    for(i=2 ; i<=n ; i++)
    {
        res = auxOneToN + auxTwoToN;
        auxTwoToN = auxOneToN;
        auxOneToN = res;
    }
    return res;
}

int main()
{
    return 0;
}