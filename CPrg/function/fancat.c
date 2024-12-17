// function categories :
/*
1. with no arguments no return;
2. with no arguments with return ;
3. with arguments no return;
4. with arguments with returns;
*/

// 1. with no arguments and no returns;
// #include<stdio.h>
// int sum(){
//     int a,b;
//     printf("Enter numbers:");
//     scanf("%d %d",&a,&b);
//     printf("Result=%d",a+b);
// }
// int main(){
//     sum();
// }

// 2.  with no arguments with return ;

// #include<stdio.h>
//  int sum(){
//     int a,b;
//     printf("Enter numbers:");
//     scanf("%d %d",&a,&b);
//    return a+b;
// }
// int main(){
//     printf("Sum=%d",sum());
// }

//3.with arguments no return;
// #include<stdio.h>
//  int sum(int a,int b){
//   printf("Sum=%d",a+b);
// }
// int main(){
//     int a,b;
//     printf("Enter numbers:");
//     scanf("%d %d",&a,&b);
//     sum(a,b);
// }

// 4.  with arguments with returns;
#include<stdio.h>
int sum(int a,int b){  // here a and b are formal parameters
    return a+b;
}
int main(){
    int x,y; 
    printf("Enter numbers:");
    scanf("%d %d",&x,&y);
    printf("Sum=%d",sum(x,y));  // a,b call is actual parameters
}

// types of arguments:
// 1. formal arguments : declare with function defintion; 
// 2. actual arguments :at the time of function calling parameters are called actual parameters
