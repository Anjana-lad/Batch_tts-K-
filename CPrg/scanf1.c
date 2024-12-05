// taking input from user and print it.
#include<stdio.h>
int main(){
    int num1;
    char ch;
    float f;
    
    printf("Enter character:");
    scanf("%c",&ch);
    printf("Enter number:");
    scanf("%d",&num1);
    printf("Enter float value:");
    scanf("%f",&f);

    printf("Character=%c",ch);
    printf("Integer=%d",num1);
    printf("Float value=%f",f);
}

// escape sequence .
// \n : for new line .
// \t : for tab.
// \a : for audio.
// \f : for formfeed.