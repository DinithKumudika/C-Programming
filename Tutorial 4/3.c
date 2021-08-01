//program to find the the maximum and minimum of two numbers
#include<stdio.h>
float first;
float second;
float minmax(float, float);//function to find maximum of two numbers
int main()
{ 
    printf("Enter the Numbers-:\n");//input the two numbers
    scanf("%f",&first);
    scanf("%f",&second);
    minmax(first,second);//print output
    return 0;
}
float minmax(float first, float second)
{
    if(first>second)//check what number is maximum and what is minimum
    {
       printf("%.3f is the maximum number\n",first);
       printf("%.3f is the minimum number\n",second); 
    }
    else
    {
       printf("%.3f is the maximum number\n",second);
       printf("%.3f is the minimum number\n",first); 
    }
}