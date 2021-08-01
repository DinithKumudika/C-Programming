#include <stdio.h>

int temp, lastdigit, sum;
int start, end;
void printArmstrong(int start, int end);
int Armstrong(int x);

int main()
{
    printf("Enter the starting number:");
    scanf("%d", &start);
    printf("Enter the ending number:");
    scanf("%d", &end);
    printArmstrong(start, end);
    
    return 0;
}

 //Check whether the given number is armstrong number or not.
 //Returns 1 if the number is armstrong otherwise 0.

int Armstrong(int x)
{
    temp = x;
    sum = 0;
    /* Calculate sum of cube of digits */
    
    while(temp != 0)
    {
        lastdigit = temp % 10;
        sum += lastdigit * lastdigit * lastdigit;
        temp /= 10;
    }
    if(x == sum)// checking that sum of cube of digits equals to the number
    {
        return 1;
    }
    else
    { 
        return 0;
    }
}

void printArmstrong(int start, int end)//funtion to print armstrong numbers between the interval
{
    while(start <= end)
    {
        if(Armstrong(start)) 
        {
            printf("%d is an armstrong number\n", start);
        }
        
        start++;
    }
}
