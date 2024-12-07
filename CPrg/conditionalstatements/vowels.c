// switch case to print weather it is vowel or consonant.
#include<stdio.h>
int main(){
    char ch;
    printf("Enter character:");
    scanf("%c",&ch);
    switch (ch)
    {
    case 'A':
    case 'a':
        printf("A is Vowel");
        break;
    case 'E':
    case 'e':
        printf("E is Vowel");
        break;
      case 'I':
    case 'i':
        printf("i is Vowel");
        break;
      case 'O':
    case 'o':
        printf("O is Vowel");
        break;
      case 'U':
    case 'u':
        printf("U is Vowel");
        break;
    default:
        printf("It is consonant");
        break;
    }
}