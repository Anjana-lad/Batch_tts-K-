// number is palindrome or not.
#include<stdio.h>
int main(){
    int num,rem,rev=0;
    printf("Enter number:");
    scanf("%d",&num);
    int original_num=num;
    while(num>0){
        rem=num%10;
        rev=rev*10+rem;
        num/=10;
    }
    printf("Reverse number=%d",rev);

    if(rev==original_num){
        printf("\n Number is palindrome");
    }
    else{
        printf("\n Not a Palindrome");
    }
}