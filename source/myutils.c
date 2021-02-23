#include <stdio.h> 
  
// Function to find factorial of given number 
unsigned int factorial(unsigned int n) 
{ 
    if (n == 0) 
        return 1; 
    return n * factorial(n - 1); 
} 
void isPalindrome(char s1[]) 
{ 
    // Start from leftmost and rightmost corners of str 
    int l = 0; 
    int h = strlen(s1) - 1; 
  
    // Keep comparing characters while they are same 
    while (h > l) 
    { 
        if (s1[l++] != s1[h--]) 
        { 
            printf("%s is Not Palindrome", s1); 
            return; 
        } 
    } 
    printf("%s is palindrome", s1); 
} 
int isprime(int n)
{
	int i;
	for(i=2;i<=n/2;i++)
	{
		if(n%i!=0)
			continue;
		else
			return 1;
	}
	return 0;
}