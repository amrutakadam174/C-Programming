#include<stdio.h>
int main ()
{
    int a, b, sum, subtract, multiplication, division;
    printf("Enter value of a :\n");
    scanf("%d",&a);
    printf("Enter value of b :\n");
    scanf("%d",&b);
    
    //Addition of a and b
    sum = a + b;
    printf("Sum of %d and %d is %d\n",a, b, sum);

    //Subtraction of a and b
    subtract = a - b;
    printf("Difference of %d and %d is %d\n",a, b, subtract);

    //Multiplication of a and b
    multiplication = a * b;
    printf("Multiplication of %d and %d is %d\n",a, b, multiplication);

    //Division of a and b
    division = a / b;
    printf("Division of %d and %d is %d\n",a, b, division);

    // Modulus of a and b
    if (b != 0) {
        int modulus = a % b;
        printf("Modulus of %d and %d is %d\n", a, b, modulus);
    } else {
        printf("Modulus operation cannot be performed as b is zero.\n");
    }

    return 0;
}
