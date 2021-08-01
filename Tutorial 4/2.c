//program to find the diameter, circumference and area of a circle
#include <stdio.h>
float pi=3.14;
float r, d, c, a;
float diameter(float);//function to output the diameter of circle
float circu(float);//function to output the circumference of circle
float area(float);//function to output the area of circle
int main()
{
    printf("Enter the Radius-:\n");
    scanf("%f",&r);//input radius
    d=diameter(r);
    printf("diameter is %.3f\n",d);//print diameter
    c=circu(r);
    printf("circumference is %.3f\n",c);//print circumference
    a=area(r);
    printf("area is %.3f\n",a);//print area
    return 0;   
}
float diameter(float r)
{
    return (2*r);
}
float circu(float r)
{
    return (2*pi*r);
}
float area(float r)
{
    return (pi*r*r);
}