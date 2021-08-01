#include<stdio.h>
int num;
int rev=0;
int rem;

int palindrom(int);

void palindrom(int num)
{
    rem=num%10;
    if(num>=0)
    {
        printf("%d is a palindromic number\n", num);
    }
    else 
    {

    }
}

int main()
{
    printf("Enter the Number-:");
    scanf("%d", num);
    palindrom(num);
    return 0;
}

