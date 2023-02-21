#include <stdio.h>

long int num(int n_horas, char tipo)
{
    long int res=n_horas;
    switch(tipo)
    {
        case 's' : case 'S' : res = res * 60;
        case 'm' : case 'M' : res = res * 60; 
    }
    return res;
}

main()
{
    printf("%ld\n", num(3, 'h'));
    printf("%ld\n", num(3, 'm'));
    printf("%ld\n", num(3, 's'));
}