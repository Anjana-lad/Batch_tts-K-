// logical operator : &&(And) ,|| (or), !(not).
#include<stdio.h>
int main(){
    int num1=50,num2=30;
    printf("Num1=%d \n num2=%d",num1,num2);
    int res= (num1>=20) && (num2<80);
    printf("\n Logical And=%d",res);
       res= (num1<=20) || (num2>80);
    printf("\n Logical or=%d",res);
       res= !(num1<=20);
    printf("\n Logical NOT=%d",res);
}