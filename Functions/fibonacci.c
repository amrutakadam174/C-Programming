//Fibonacci using Recursion

#include <stdio.h>

int fibonacci(int n) {
    //function definition
    if(n == 0) {
        return 0; //base case
    }
    if(n == 1) {
        return 1; //base case
    } 
    else {
        return fibonacci(n - 1) + fibonacci(n - 2); //fibonacci() function calls itself with n-1 and n-2
    }
}

int main() {
    int n, i;

    printf("Enter number of terms:");
    scanf("%d", &n);

    printf("Fibonacci Series:");

    for(i =0; i < n; i++) {
        printf("%d", fibonacci(i)); //function call
    }
    printf("\n");
    return 0;
}