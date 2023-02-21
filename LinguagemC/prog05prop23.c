int isVogal(char ch)
{
    switch(tolower(ch))
    {
        case 'a' :
        case 'e' :
        case 'i' :
        case 'o' :
        case 'u' : return 1;
        default  : return 0;
    }
}

main()
{
    return 0;
}