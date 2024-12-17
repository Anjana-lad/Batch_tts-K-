/*
function is a block of statements that takes some input do some computation and gives us output.

 function have 3 parts
 1. function defintion;
 2.function declaration
3. function call;

ex:
return type function name (parameter list/arguments){
// function body
}

functionname(arguments)

*/

// program to print statement using function

#include<stdio.h>
int print();   // function defintion
int main(){
    print();  // function call;
}
int print(){  // function declaration
    printf("Hello");
}