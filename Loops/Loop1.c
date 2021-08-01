#include <stdio.h>
int main(){
    long long int a;
    long long int total=0;
    printf("Enter the numbers-:\n");

    while (a>0)
    {
       
       scanf("%lli",&a);
       if (a>0)
       total=total+a;

    }
printf("sum of the numebers = %lli\n",total);
return 0;
}