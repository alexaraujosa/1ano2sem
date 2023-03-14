#include <stdio.h>

char *memcpy(char *dest, char *orig, int n)
{
    for(int i=0 ; i<n ; i++)
        dest[i] = orig[i];
    
    return dest;
}
