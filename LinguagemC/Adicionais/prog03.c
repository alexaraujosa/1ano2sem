#include <stdio.h>

main()
{

char letter;

    printf("Input alphabet: ");     scanf("%c", &letter);

    switch(letter)
    {
        case 'a' : case 'e' : case 'i' : case 'o' : case 'u' : 
        case 'A' : case 'E' : case 'I' : case 'O' : case 'U' : printf("'%c' is a vogal.\n", letter); break;

        default : printf("'%c' is a consoant.\n", letter);
    }

}