//Pattern 2:
/*
        *
      * *
    * * *
  * * * *
* * * * * 
*/
// #include<stdio.h>
// int main(){
//     int row,col,space;
//     for(row=1;row<=5;row++){
//         for(space=4;space>=row;space--){
//             printf("  ");
//         }
//         for(col=1;col<=row;col++){
//             printf("* ");
//         }
//         printf("\n");
//     }
// }
/*
        1
      1 2
    1 2 3
  1 2 3 4
1 2 3 4 5 
*/

// #include<stdio.h>
// int main(){
//     int row,col,space;
//     for(row=1;row<=5;row++){
//         for(space=4;space>=row;space--){
//             printf(" ");
//         }
//         for(col=1;col<=row;col++){
//             printf("%d",col);
//         }
//     printf("\n");
//     }
// }

/*
        5
      5 4
    5 4 3
  5 4 3 2
5 4 3 2 1 
*/

// #include<stdio.h>
// int main(){
//     int row, col, space;
//     for(row=5;row>=1;row--){
//         for(space=1;space<=row;space++){
//             printf(" ");
//         }
//         for(col=5;col>=row;col--){
//             printf("%d",col);
       
//         }
        
//         printf("\n");
//     }
// }

#include<stdio.h>
int main(){
    int row, col;
    for(row=1;row<=5;row++){
        for(col=1;col<=row;col++){
            if(col%2==0){
                printf("0");
            }
            else{
                printf("1");
            }
        }
        printf("\n");
    }
}