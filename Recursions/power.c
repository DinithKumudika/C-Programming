#include<stdio.h>
long long int n;
long long int E;
long long int power(long long int n, long long int E)//function to print the give power of given number
{
    if (E=0)
    {
        return 1;
    }
    else if(E>0)
    {
        return n * power(n, E-1);//re
    }
    else
    {
        return 1/power(n,-E);
    }
}

int main()
{
    long long int temp;
    printf("Enter the Number-:");//getting the input of number
    scanf("%lli",&n);
    printf("Enter the Exponent to the Number-:");//getting the input of exponent
    scanf("%lli",&E);
    temp = power(n, E);
    printf("%lli to the power of %lli = %lli\n",n,E,temp);
}