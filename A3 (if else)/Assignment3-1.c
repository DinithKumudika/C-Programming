#include <stdio.h>
int main(){
    float a;
    
    printf("Enter The Number-:");
    scanf("%f", &a);
    
    if (a>0)
    {printf("Positive Number\n");
    }
    else if (a<0)
    {printf("Negative Number\n");
    }
    else
    {printf("Zero\n");
    }
    return 0;
}
