#include<stdio.h>
int OTh;
int Normalh;
int ths;
int salary(int , int);
int main()
{
    printf("Enter the number of normal hours-:");
    scanf("%d",&Normalh);
    printf("Enter the number of OT hours-:");
    scanf("%d",&OTh);
    ths=salary(Normalh,OTh);
    printf("take home salary is Rs.%d",ths); 
    return 0;
}
int salary(int Normalh, int OTh)
{
    return ((150*Normalh + 75*OTh) - ((150*Normalh + 75*OTh)*0.1));
}