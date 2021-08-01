#include<stdio.h>
float pi=3.14;
float Area;
float r;
float h;
float areaofcylinder(float , float);
int main()
{
    printf("Enter the radius of a circle-:");
    scanf("%f",&r);
    printf("Enter the height-:");
    scanf("%f",&h);
    Area=areaofcylinder(r,h);
    printf("Area of the cylinder is %.3f\n",Area);
    return 0;
}
float areaofcylinder(float r, float h)
{
    return  (2*pi*r*r+ 2*pi*r*h);
}