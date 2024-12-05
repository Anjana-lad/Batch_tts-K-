// area of circle.
#include<stdio.h>
#define pi 3.14
int main(){
    float radius,area;
   // const float pi=3.14;
    printf("Enter radius:");
    scanf("%f",&radius);
    area=pi * radius*radius;
    printf("Area of circle=%.2f",area);
}