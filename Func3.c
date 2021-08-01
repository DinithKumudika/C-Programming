#include<stdio.h>
int add(int , int);
int main()
{
    int m;
    int n;
    int sum;
    sum= add(m,n);
    printf("enter first no-:");
    scanf("%d",&m);
    printf("enter second no-:");
    scanf("%d",&n);
    printf("Sum is %d",sum);
    return 0;
}
int add(int a, int b)
{
    return (a+b);
}