#include<stdio.h>
#include<stdlib.h>

char* splitString(char inputStr[1000]) {

    int i, dollarStart = 0, semiColon = 0;
    for(i = 0; inputStr[i]!='\0'; i++) {
        if(inputStr[i]=='$') {
            dollarStart = i;
        }
        if(inputStr[i]==';') {
            semiColon = i;
            break;
        }
    }
    char *outputStr = malloc(1001);
    int j = 0;
    for(i = dollarStart+1; i <= semiColon; i++) {
        outputStr[j] = inputStr[i];
        j++;
    }
    outputStr[semiColon] = '\0';
    return outputStr;
}

int main()
{
    char inputStr[1000];
    gets(inputStr);

    printf("%s\n", splitString(inputStr));

    FILE *fp = fopen("input.txt", "r");
    if(fp == NULL) {
        printf("Unable to open file!");
        return 0;
    }
    char line[256];

    while (fgets(line, sizeof(line), fp)) {
        printf("%s\n", splitString(line));
    }
    return 0;
}


///////////////////////////

#include<stdio.h>
#include<stdlib.h>

char* splitString(char inputStr[1000]) {

    int i, dollarStart = 0, semiColon = 0;
    for(i = 0; inputStr[i]!='\0'; i++) {
        if(inputStr[i]=='$') {
            dollarStart = i;
        }
        if(inputStr[i]==';') {
            semiColon = i;
            break;
        }
    }
    char *outputStr = malloc(1001);
    int j = 0;
    for(i = dollarStart+1; i <= semiColon; i++) {
        outputStr[j] = inputStr[i];
        j++;
    }
    outputStr[semiColon] = '\0';
    return outputStr;
}

int main()
{
    char inputStr[1000];
    gets(inputStr);

    printf("%s\n", splitString(inputStr));

    FILE *fp = fopen("input.txt", "r");
    if(fp == NULL) {
        printf("Unable to open file!");
        return 0;
    }
    char line[256];

    while (fgets(line, sizeof(line), fp)) {
        printf("%s\n", splitString(line));
    }
    return 0;
}