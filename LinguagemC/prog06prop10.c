#include <stdio.h>
#include <ctype.h>

int memicmp(char *s1, char *s2, int n)
{
    for(int i=0 ; i<n ; i++)
        if(toupper(s1[i]) != toupper(s2[i]))
            return 0;
    
    return 1;
}