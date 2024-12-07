// nested switch :
#include<stdio.h>
int main(){
    int choice;
    int ch;
    printf("Enter choice for food.");
    printf("\n 1. Pizza");
    printf("\n 2. Cold- drink");
    printf("\n Enter choice:");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("\n Menu for Pizza:");
        printf("\n 1. Veg Pizza");
        printf("\n 2. Cheese Pizza");

        printf("\n Enter choice for Pizza.");
        scanf("%d",&ch);
        switch (ch){
        case 1:
            printf("\n You selected Veg Pizza");
            break;
        case 2:
            printf("\n You selected Cheese Pizza");
            break;
        default:
            printf("\n Invalid Pizza choice");
            break;
        }
        break;
    
    case 2:
        printf("\n Menu for cold -Drink");
        printf("\n 1. Coke");
        printf("\n 2. Fresh Juice");
        printf("\n Enter choice for Cold- Drink");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("\n You selected Coke");
            break;
        case 2:
            printf("\n You selected Fresh Juice");
            break;
        default:
            printf("\n Invalid Cold- drink choice");
            break;
        }
        break;
    default:
        printf("Thank you");
        break;
    }
}