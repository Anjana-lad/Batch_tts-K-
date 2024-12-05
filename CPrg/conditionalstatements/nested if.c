// nested if : if inside if
#include<stdio.h>
int main(){
    char ch;
    int age;
    printf("select your choice :");
    printf("\n m - Male \n f - female");
    printf("Enter your choice:");
    scanf("%c",&ch);
    if(ch=='m'){
        printf("Enter age:");
        scanf("%d",&age);
        if(age>=21){  //. nested if
            printf("\n Person is eligible for marriage");
        }
        else{
            printf("\n Person is not eligible for marriage.");
        }
    }
    else if (ch == 'f'){
        printf("Enter age:");
        scanf("%d",&age);
        if(age>=18){  //nested if
            printf("Person is eligible for marriage");
        }
        else{
            printf("Person is not eligible for marriage.");
        }
    }
    else{
        printf("Invalid choice.");
    }
}