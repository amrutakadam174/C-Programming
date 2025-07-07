//Calculate the power of a number using recursion

#include <stdio.h>
#include <math.h>

int power(int n1, int n2);

int main() {
    int a, result, base;

    printf("\n Enter the value:");
    scanf("%d", &base);
    printf("\n Enter the power:");
    scanf("%d", &a);

    result = power(base, a);

    printf("\nResult is = %d", result);

    return 0;
}

int power(int n1, int n2) {
    if(n2 != 0) {
        return(n1 * power(n1, n2 - 1));
    }
    else {
        return 1;
    }
}