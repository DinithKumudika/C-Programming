//program to find armstrong numbers between an interval
#include<stdio.h>

int start;//variable for starting number
int end;//variable for ending number
int x;
int y=0;
int z;
int temp;
int rem;//variable to store the remainder
int armstronginterval(int, int);//function to check the number is a armstrong number or not

int main()
{
    printf("Enter the starting number-:");//get the starting number of interval
    scanf("%d",&start);
    printf("Enter the ending number-:");//get the ending number of interval
    scanf("%d",&end);
    armstronginterval(start, end);//calling the function
    
    return 0;
}
int armstronginterval(int start, int end)//defining the function
{
  while (start < end)
  {
    temp = start + 1;
    while (temp>=1)
    {
        rem = temp % 10;
        x = rem * rem * rem;
        y = y + x;
        temp = temp / 10;
    }
    if(temp==y)
    {
        printf("%d is an armstrong number\n",temp);
    }
  start++;
  }
}  