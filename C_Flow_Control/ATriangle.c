//Area of triangle
#include<stdio.h>
int main() {
    int b, h, area;

    printf("Enter Base of Triangle: ");
    scanf("%d", &b);
    printf("Enter Height of Triangle: ");   
    scanf("%d", &h);

    area = (b * h) / 2;
    printf("Area of Triangle is : %d\n", area);

    return 0;
}