// reverse number using loop.
#include<stdio.h>
int main(){
    int num,rem,rev=0;
    printf("Enter number:");
    scanf("%d",&num);
    while(num>0){
        rem=num%10;
        rev=rev*10+rem;
        num/=10;
    }
    printf("Reverse number=%d",rev);
}