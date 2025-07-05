//program to find out fibonacci series up to n terms
#include <stdio.h>
int main() {
    int n, i;
    unsigned long long a = 0, b = 1, next; // Use unsigned long long to handle larger Fibonacci numbers
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);
    printf("Fibonacci series up to %d terms:\n", n);
    for(i = 0; i < n; i++) {
        if(i == 0) {
            printf("%llu ", a);
        } else if(i == 1) {
            printf("%llu ", b);
        } else {
            next = a + b;
            a = b;
            b = next;
            printf("%llu ", next);
        }
    }
    printf("\n");
    return 0;
}