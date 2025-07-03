//Program to multiply 2 float value

#include<stdio.h>

int main(){
    float a, b, multiply;

    printf("Enter value for a :");
    scanf("%f", &a);
    printf("Enter value for b :");
    scanf("%f", &b);

    multiply = a * b;
    printf(" Multiplication of %.2f and %.2f is %.2f \n", a, b, multiply);
    
    return 0;
}