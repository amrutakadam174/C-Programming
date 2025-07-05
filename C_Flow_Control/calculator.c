// Program for Arithmetic Calculator using switch-case and do-while loop
#include <stdio.h>

int main() {
    int a, b, ch;

    // Taking input from the user
        printf("\nEnter value of a: ");
        scanf("%d", &a);
        printf("Enter value of b: ");
        scanf("%d", &b);

    do {
        // Displaying menu
        printf("\n=== MENU ===\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");

        printf("Enter your choice (1-5): ");
        scanf("%d", &ch);

        switch(ch) {
            case 1:
                printf("\nResult: %d + %d = %d\n", a, b, a + b);
                break;

            case 2:
                printf("\nResult: %d - %d = %d\n", a, b, a - b);
                break;

            case 3:
                printf("\nResult: %d * %d = %d\n", a, b, a * b);
                break;

            case 4:
                if(b != 0) {
                    printf("\nResult: %d / %d = %.2f\n", a, b, (float)a / b);
                } else {
                    printf("\nError: Division by zero is not allowed.\n");
                }
                break;

            case 5:
                printf("\nExiting program. Thank you!\n");
                break;

            default:
                printf("\nInvalid choice! Please select a valid option from 1 to 5.\n");
        }

    } while(ch != 5);

    return 0;
}
