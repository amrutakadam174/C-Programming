//Factorial using Recursion

#include<stdio.h>

 int factorial(int n) {
    //function definition
    if(n == 0 || n ==1) {
        return 1; //base case
    } 
    else {
        return n * factorial(n - 1); //factorial() function calls itself with n-1
    }
 }

 int main() {
    int num;

    printf("Enter a Number:");
    scanf("%d", &num);

    printf("Factorial of %d is %d\n", num, factorial(num)); //function call
    return 0;
 }