#include<stdio.h>
int areaofR(int length,int width)//user defined function
{
    int area;
    area=length*width;
    return area;
}
int main()
{
    int l;
    int w;
    printf("Enter the Length-: \n");
    scanf("%d",&l);
    printf("Enter the Width-: \n");
    scanf("%d",&w);
    int area=areaofR(l,w);//calling the function //passing the inputs
    printf("Area= %d",area);
}