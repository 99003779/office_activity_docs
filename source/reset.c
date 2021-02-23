 #include<stdio.h>
// Function to clear the kth bit of n 
int reset(int n, int k) 
{ 
    return (n & (~(1 << (k - 1)))); 
} 
  