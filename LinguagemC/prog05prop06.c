#include <stdio.h>

long int num(int n_horas, char tipo)
{
    switch(tipo)
    {
        case 'h' : case 'H' : return (long) n_horas;
        case 'm' : case 'M' : return (long) n_horas*60;
        default : return (long) n_horas*60*60;
    }
}

main()
{
    printf("%ld\n", num(3, 'h'));
    printf("%ld\n", num(3, 'm'));
    printf("%ld\n", num(3, 's'));
}