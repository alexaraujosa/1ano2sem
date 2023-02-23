#include <stdio.h>

int main()
{
    int s1, s2, s3;

    if(scanf("%d %d %d", &s1, &s2, &s3))
    {}
    
    if(s1 >= s2 && s2 >= s3)
        printf("OK\n");
    else if(s1 <= s2 && s2 <= s3)
        printf("OK\n");
    else
        printf("NAO\n");

    return 0;
}