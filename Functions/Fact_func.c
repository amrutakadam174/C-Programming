//find factorial of no. using functions

#include <stdio.h>

int factorial(int n);   // Function declaration

int main() {
    int n;

    // Prompt user for input
    printf("\n Enter the number:");
    scanf("%d", &n);

    // Validate input
    if(n < 0) {
        printf("\n Factorial is not defined for negative numbers.");
        return 1; // Exit with error code
    }
    printf("\n Factorial is = %d", factorial(n));

    return 0;
}

// Function to calculate factorial of a number
int factorial(int n) { // function defination
    // Recursive function to calculate factorial
    
    if(n >= 1){ 
        return n * factorial(n-1);
    }
    else {
        return 1; // Base case: factorial of 0 is 1
    }
}