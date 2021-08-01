#include<stdio.h>
int n;// variable to store the user input
int term=0;
int fib(int);//function to print a term of fibonacci series
void fibonacciSeq(int);//function to jump to the next term

int fib(int n)//definition of fib funtion
{
    if (n==0)
    {
        return 0;
    }
    else if (n==1)
    {
        return 1;
    }
    else
    {
        return fib(n-1) + fib(n-2);//recursive call of fibonacci function(binary recursion)   
    }  
}
void fibonacciSeq(int n)//definition of fibonacciSeq function
{
    if(term<=n)
    {
        printf("%d\n",fib(term));
        term++;
        fibonacciSeq(n);//recursive call of fibonacciSeq function
    }
}

int main()
{
    printf("Enter the Number of Fibonnacci Terms-:");//get the input for n th term 
    scanf("%d",&n);
    fibonacciSeq(n);
    
    return 0;
}