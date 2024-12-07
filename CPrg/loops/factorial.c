// // factorial : 5!= 5*4*3*2*1=120;
// #include<stdio.h>
// int main(){
//     int fact=1;
//     int num;
//     printf("Enter number:");
//     scanf("%d",&num);
//     for(int i=1;i<=num;i++){
//         fact=fact*i;
//     }
//     printf("Factorial=%d",fact);
// }


#include<stdio.h>
int main(){
    int fact = 1;
    int num, i=1;
    
    printf("enter a number:");
    scanf("%d",&num);
    while(i<=num){
        fact =fact*i;
        i++;
    }
    printf("factorial = %d",fact);
}