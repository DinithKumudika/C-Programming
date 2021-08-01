#include<stdio.h>
#include<string.h>

char str[256];
char ch;
int length;
int a;
char array(char);

int main()
{
    printf("Enter the array-:");
    length=strlen(str);
    gets(str);
    array(str[length]);

    return 0;
}

char array(char str[length])
{
    for(a=0; a<length; ++a)
    {
        if(length>0)
    {
        return array(str[a]);
        printf("%c",ch);
    }  
}