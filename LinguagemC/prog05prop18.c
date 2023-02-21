#include <ctype.h>

char toupper(char c)
{
    if(islower(c))
        return c+'A'-'a';
    else
        return c;
}

main()
{
    return 0;
}