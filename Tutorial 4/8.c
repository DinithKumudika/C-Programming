#include<stdio.h>  
int main()  
{  
    int y=1,sum=0;  
    int start,end,rem; 
    int x; 
    printf("Enter the starting number-:");  
    scanf("%d",&start);  
    printf("Enter the ending number-:");  
    scanf("%d",&end);  
    for(int x=start;x<=end;x++)  
    {  
        int z=x;  
        while(z!=0)  
        {  
            rem=z%10;  
            y=factorial(rem);  
            z=z/10;  
            sum=sum+y;  
        }  
        if(sum==x){  
        printf("%d, ",x);  
        }  
           sum=0;  
    }  
   return 0;  
}  
int factorial(int f)  
 {  
        int temp=1;  
        for(int x=1; x<=f;x++)  
        {  
            temp=temp*x;  
        }  
        return temp;  
    }  