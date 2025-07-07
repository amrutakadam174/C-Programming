//Function with Arguments but No Return Value

#include <stdio.h>

void square(int num); // function declaration

int main() {
    int number = 5; // example number
    square(number); // function call
    return 0; // return 0 for successful program end
}

void square(int num) {
    //function definition
    int result = num * num; // calculate square
    printf("the square of %d is %d\n", num, result); // display result
}