//check whether the number is even or odd
#include<stdio.h>
int main (){
    int num;
    printf("Enter an Number:");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("The number %d is Even\n", num);
    }
    else {
        printf("The number %d is Odd\n", num);
    }
    return 0;
}