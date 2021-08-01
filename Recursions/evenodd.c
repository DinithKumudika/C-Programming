#include<stdio.h>
int num;
int even(int num)
{
    if(num==0)
    {
        return 1;
    }
    else
    {
        odd(num+1);
    }
}
int odd(int num)
{
    return !even(num);
}

int main()
{
    int a;
    int b;
    printf("Enter the Number");
    scanf("%d",&num);
    even(num);
    odd(num);
}