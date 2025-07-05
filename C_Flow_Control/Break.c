//program to calculate the sum of numbers (10 numbers max)
//if user enters negative number, the loop terminates

#include <stdio.h>
int main() {
    int i;
    double num, sum = 0.0;

    for(i=1; i <= 10; i++) {
        printf("Enter number %d (negative to stop): ", i);
        scanf("%lf", &num);

        if(num < 0.0) {
            printf("Negative number entered, terminating input.\n");
            break;
        }

        sum += num;
    }
    printf("Sum = %.2lf\n", sum);
    
    return 0;
}