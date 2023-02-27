#include <stdio.h>

int main()
{
    int upper, i, j, x=0, y=0;

    if(scanf("%d", &upper))
    {}

    for(i=0 ; i<upper ; i++)
    {
        if(scanf("%d", &j))
        {}

        switch(j%4)
        {
            case 0 : x++; break;
            case 1 : y--; break;
            case 2 : y++; break; 
            case 3 : x--; break;
        }
    }

    printf("%d %d\n", x, y);
    return 0;
}