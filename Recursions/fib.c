#include<stdio.h>
int num;
int fib(int);

int fib(int num)
{
    if (num==0)
    {
        return 0;
    }
    else if(num==1)
    {
        return 1;
    }
    else
    {
        return fib(num-1)+fib(num-2);   
    } 
}

int main()
{
    int res;
    printf("Enter the number-:");
    scanf("%d", &num);
    while(n<0)
    {
        printf("Invalid Input! Try again\n");
        printf("Enter the number-:");
        scanf("%d", &num);
    }
    
    res= fib(num);
    printf("%d\n",res);
    return 0;
}