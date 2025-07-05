/*
To calculate the sum and average of positive numbers entered by the user.
If the user enters a negative number, it jumps out of the loop and shows the result.
*/
#include <stdio.h>

int main() {
    const int maxInput = 100;
    int i;
    double number, average, sum = 0.0;

    for (i = 1; i <= maxInput; ++i) {
        printf("%d. Enter a number: ", i);
        scanf("%lf", &number);

        // If user enters a negative number, jump to result
        if (number < 0.0) {
            goto jump;
        }

        sum += number;
    }

jump:
    average = sum / (i - 1);
    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}

/*
Example Input/Output:
1. Enter a number: 10
2. Enter a number: 20
3. Enter a number: -5
Sum = 30.00
Average = 15.00
*/