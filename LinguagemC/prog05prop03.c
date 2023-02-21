float Pot(float x, int n)
{
    float res;
    int i;
    for (res=1, i=1 ; i <= n ; i++)
    {
        res = res * x;
    }

    return res;
}


float VAL(float x, int n, float t)
{
    int i;
    float res;
    for(res=0, i=1 ; i <= n ; i++)
    {
        res = res + x / Pot(1+t, i);
    }

    return res;
}

int main()
{
    return 0;
}