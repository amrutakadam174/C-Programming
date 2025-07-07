//program to calulate area of circle with function

#include <stdio.h>
#define PI 3.14  // define constant for PI

void area();  // function declaration

int main()
{
    area(); //function call to calculate area
    return 0;
}

void area()  // function to calculate area of circle
{
    float r, area;
    printf("Enter the Radius of circle:");
    scanf("%f", &r);  // read radius from user

    area = PI * r * r;  // calculate area using the formula
    printf("The area of circle is %.2f\n", area);

}