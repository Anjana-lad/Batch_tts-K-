// fibonacci series : 0,1,1,2,3,5,8,13,21,34,55...
#include<stdio.h>
int main(){
    int n1=0,n2=1,temp,num;
    printf("Enter number to stop:");
    scanf("%d",&num);
    printf("Fibonacci series:\n");
    printf("%d,%d,",n1,n2);
   int count=2;
    while(count<num){
        temp=n1+n2;
        n1=n2;
        n2=temp;
    count++;
    printf("%d,",temp);
    }
}