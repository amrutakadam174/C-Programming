// Function with No Arguments but Return Value

#include <stdio.h>
int getNum();  // function declaration

int main() {
    int value = getNum();  // function call
    printf("The number is: %d\n", value);
    return 0;  // return 0 for successful program end
}

int getNum() {
    int num;
    printf("Enter a number:");
    scanf("%d", &num);  // read input from user
    return num;  // return the number entered by the user
}
