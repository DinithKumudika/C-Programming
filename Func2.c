#include<stdio.h>
char fun();//function declaration
int main()
{
    char c = fun ();
    printf("character is-:%c",c);
}

char fun()
{
    return 'a';
}