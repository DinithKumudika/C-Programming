#include<stdio.h>
long long int n1;
long long int n2;
long long int gcd(long long int n1, long long int n2)
{
    if(n2 ==0)
    {
        return n1;
    }
    else
    {
        return gcd(n2, n1%n2);
    }
}

int main()
{
    long long int temp;
    printf("Enter the first Number-:");
    scanf("%lli",&n1);
    printf("Enter the Second Number-:");
    scanf("%lli",&n2);
    temp = gcd(n1, n2);
    printf("GCD of %lli and %lli is-:%lli\n",n1,n2,temp);
    return 0;
}
