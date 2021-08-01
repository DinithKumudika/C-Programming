#include <stdio.h>
int main()
{
  long long int n;
  long long int rev=0;
  long long int rem;
  printf("Enter the Number\n");
  scanf("%lli",&n);
  while(n>0)
  {
      rem=n%10;
      rev=(rev*10)+rem;
      n=n/10;
  }
  printf("Reversed number is %lli", rev);
  return 0; 
}