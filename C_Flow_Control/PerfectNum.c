//Program to find the entered number is perfect number or not
#include<stdio.h>
int main() {
    int num, i, sum = 0, rem;
    printf("Enter a number:");
    scanf("%d", &num);

    for(i =1; i < num; i++) { //loop until i < num (not <=)
        rem = num % i;
        if(rem == 0) {
            sum = sum + i;
        }
    }
    if(sum == num) {
        printf("%d is a perfect Number", num);
    } 
    else {
        printf("%d is not a perfect Number", num);
    }
    return 0;
}
// Output: The program will output whether the entered number is a perfect number or not.
/*
Input: 28
Output: 28 is a Perfect Number.
(Because 1 + 2 + 4 + 7 + 14 = 28)
*/