#include <stdio.h> 
int main() 
{
  long long int n,x;
  long long int y = 0;
  printf("Enter any number:");
  scanf("%lli", &n);

  for (x = 1; x <= n; x++)
  {
      if (n % x == 0) 
      {
         y=y+1;
      }
  }

  if (y == 2) 
  {
  printf("%lli is a Prime number\n",n);
  }
  else 
  {
  printf("%lli is not a Prime number\n",n);
  }
  return 0;    
}