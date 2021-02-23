#include <stdio.h>
#include<string.h>
int mystrlen()
{
    char s1[50]="Hello";
    int i, n = 0;
    
    for (i=0; s1[i] != '\0'; i++)
    {
        n++;
    }
    printf("Length of string is %d", n);
}