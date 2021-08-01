#include <stdio.h>
int main(){
    char ch;
    
    printf("Enter The Character-:");
    scanf("%c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
     { 
      printf("Character is a Vowel\n");
     }
     else
     {
      printf("Character is a Consonant\n");
     }
     
    return 0;   
}
