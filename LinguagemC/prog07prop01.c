// char Nome[25+1];
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int strcountc(char *s, char ch) 
{
    int contador = 0;
    for(int i=0 ; s[i] ; i++)
        if(s[i] == ch)
            contador++;
    
    return contador;
}

int strcounta2(char *s)
{
    int contador = 0;
    for(int i=0 ; s[i] != '\0' ; i++)
    {
        if(islower(s[i]) || isupper(s[i]))
            contador++;
    }

    return contador;
}

char *init_str2(char *s)
{
    for(int i=0 ; s[i] != '\0' ; i++)
        s[i] = '\0';
}

int ult_ind_chr(char *s, char c)
{
    int ind = -1;
    for(int i=0 ; s[i] != '\0' ; i++)
    {
        if(s[i] == c)
            if(i > ind)
                ind = i;
    }

    return ind;
}

char *strlwr2(char *str)
{
    for(int i=0 ; str[i]; i++)
        str[i] = toupper(str[i]);

    return str;
}

char *strnset2(char *s, char ch, int n)
{
    if(n>strlen(s))
        n = strlen(s);

    for(int i=0 ; i<n ; i++)
        s[i] = ch;

    return s;
}

int stricmp2(char *s1, char *s2)
{
    for(int i=0 ; s1[i] ; i++)
        if(toupper(s1[i]) == toupper(s2[i]))
            continue;
        else
            return 0;
    return 1;
}

char *repeticoes(char *s)
{
    int i,j;
    for(i=j=0 ; s[i] ; i++)
        if(strcountc(s, s[i]) > 1)
            s[j++] = s[i];
    s[j] = '\0';
    return s;
}

char *n_esimo(char *s, int n)
{
    return s[n-1];
}

char *strpack(char *s)
{
    int i,j;
    for(i=j=0 ; s[i] ; i++)
        if(s[i] != s[j])
            s[++j] = s[i];
    s[++j] = '\0';
    return s;
}

char *Entremeado(char *s, int n)
{
    int i,j;
    if(n == 0)
        return s;
    
    for(i=j=0 ; i<strlen(s) ; i+= n+1)
        s[j++] = s[i];
    s[j] = '\0';
    return s;
}

main()
{
    char teste[] = "15 abacates", teste2[] = "quinze (15) acabates", teste3[] = "ALFACE", teste4[] = "Arrecadddaccao";
    printf("%d\n", strcounta2(teste));
    printf("%d\n", strcounta2(teste2));
    printf("%d\n", ult_ind_chr("alface", 'a'));
    printf("%d\n", ult_ind_chr("alface", 'g'));
    printf("%s\n", strlwr2(teste));
    printf("%s\n", strnset2(teste2, 'y', 3));
    printf("%s\n", strnset2(teste2, 'y', 25));
    printf("%d\n", stricmp2("abacate", "ABACATE"));
    printf("%c\n", n_esimo(teste3, 3));
    printf("%s\n", repeticoes(teste3));
    printf("%s\n", init_str2(teste));
    printf("%s\n", strpack(teste4));
}