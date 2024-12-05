// simple if statements:- 
// if else statements.
// if elseif else statements.
// nested if statements.

#include<stdio.h>
int main(){
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    if(num>0){
        printf("\n Number is positive");
    }
    else if(num<0){
        printf("\n Number is negative");
    }
    else{
        printf("\n Number is zero");
    }
    printf("\n Thank you");
}