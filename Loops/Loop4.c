#include <stdio.h>
int main()
{
    long long int n;
    long long int x=0;
    printf("Enter the Number-:\n");
    scanf("%lli",&n);
    while (n>0 && n>=x)
    { 
      x=x+1;
      if (n%x==0)
      {
        printf("%lli is a factor of %lli\n",x,n);
      }
     
    }
    return 0;
    
}