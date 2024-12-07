// switch case : multiple if condition .
// program to print week days.
#include<stdio.h>
int main(){
    int day;
    printf("Enter day:");
    scanf("%d",&day);
    switch(day){
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
           break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thrusday");
            break;
          case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7 :
            printf("Sunday");
            break;
        default: 
            printf("Invalid day");
             break;  
    }
}