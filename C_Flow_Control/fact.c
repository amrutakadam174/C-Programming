//program to find factorial of a number

#include<stdio.h>

int main() {
    int n, i;
    unsigned long long fact = 1; // Use unsigned long long to handle larger factorials

    printf("Enter a positive integer:");
    scanf("%d", &n);

    if(n < 0) {
        printf("Factorial is not defines for negative numbers\n");
    } else {
        for(i = 1; i<= n; i++) {
            fact = fact * i;
            
        }
        printf("Factorial of %d = %llu\n", n, fact);

    }
    
    return 0;
}