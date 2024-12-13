//pattern 5
/*
* * * * *
  * * * *
    * * * 
      * *
        *
*/

// #include<stdio.h>
// int main(){
//     int row,col,space;
//     for(row=5;row>=1;row--){
//         for(space=5-row;space>=1;space--){
//             printf("  ");
//         }
//         for(col=1;col<=row;col++){
//             printf("* ");
//         }
//     printf("\n");
//     }

// }

/*
1 1 1 1 1
  2 2 2 2
    3 3 3
      4 4
        5
*/
// #include<stdio.h>
// int main(){
//     int row,col,space,num=1;
//     for(row=5;row>=1;row--){
//         for(space=5-row;space>=1;space--){
//             printf("  ");
//         }
//         for(col=1;col<=row;col++){
//             printf("%d ",num);

//         }
//         num++;
//         printf("\n");
//     }
// }

/*
1 2 3 4 5
  1 2 3 4
    1 2 3
      1 2
        1
*/

// #include<stdio.h>
// int main(){
//     int row,col,space, num=0;
//          for(row=5;row>=1;row--){
//         for(space=5-row;space>=1;space--){
//             printf("  ");
//         }
//         for(col=1;col<=row;col++){
//             printf("%d ",num+col);
//         }
//         printf("\n");
//     }
// }

/*
          *
        * * *
      * * * * *
    * * * * * * *
*/

#include<stdio.h>
int main(){
    int row, col, space;
    for(row=1;row<=4;row++){
      for(space=4;space>=row;space--){
        printf("   ");
      }
      for(col=1;col<=2*row-1;col++){
        printf(" * ");
      } 
        printf("\n");
    }
}