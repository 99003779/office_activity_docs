#include <stdio.h> 
  
// Function to set the kth bit of n 
int set(int n, int k) 
{ 
    return (n | (1 << (k - 1))); 
} 

