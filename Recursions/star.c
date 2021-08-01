#include <stdio.h>
  
// function to print a row 
void printn(int num); 
// function to print the pattern 
void pattern(int n, int i); 
  
// driver function 
int main() 
{ 
    int n;
    if(scanf("%d", &n) != 1)
    {
        printf("Invalid number");
        return 1;
    } 
    pattern(n, 1); 
    return 0; 
}

void pattern(int n, int i) 
{ 
    // base case 
    if (n == 0) 
        return; 
    printn(i); 
    printf("\n");
  
    // recursively calling pattern() 
    pattern(n - 1, i + 1); 
}

void printn(int num) 
{ 
    // base case 
    if (num == 0) 
        return; 
    printf("* "); 
  
    // recursively calling printn() 
    printn(num - 1); 
}