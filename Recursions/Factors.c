#include<stdio.h>
long long int n;
long long int factorial(long long int n)
{
    if(n>=1)
    {
        return n * factorial(n-1);
    }
    else
    {
        return 1;
    }
}

int main()
{
    long long int temp;
    printf("Enter the Number-:");
    scanf("%lli",&n);
    temp = factorial(n);
    printf("Factorial of %lli is %lli\n",n,temp);
}