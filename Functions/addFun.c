//Function with Arguments and Return Value

#include<stdio.h>

int add(int a, int b);  // function declaration

int main() {
    int x =10, y =20;  // example numbers
    int result = add(x, y);  // function call
    printf("The sum of %d and %d is %d\n", x, y, result);  // display result
    return 0;  // return 0 for successful program end
}

int add(int a, int b) {
    // function definition
    return a + b;  // return the sum of a and b
}