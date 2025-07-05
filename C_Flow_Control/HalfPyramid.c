//program to display a half pyramid using * (stars)
#include <stdio.h>
int main() {
    int i, j, rows;
    printf("Enter number of rows:");
    scanf("%d", &rows);

    for(i=1; i <= rows; i++) {
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

/*
Example Output for Input 5:
Enter number of rows:5
* 
* * 
* * * 
* * * * 
* * * * * 

*/