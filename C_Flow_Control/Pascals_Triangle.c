//Pascal's Triangle
#include <stdio.h>

int factorial(int n) {
    int i, fact = 1;
    for(i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    int i, j, rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i = 0; i < rows; i++) {
        // Print spaces
        for(j = 0; j < rows - i - 1; j++)
            printf(" ");
        
        for(j = 0; j <= i; j++)
            printf("%d ", factorial(i) / (factorial(j) * factorial(i - j)));
        
        printf("\n");
    }
    return 0;
}
/*
Example Output for Input 5:
    1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1
*/