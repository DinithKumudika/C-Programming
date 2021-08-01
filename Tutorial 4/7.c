//program to find all prime numbers between a given interval

#include<stdio.h>

int start;//varaible to store the starting number of interval
int end;//varaible to store the ending number of interval
int x;
int y;
int temp;
int primeinterval(int, int);//declaring the function to find all prime numbers between the given interval

int main()
{
  printf("Enter the starting number-:");//get the start point of interval
  scanf("%d",&start);
  printf("Enter the ending number-:");//get the end point of interval
  scanf("%d",&end);
  primeinterval(start, end);//calling function to print output
  
  return 0;
}

int primeinterval(int start, int end)//function defining
{
  for (x = start; x <= end; x++)//checking the numbers between start point and end point of interval
  {
    if(x==1 || x==0)//0 and 1 are not prime numbers
      continue;
    temp=1;//temporary variable
    for(y=2; y<=x/2; y++)
    {
      if (x % y == 0) 
      {
        temp=0;
        break;
      }
    }   
      if(temp==1)//if temp=1 number is a prime number
      {
        printf("%d is a prime number\n",x);
      }    
  }
}  
