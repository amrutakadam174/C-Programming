//program to find GCD (Euclidean Algorithm) using Recursion

#include <stdio.h>

int gcd(int a, int b) {
    if(b == 0) {
        return a; //base case
    }
    else{
        return gcd(b, a % b); //recursive call
    }
}

int main() {
    int a, b;
    // Prompt user for input
    printf("GCD of two numbers using Recursion\n");
    printf("Enter a:");
    scanf("%d", &a);
    printf("Enter b:");
    scanf("%d", &b);
    
    // Call gcd function and print result
    printf("GCD of %d and %d is: %d\n", a, b, gcd(a, b)); //function call
    return 0;
}