//program to find the cube of a number

#include<stdio.h>
float x;//variable to store the input 
float y;//variable to store funtion output
float cube(float);//function to find the cube
int main()
{
    printf("Enter the Number-:");
    scanf("%f",&x);//getting the input of x
    y=cube(x);//calling the function
    printf("Cube of %.3f = %.3f\n",x,y);//print cube x
    
    return 0;
}
float cube(float x)//function to calculate the cube of number
{
    return (x*x*x);
}