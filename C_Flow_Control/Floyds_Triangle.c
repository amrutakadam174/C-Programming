//Floyd's Triangle
#include <stdio.h>

int main() {
    int i, j, rows, number = 1;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++) {
        for(j = 1; j <= i; j++) {
            printf("%d ", number);
            number++;
        }
        printf("\n");
    }

    return 0;
}
/*
Example Output for Input 5:
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/