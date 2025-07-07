//program to find whether a number is prime or not
#include <stdio.h>

void prime();  // Function prototype

int main() {
    prime();    // Function call
    return 0;   // Return 0 for successful program end
}

void prime() {
    int n, i, flag = 0;

    printf("\nEnter the number: ");
    scanf("%d", &n);

    // 0 and 1 are not prime numbers
    if (n <= 1) {
        flag = 1;
    }

    // Check for factors from 2 to n/2
    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            flag = 1;  // Not a prime number
            break;
        }
    }

    if (flag == 1) {
        printf("\nEntered number %d is NOT a prime number.\n", n);
    } else {
        printf("\nEntered number %d is a PRIME number.\n", n);
    }
}
/*
output:
Enter the number: 13
Entered number is a PRIME number.

Enter the number: 10
Entered number is NOT a prime number.
*/