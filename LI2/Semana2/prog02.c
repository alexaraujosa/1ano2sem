#include <stdio.h>

int main()
{
    int status, upper, cmds, i, j;

    if(scanf("%d", &status))
    {}
    if(scanf("%d", &upper))
    {}
    if(scanf("%d", &cmds))
    {}

    for(i=0 ; i<cmds ; i++)
    {
        if(scanf("%d", &j))
        {}

        if((status > 0 && status < upper) || (status == 0 && j > 0) || (status == upper && j < 0))
            status += j;      
    }
    printf("%d\n", status);
    return 0;
}