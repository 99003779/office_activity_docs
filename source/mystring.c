#include <stdio.h>
#include<string.h>
char *mystrcat(char *s1, char *s2)
{
    char *start = s1;

    while(*s1 != '\0')
    {
        s1++;
    }

    while(*s2 != '\0')
    {
        *s1 = *s2;
        s1++;
        s2++;
    }

    *s1 = '\0';
    return start;
}
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

int mystrcpy() {
    char s1[100]="program", s2[100], i;

    for (i = 0; s1[i] != '\0'; ++i) {
        s2[i] = s1[i];
    }
    s2[i] = '\0';
    printf("String s2: %s", s2);
    return 0;
}
int mystrlen()
{
    char str[50]="Hello";
    int i, len = 0;
    
    for (i=0; str[i] != '\0'; i++)
    {
        len++;
    }
    printf("Length of string is %d", len);
}