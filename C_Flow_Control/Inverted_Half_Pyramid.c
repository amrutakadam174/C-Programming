//Inverted Half Pyramid
#include <stdio.h>

int main() {
    int i, j, rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i = rows; i >= 1; i--) {
        for(j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
/*
Example Output for Input 5:
* * * * *
* * * *
* * *
* *
*
*/