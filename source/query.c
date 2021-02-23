#include <stdio.h> 
  
// Function to query the kth bit of n 
int query(int n, int k) 
{ 
    return (n | (1 << (k - 1))); 
} 
