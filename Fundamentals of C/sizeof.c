// program to find the size of int, float, double, and char data types
#include<stdio.h>

int main() {
    int a;
    float b;
    double c;
    char d;

    printf("size of int: %lu bytes\n", sizeof(a));
    printf("size of float: %lu bytes\n", sizeof(b));
    printf("size of double: %lu bytes\n", sizeof(c));
    printf("size of char: %lu bytes\n", sizeof(d));

    return 0;
}