//program to find out ssum of numbers within a range
#include <stdio.h>

int main() {
    int start, end, sum = 0;

    // Input the range
    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    // Calculate the sum within the range
    for (int i = start; i <= end; i++) {
        sum += i;
    }

    // Output the result
    printf("Sum of numbers from %d to %d is: %d\n", start, end, sum);

    return 0;
}
