#include<stdio.h>
// Function to toggle the kth bit of n 
int flip(int n, int k) 
{ 
    return (n ^ (1 << (k - 1))); 
} 