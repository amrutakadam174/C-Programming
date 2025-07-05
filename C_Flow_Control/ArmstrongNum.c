//program to check whether a number is an Armstrong number or not.

#include <stdio.h>

int main() {
    int num, originalNum, remainder, result = 0;

    // Ask user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Store original number for comparison later
    originalNum = num;

    // Loop to extract digits and calculate the sum of cubes
    while (originalNum != 0) {
        remainder = originalNum % 10;                  // Get last digit
        result += remainder * remainder * remainder;   // Add cube of digit to result
        originalNum /= 10;                             // Remove last digit
    }

    // Check if the result equals the original number
    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}

// Example Input/Output:
/* Enter a number: 153
   153 is an Armstrong number.

   Armstrong numbers between 1 and 1000 are:
1
153
370
371
407

*/