//find Area of circle

#include <stdio.h>
#define PI 3.14

int main() {
    float radius, area;
    //const PI = 3.14
    
printf("Enter value of Radius:");
scanf("%f", &radius);

area = PI * radius * radius;
printf("Area of circle: %2.f\n", area);

return 0;

}