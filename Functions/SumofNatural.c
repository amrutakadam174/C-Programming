//Sum of Natural numbers using recursion
#include<stdio.h>

int sum(int n); //function declaration

int main() {
    int num, result;

    printf("Enter a Number:");
    scanf("%d", &num);

    result = sum(num); //function call
    printf("Sum = %d\n", result);

    return 0; 
}

int sum(int n) {
    //function definition
    if(n != 0) {
        return n + sum(n -1);   //sum()function calls itself with n-1 
    } 
    else {
        return n; //base case
    }
}