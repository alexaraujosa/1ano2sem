#include <stdio.h>

int main()
{
    int plays, i, inzelCounter=0, cmdCounter=0, tieCounter=0;
    char fst, snd;

    if(scanf("%d", &plays))
    {}

    for(i=0 ; i<plays ; i++)
    {
        if(scanf(" %c%c", &fst, &snd))  // Espaço em branco para a função ignorar todos os espaços vazios no buffer do teclado
        {}

        if((fst == '|' && snd == '*' ) || (fst == '@' && snd == '+') || (fst == 'X' && snd == '-'))
            inzelCounter += 1;

        else if((fst == '@' && snd == '-') || (fst == 'X' && snd == '*') || (fst == '|' && snd == '+')) 
            cmdCounter += 1;
            
        else if((fst == '@' && snd == '*') || (fst == '|' && snd == '-') || (fst == 'X' && snd == '+'))
            tieCounter += 1;
    }

    printf("%d %d %d\n", inzelCounter, cmdCounter, tieCounter);
    return 0;
}