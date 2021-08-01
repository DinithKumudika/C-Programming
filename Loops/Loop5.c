#include <stdio.h>
int main()
{
    int n;
    int x=1;
    int y=1;
    printf("Give the Value-:");
    scanf("%d",&n);
    for(y=1;y<=n;y++)
    {
        
        printf("\n\n");
        printf("Multiplication Table of %d, upto %d\n\n",y,n);
        
        for(x=1;x<=n;x++)
        {
            printf("%d * %d = %d    ",y,x,y*x);
        }
    }
return 0;
}