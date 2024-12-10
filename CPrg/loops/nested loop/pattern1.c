// Pattern1:
/*
 * * * * *
 * * * * *
 * * * * *
 * * * * *
 * * * * *
 */
// #include<stdio.h>
// int main(){
//     int row,col;
//     for(row=0;row<5;row++){
//         for(col=0;col<5;col++){
//             printf("* ");
//         }
//     printf("\n");
//     }
// }

/*
 *
 * *
 * * *
 * * * *
 * * * * *
 */

// #include<stdio.h>
// int main(){
//     int row,col;
//     for(row=0;row<5;row++){
//         for(col=0;col<=row;col++){
//             printf("* ");
//         }
//     printf("\n");
//     }
// }

/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/
// #include <stdio.h>
// int main()
// {
//     int row,col,num=1;
//     for (row=1;row<=5;row++){
//         for(col=1;col<=row;col++){
//             printf("%d ",num);
//             num++;
//         }
//     printf("\n");
//     }
// }
/*
A
B C
D E F
G H I J
K L M N O
*/
// #include <stdio.h>
// int main()
// {
//     int row,col;
//     char ch='A';
//     for (row=1;row<=5;row++){
//         for(col=1;col<=row;col++){
//             printf("%c ",ch);
//             ch++;
//         }
//     printf("\n");
//     }
// }

/*
A
* *
B C D
* * * *
E F G H I
*/
#include<stdio.h>
int main(){
    int row,col;
    char ch='A';
    for(row=1;row<=5;row++){
        for(col=1;col<=row;col++){
            if(row%2==0){
                printf("* ");
            }
            else{
              printf("%c ",ch);
              ch++;
            }
        }
    printf("\n");
    }
}

/*
1
1 0
1 0 1
1 0 1 0
1 0 1 0 1
*/