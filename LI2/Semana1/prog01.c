#include <stdio.h>

int main()
{
    int s1, s2, s3, s4, s5;
    if(scanf("%d %d %d %d %d", &s1, &s2, &s3, &s4, &s5))
    {}
    
    if(s1>=s2 && s1>=s3 && s1>=s4 && s1>=s5)
        printf("1\n");
    else
    if(s2>=s3 && s2>=s4 && s2>=s5)
        printf("2\n");
    else
    if(s3>=s4 && s3>=s5)
        printf("3\n");
    else
    if(s4>=s5)
        printf("4\n");
    else
        printf("5\n");
    return 0;
}