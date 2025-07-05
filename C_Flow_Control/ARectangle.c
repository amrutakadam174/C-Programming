//find area of rectangle
#include <stdio.h>
int main() {
    int l, b, area;

    printf("Enter Length of Rectangle:");
    scanf("%d", &l);
    printf("Enter Breadth of Rectangle: ");
    scanf("%d", &b);

    area = l * b;
    printf("Area of Rectangle is :%d\n", area);

    return 0;
}