#include <stdio.h>

int memcmp(char *s1, char *s2, int n)
{
    for(int i=0 ; i<n ; i++)
        if(s1[i] != s2[i])
            return 0;
    
    return 1;
}