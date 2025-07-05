//Program to display Half Pyramid using Numbers
#include<stdio.h>
int main() {
    int i, j, rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows); 

    for(i = 1; i <= rows; i++) {
        for(j = 1; j <= i; j++) {
            printf("%d ", j); // Print numbers instead of stars
        }
        printf("\n"); // Move to the next line after each row
    }


    return 0;
}

/*
Example Output for Input 5:
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/