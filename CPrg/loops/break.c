// break;continue and goto are loop control statements:
// #include<stdio.h>
// int main(){
//     int i;
//     for(i=0;i<=10;i++){
//         if(i==6){
//             continue;
//         }
//         else{
//              printf("%d\n ",i);
//         }
       
//     }
// }

// goto statements:
/*
syntax:
    label:
        // execute st;

goto label;
*/

#include<stdio.h>
int main(){
    int num;
    label:
        printf("\n Enter number:press 0 to stop");
        scanf("%d",&num);
        
    if(num>0){
        printf("\n Square of number=%d",num*num);
        goto label;
    }
    else{
         printf("\nend of program"); 
    }
 }