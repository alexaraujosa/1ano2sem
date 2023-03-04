inic(int s[], int n);

main()
{
    int v[10];
    int x[20];

    inic(v, 10);
    inic(x, 20);
}

inic(int s[], int n)
{
    int i;
    for(i=0 ; i<n ; i++)
        s[i] = 0;
}