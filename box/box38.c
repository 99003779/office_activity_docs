#include<stdio.h>
#include<stdlib.h>

struct Box {
    int uniqueID;
    int length;
    int breadth;
    int height;
    char color[100];
    int weight;
};
int main()
{
    
    printf("Enter number of elements:");
    scanf("%d", &n);
    struct Box* arrayOfBoxes = malloc(n*sizeof(struct Box));

    printf("Box Added\n");
    

  