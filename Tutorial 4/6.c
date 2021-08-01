//program to find a given number is armstrong number or not
#include<stdio.h>

int num;//variable to store the input number
int x;//variable to store the multiplication of remainders
int sum =0;//variable to store the sum of cubes of digits
int temp;//temporary variable to contain sum
int rem;//variable to store the remainder
int armstrong(int);//function to check the number is a armstrong number or not

int main()
{
    printf("Enter the number of 3 digits-:");//get the input of 3 digit number
    scanf("%d",&num);
    armstrong(num);//calling the function
    
    return 0;
}

int armstrong(int num)//defining the function
{
    temp=num;//temporary variable to store the given value of num
    while (num>0)
    {
        rem = num % 10;
        x = rem * rem * rem;
        sum = sum + x;//getting the sum of cubes of digits
        num = num / 10;
        //abc= a^3 + b^3 + c^3
    }
    if(temp==sum)
    {
        printf("%d is an armstrong number\n",temp);
    }
}