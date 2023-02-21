#include <stdio.h>

long int num(int n_horas, char tipo)
{
    if (tipo == 'h'|| tipo == 'H')
        return (long) n_horas;
    else if (tipo == 'm' || tipo == 'M')
        return (long) n_horas*60;
    else 
        return (long) n_horas*60*60;
}

main()
{
    printf("%ld\n", num(3, 'h'));
    printf("%ld\n", num(3, 'm'));
    printf("%ld\n", num(3, 's'));
}