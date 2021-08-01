//program to find a given number is prime or not
#include<stdio.h>
int num,x;
int y = 0;
int prime(int);//function to find whether the given number is prime or not
int main()
{
    printf("Enter the Number-:");//get the number
    scanf("%d",&num);
    prime(num);//print output
    return 0;
}
int prime(int num)
{
 for (x = 1; x <= num; x++)//check all the numbers less than or equal to given number
  {
    if (num % x == 0) 
    {
        y=y+1;//a counter variable to store the number of factors the given number has
    }
  }
  if (y == 2)//condition to check y is equal to 2 or not
  {
  printf("%d is a Prime number\n",num);
  }
  else 
  {
  printf("%d is not a Prime number\n",num);
  }
}  