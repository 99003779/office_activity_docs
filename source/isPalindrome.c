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