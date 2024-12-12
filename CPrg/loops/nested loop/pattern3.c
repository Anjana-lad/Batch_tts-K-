// pattern 3
/*
* * * * *
* * * *
* * *
* *
*
*/

// #include<stdio.h>
// int main(){
//     int row,col;
//     for(row=0;row<5;row++){
//         for(col=4;col>=row;col--){
//             printf("* ");
//         }
//     printf("\n");
//     }
// }
/*
A A A A A
B B B B
C C C
D D
E
*/

// #include<stdio.h>
// int main(){
//     int row,col;
//     char ch='A';
//     for(row=5;row>=1;row--){
//         for(col=1;col<=row;col++){
//             printf("%c ",ch);
//         }
//         ch++;
//     printf("\n");
//     }
// }
/*
1 0 1 0 1
0 1 0 1
1 0 1
0 1
1
*/

// #include<stdio.h>
// int main(){
//     int row,col;
//     for(row=5;row>0;row--){
//         for(col=0;col<row;col++){
//             printf("%d ",(row+col)%2);
//         }
//     printf("\n");
//     }
// }


/*
A B C D E
A B C D
A B C
A B
A
*/
// #include<stdio.h>
// int main(){
//     int row,col;
//     char ch='A';
//     for(row=5;row>0;row--){
//         for(col=0;col<=row;col++){
//           printf("%c ",ch+col);
//         }
//     printf("\n");
//     }
// }

/*
E D C B A
D C B A
C B A
B A
A
*/

#include<stdio.h>
int main(){
    int row,col;
    char ch='A';
    for(row=1;row<=5;row++){
        for(col=5-row;col>=0;col--){
            printf("%c ",ch+col);
        }
    printf("\n");
    }
}

