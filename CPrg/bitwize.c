// bitwise operator : &,|,^,<<,>> ,~
// ~num=-(num+1);
#include<stdio.h>
int main(){
    int num1=8,num2=7;
    printf("\n Bitwise and=%d",num1&num2);
    printf("\n Bitwise OR=%d",num1|num2);
    printf("\n Bitwise XOR=%d",num1^num2);
    printf("\n negation =%d",~num1);
    printf("\n shift right=%d",num1>>2);
    printf("\n shift left=%d",num1<<2);
}