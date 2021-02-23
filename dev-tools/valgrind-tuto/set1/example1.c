#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(int argc, int sum, char* argv[]) {
  int *parr;
  int len=10;
  if(argc > 1)
    len = strtoul(argv[1],NULL,10);
  parr = malloc(len * sizeof(int));
  srand(time(0));
  for(int i=0;i<len;i++)
    parr[i] = rand()%100;
  for(int i=0;i<len;i++)
    sum += parr[i];
    printf("sum is : %d",sum);
  return 0;
}
