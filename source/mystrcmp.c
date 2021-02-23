int mystrcmp(char *s1, char *s2)
{
    while( ( *s1 != '\0' && *s2 != '\0' ) && *s1 == *s2 )
    {
        s1++;
        s2++;
    }

    if(*s1 == *s2)
    {
        return 0; // strings are identical
    }

    else
    {
        return *s1 - *s2;
    }
}