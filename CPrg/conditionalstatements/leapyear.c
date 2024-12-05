// leap year.
// #include<stdio.h>
// int main(){
//     int year;
//     printf("Enter year:");
//     scanf("%d",&year);
//     if((year%4==0) && (year%100!=0) || (year%400==0)){
//         printf("Year is a leap year");
//     }
//     else{
//         printf("Year is not a leap year.");
//     }
// }

// task  take input of marks and find percentage of it and give them grades according to there percent.
// percent (80-100) A;
// (60-80) B;
// (40-60) C:
// (35-40) D;
// fail;

#include<stdio.h>
int main(){
    int maths, science, english;
    float percent;
    printf("enter a marks of maths, english and science");
      scanf("%d %d %d",&maths, &science, &english);
    
      if(maths>=35 && science>=35 && english>=35){
          int total= maths+science+english;
          percent = ((maths + science + english) * 100)/300;
            printf("percentage = %f",percent);
            
    if (80<percent){
        printf("\n A");
    }
    else if (60<percent && 80>percent){
        printf("\n B");
    }

    else if (40<percent && 60>percent){
        printf("\n C");
    }
    
    else if (35<percent && 40>percent){
        printf("\n D");
    }
    else{
        printf("Do better.");
    }
      }
      else{
        printf("Better luck next time.");
      }
}