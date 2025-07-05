//program to find the sum of natural numbers up to n
#include <stdio.h>

int main() {
    int n, i;
    unsigned long long sum = 0; // Use unsigned long long to handle larger sums
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if(n < 0) {
        printf("Sum is not defined for negative numbers\n");
    } else {
        for(i = 1; i <= n; i++) {
            sum = sum + i;
        }
        printf("Sum of natural numbers up to %d = %llu\n", n, sum);
    }
    return 0;
}