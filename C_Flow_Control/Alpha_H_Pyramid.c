//Half Pyramid using Alphabets
#include <stdio.h>

int main() {
    int i, j, rows;
    char ch;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++) {
        ch = 'A';
        for(j = 1; j <= i; j++) {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}
/*
Example Output for Input 5:
A
A B
A B C
A B C D
A B C D E
*/  