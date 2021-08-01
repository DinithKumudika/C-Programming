//program to find a given number is even or odd
#include<stdio.h>
int num;
int evenodd(int);//function to find if number is even or odd
int main()
{
    printf("Enter the Number-:");//get the number
    scanf("%d",&num);
    evenodd(num);//print output
    
    return 0;
}
int evenodd(int num)
{
    if(num%2==0)//modding the number to find the remainder when it is divided by 2
    {
        printf("%d is an Even number\n",num);
    }
    else
    {
        printf("%d is an Odd number\n",num);
    }
}