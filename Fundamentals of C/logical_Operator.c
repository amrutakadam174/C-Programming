#include<stdio.h>

int main() {
    int a = 5, b = 10;
    if (a < b && b > 0) {
        printf("Both conditions are true.\n");
    }
    if (a > b || b > 0) {
        printf("At least one condition is true.\n");
    }
    return 0;
}