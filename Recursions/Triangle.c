#include<stdio.h>
int n;//variable to store user input
int rownum=1;//starting value of rows
int writerow;
void rowprint(int);//function to print the row of numbers
void pattern(int);//function to jump to the next line

void pattern(int n)//function definition for number pattern
{
    if(n>0)
    {
        rowprint(rownum);
        printf("\n");
        rownum++;
        pattern(n-1);//recursive call of pattern function

    }
}

void rowprint(int writerow)//function definition for print rows
{
    if(rownum>0)
    {
        printf("%d",writerow);
        rowprint(writerow-1);//recursive call of rowprint function
    }
}

int main()
{
    printf("Enter a number-:");//get the input of how many rows there should be
    scanf("%d",&n);
    pattern(n);//calling the pattern function
    return 0;
}