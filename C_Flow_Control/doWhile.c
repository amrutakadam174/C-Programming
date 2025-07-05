// Program to add numbers until user enters zero
#include <stdio.h>

int main() {
    int num, sum = 0;

    // Loop runs at least once
    do {
        printf("Enter a number (0 to stop): ");
        scanf("%d", &num);  // Read input
        sum += num;         // Add input to sum
    } while(num != 0);      // Stop if input is 0

    printf("The sum is: %d\n", sum);  // Print final sum
    return 0;
}

/*
Example Output:

Enter a number (0 to stop): 10  
Enter a number (0 to stop): 20  
Enter a number (0 to stop): -5  
Enter a number (0 to stop): 0  
The sum is: 25
*/