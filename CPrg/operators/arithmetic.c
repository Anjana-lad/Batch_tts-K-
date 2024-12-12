// arithmetic operator : +,-,/,*,%,++,--

#include<stdio.h>
int main(){
    int num1,num2,res;
    printf("Enter numbers:");
    scanf("%d %d",&num1,&num2);
    res=num1+num2;
    printf("\n sum=%d",res);
    res=num1-num2;
    printf("\n Subtract=%d",res);
    res=num1*num2;
    printf("\n multiply=%d",res);
    res=num1/num2;
    printf("\n Division=%d",res);
    res=num1%num2;
    printf("\n Modulo=%d",res);

//  increment and decrement operator
//     pre: ++a,--a;
//     post : a++,a--;   

int a=5;
++a;
printf("\n a=%d",a);
a=5;
a--;
printf("\n a=%d",a--);
printf("\n a=%d",a);
}